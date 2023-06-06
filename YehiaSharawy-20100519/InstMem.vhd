library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity InstMem is
    Port ( read_address : in  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC;
           instruction : out  STD_LOGIC_VECTOR (31 downto 0));
end InstMem;

architecture Behavioral of InstMem is
type InstructionMemtypes is array (0 to 6) of STD_LOGIC_VECTOR (31 downto 0);
	signal InstructionMemArray:InstructionMemtypes:=(
	x"02108024",x"00851020",x"ac020008",x"8c060008",x"10c20001",x"0046882a",x"00a48822");
begin
	process(clk)
		begin
			if rising_edge(clk) then
				instruction <= InstructionMemArray(to_integer(unsigned(read_address)/4));
			end if;
	end process;
end Behavioral;