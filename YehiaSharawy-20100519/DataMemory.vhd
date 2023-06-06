library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity DataMemory is
    Port ( address : in  STD_LOGIC_VECTOR (31 downto 0);
           write_data : in  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC;
           memread : in  STD_LOGIC;
           memwrite : in  STD_LOGIC;
           read_data : out  STD_LOGIC_VECTOR (31 downto 0));
end DataMemory;

architecture Behavioral of DataMemory is
type memory is array(0 to 35) of STD_LOGIC_VECTOR(7 downto 0);
signal datamem:memory := (
X"AB", X"CD", X"EF", X"00",
X"75", X"74", X"65", X"72",
X"20", X"41", X"72", X"63",
X"68", X"69", X"74", X"65",
X"12", X"34", X"56", X"78",
X"7F", X"7F", X"6D", X"6D",
X"00", X"00", X"00", X"00",
X"78", X"78", X"6A", X"6A",
X"00", X"00", X"00", X"01");
begin
	process(clk,memwrite,memread,address,write_data,datamem)
	begin
		if(memread='1' and memwrite='0') then
			read_data(31 downto 24) <= datamem(to_integer(unsigned(address)));
			read_data(23 downto 16) <= datamem(to_integer(unsigned(address)+1));
			read_data(15 downto 8) <= datamem(to_integer(unsigned(address)+2));
			read_data(7 downto 0) <= datamem(to_integer(unsigned(address)+3));
		elsif(memread='0' and memwrite='1' and rising_edge(clk)) then
			datamem(to_integer(unsigned(address))) <= write_data(31 downto 24);
		   datamem(to_integer(unsigned(address)+1)) <= write_data(23 downto 16);
			datamem(to_integer(unsigned(address)+2)) <= write_data(15 downto 8);
			datamem(to_integer(unsigned(address)+3)) <= write_data(7 downto 0);
		end if;
	end process;
end Behavioral;