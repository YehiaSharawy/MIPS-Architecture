library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity RegisterFile is
    Port ( readreg1 : in  STD_LOGIC_VECTOR (4 downto 0);
           readreg2 : in  STD_LOGIC_VECTOR (4 downto 0);
           writereg : in  STD_LOGIC_VECTOR (4 downto 0);
           writedata : in  STD_LOGIC_VECTOR (31 downto 0);
           regwrite : in  STD_LOGIC;
           readdata1 : out  STD_LOGIC_VECTOR (31 downto 0);
           readdata2 : out  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC);
end RegisterFile;


architecture Behavioral of RegisterFile is

	type RegFiletypes is array (0 to 31) of STD_LOGIC_VECTOR (31 downto 0);
	signal regArray:RegFiletypes:=(
	x"00000000",x"00000000",x"00000000",x"00000000",
	x"00000005",x"00000007",x"00000000",x"00000000",
	x"00000000",x"00000000",x"00000000",x"00000000",
	x"00000000",x"00000000",x"00000000",x"00000000",
	x"00000000",x"00000000",x"00000000",x"00000000",
	x"00000000",x"00000000",x"00000000",x"00000000",
	x"00000000",x"00000000",x"00000000",x"00000000",
	x"00000000",x"00000000",x"00000000",x"00000000");

begin
	readdata1 <= regArray(conv_integer (readreg1));
	readdata2 <= regArray(conv_integer (readreg2));
	process(clk,regwrite)
	begin
		if regwrite = '1' and rising_edge(clk) then
			regArray(conv_integer (writereg)) <= writedata;
		end if;
	end process;
end Behavioral;