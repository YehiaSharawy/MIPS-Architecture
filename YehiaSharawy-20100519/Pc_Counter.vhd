library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity PC_Counter is
    Port ( pc_input : in  STD_LOGIC_VECTOR (31 downto 0);
           pc_output : out  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC);
end PC_Counter;

architecture Behavioral of PC_Counter is
signal Z: STD_LOGIC_vector (31 downto 0):=x"00000000";
begin
	process(clk,pc_input)
	begin
		if(falling_edge(clk)) then
			if (pc_input="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX") then
				pc_output <= x"00000000";
			else 
				pc_output<=pc_input;
			end if;
		end if;
		if(rising_edge(clk)) then
			Z<=pc_input;
		end if;
	end process;
end Behavioral;