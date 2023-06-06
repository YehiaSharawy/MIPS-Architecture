library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity SignExtend is
    Port ( num_in : in  STD_LOGIC_VECTOR (15 downto 0);
           num_out : out  STD_LOGIC_VECTOR (31 downto 0));
end SignExtend;

architecture Behavioral of SignExtend is

begin

process(num_in)
	begin
		num_out(15 downto 0)<=num_in;
		if(num_in(15)='1') then
			num_out(31 downto 16)<=x"ffff";
		else
			num_out(31 downto 16)<=x"0000";
		end if;
	end process;
end Behavioral;