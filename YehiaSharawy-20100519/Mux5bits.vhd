library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Mux5bits is
    Port ( input1 : in  STD_LOGIC_VECTOR (4 downto 0);
           input2 : in  STD_LOGIC_VECTOR (4 downto 0);
           s : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (4 downto 0));
end Mux5bits;

architecture Behavioral of Mux5bits is

begin
	process(s,input1,input2)
	begin
		if s='0' then 
			output<=input1;
		else
			output<=input2;
		end if;
	end process;

end Behavioral;