library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity PC_Adder is
    Port ( num_in : in  STD_LOGIC_VECTOR (31 downto 0);
           num_out : out  STD_LOGIC_VECTOR (31 downto 0));
end PC_Adder;

architecture Behavioral of PC_Adder is

begin
process(num_in)
	begin
		if num_in="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" then
			num_out <= x"00000000";
		else
			num_out <= num_in + x"00000004";
		end if;
	end process;
end Behavioral;