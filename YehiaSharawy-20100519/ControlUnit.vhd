library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ControlUnit is
    Port ( op_code : in  STD_LOGIC_VECTOR (5 downto 0);
           regdst : out  STD_LOGIC;
           alusrc : out  STD_LOGIC;
           memtoreg : out  STD_LOGIC;
           regwrite : out  STD_LOGIC;
           memread : out  STD_LOGIC;
           memwrite : out  STD_LOGIC;
           branch : out  STD_LOGIC;
           jump : out  STD_LOGIC;
           alu_op : out  STD_LOGIC_VECTOR (1 downto 0));
end ControlUnit;

architecture Behavioral of ControlUnit is

begin
process(op_code)
	begin
		if op_code = "000000" then
			regdst <= '1';
			alusrc <= '0';
         memtoreg <= '0';
         regwrite <= '1';
         memread <= '0';
         memwrite <= '0';
         branch <= '0';
         alu_op <= "10";
			jump <= '0';
		elsif op_code = "100011" then
			regdst <= '0';
			alusrc <= '1';
         memtoreg <= '1';
         regwrite <= '1';
         memread <= '1';
         memwrite <= '0';
         branch <= '0';
         alu_op <= "00";
			jump <= '0';
		elsif op_code = "101011" then
			alusrc <= '1';
         regwrite <= '0';
         memread <= '0';
         memwrite <= '1';
         branch <= '0';
         alu_op <= "00";
			jump <= '0';
		elsif op_code = "000100" then
			alusrc <= '0';
         regwrite <= '0';
         memread <= '0';
         memwrite <= '0';
         branch <= '1';
         alu_op <= "01";
			jump <= '0';
		elsif op_code = "000010" then
			jump <= '1';
		end if;
	end process;

end Behavioral;