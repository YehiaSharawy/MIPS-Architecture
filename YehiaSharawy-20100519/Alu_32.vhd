library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;
use IEEE.NUMERIC_STD.ALL;


entity Alu_32 is
    Port ( input1 : in  STD_LOGIC_VECTOR (31 downto 0);
           input2 : in  STD_LOGIC_VECTOR (31 downto 0);
           selector : in  STD_LOGIC_VECTOR (3 downto 0);
           output : out  STD_LOGIC_VECTOR (31 downto 0);
           zero : out  STD_LOGIC);
end Alu_32;

architecture Behavioral of Alu_32 is

begin
	process(input1,input2)
	begin
		if input1 = input2 then
			zero <= '1';
		else
			zero <= '0';
		end if;
	end process;
	process(input1,input2,selector)
	begin
		if selector="0000" then
			output <= input1 and input2;
		elsif selector="0001" then
			output <= input1 or input2;
		elsif selector="0010" then
			output <= input1 + input2;
		elsif selector="0110" then
			output <= input1 - input2;
		elsif selector="0111" then
				if input1<input2 then
					output <= X"00000001";
				else
					output <= X"00000000";
				end if;
		elsif selector="1100" then
			output <= input1 nor input2;
		end if;
	end process;
end Behavioral;