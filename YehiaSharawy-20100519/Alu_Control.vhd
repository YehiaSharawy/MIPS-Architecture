library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Alu_Control is
    Port ( alu_op : in  STD_LOGIC_VECTOR (1 downto 0);
           funct : in  STD_LOGIC_VECTOR (5 downto 0);
           operation : out  STD_LOGIC_VECTOR (3 downto 0));
end Alu_Control;

architecture Behavioral of Alu_Control is

begin

process(alu_op,funct)
	begin
		if alu_op = "00" then
			operation <= "0010";
		elsif alu_op = "01" then
			operation <= "0110";
		end if;
		if alu_op = "10" then
			if funct(3 downto 0) = "0000" then
				operation <= "0010";
				end if;
			end if;
		if alu_op(1) = '1' then
			if funct(3 downto 0) = "0010" then
				operation <= "0110";
				end if;
		elsif alu_op(1) = '1' then
			if funct (3 downto 0) = "0010" then
				operation <= "0110";
				end if;
			end if;
		if alu_op = "10" then
			if funct(3 downto 0) = "0100" then
				operation <= "0000";
				end if;
			end if;
		if alu_op = "10" then
			if funct(3 downto 0) = "0101" then
				operation <= "0001";
				end if;
			end if;
		if alu_op(1) = '1' then
			if funct(3 downto 0) = "1010" then
				operation <= "0111";
				end if;
			end if;
		end process;
end Behavioral;