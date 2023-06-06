library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ShiftLeft32 is
    Port ( num_in : in  STD_LOGIC_VECTOR (31 downto 0);
           num_out : out  STD_LOGIC_VECTOR (31 downto 0));
end ShiftLeft32;

architecture Behavioral of ShiftLeft32 is

begin
	num_out(1 downto 0)<="00";
	num_out(31 downto 2)<=num_in(29 downto 0);
end Behavioral;