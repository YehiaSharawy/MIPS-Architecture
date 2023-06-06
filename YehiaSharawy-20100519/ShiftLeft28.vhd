library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ShiftLeft28 is
    Port ( num_in : in  STD_LOGIC_VECTOR (25 downto 0);
           num_out : out  STD_LOGIC_VECTOR (27 downto 0));
end ShiftLeft28;

architecture Behavioral of ShiftLeft28 is

begin
num_out(1 downto 0)<="00";
	num_out(27 downto 2)<=num_in;

end Behavioral;