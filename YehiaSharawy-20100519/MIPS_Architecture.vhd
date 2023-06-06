library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MIPS is
    Port ( clk : in  STD_LOGIC);
end MIPS;

architecture Behavioral of MIPS is
---------------------SIGNALS-----------------------------------

signal Inst: STD_LOGIC_VECTOR (31 downto 0);
signal Output_InstructionMux: STD_LOGIC_VECTOR(4 downto 0);
signal Output_InstMux : STD_LOGIC_VECTOR (4 downto 0);

signal branchAdder_Output : STD_LOGIC_VECTOR (31 downto 0);
signal Alu_Output : STD_LOGIC_VECTOR (31 downto 0);
signal Zero : STD_LOGIC;

signal Operat : STD_LOGIC_VECTOR (3 downto 0);
signal alu_op: STD_LOGIC_VECTOR (1 downto 0);
signal regdst : STD_LOGIC;
signal alusrc : STD_LOGIC;
signal memtoreg : STD_LOGIC;
signal memread : STD_LOGIC;
signal regwrite : STD_LOGIC;
signal memwrite : STD_LOGIC;
signal branch : STD_LOGIC;
signal jump : STD_LOGIC;
signal Output_BranchMux : STD_LOGIC_VECTOR(31 downto 0);
signal Output_JumpMux : STD_LOGIC_VECTOR(31 downto 0);

signal Zero_Branch : STD_LOGIC;

signal dataMemRead : STD_LOGIC_VECTOR (31 downto 0);
signal Output_DataMemMux : STD_LOGIC_VECTOR(31 downto 0);

signal PC_AdderOutput : STD_LOGIC_VECTOR (31 downto 0);
signal PC_Output : STD_LOGIC_vector (31 downto 0);
signal Reg_Data1 : STD_LOGIC_VECTOR (31 downto 0);
signal Reg_Data2 : STD_LOGIC_VECTOR (31 downto 0);
signal Output_RegMux : STD_LOGIC_VECTOR(31 downto 0);

signal Shift28_Output: STD_LOGIC_VECTOR(31 downto 0);
signal Shift32_Output: STD_LOGIC_VECTOR(31 downto 0);
signal SignExtend_Output: STD_LOGIC_VECTOR (31 downto 0);
---------------------INSTRUCTION MEMORY------------------------
component InstMem is
    Port ( read_address : in  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC;
           instruction : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
-------------------------PC ADDER------------------------------
component PC_Adder is
    Port ( num_in : in  STD_LOGIC_VECTOR (31 downto 0);
           num_out : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
-----------------------PC COUNTER------------------------------
component PC_Counter is
    Port ( pc_input : in  STD_LOGIC_VECTOR (31 downto 0);
           pc_output : out  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC);
end component;
---------------------ADDER 32BITS------------------------------
component Adder32 is
    Port ( a : in  STD_LOGIC_VECTOR (31 downto 0);
           b : in  STD_LOGIC_VECTOR (31 downto 0);
           output : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
-----------------------ALU 32BITS------------------------------
component Alu_32 is
    Port ( input1 : in  STD_LOGIC_VECTOR (31 downto 0);
           input2 : in  STD_LOGIC_VECTOR (31 downto 0);
           selector : in  STD_LOGIC_VECTOR (3 downto 0);
           output : out  STD_LOGIC_VECTOR (31 downto 0);
           zero : out  STD_LOGIC);
end component;
-----------------------ALU CONTROL-----------------------------
component Alu_Control is
    Port ( alu_op : in  STD_LOGIC_VECTOR (1 downto 0);
           funct : in  STD_LOGIC_VECTOR (5 downto 0);
           operation : out  STD_LOGIC_VECTOR (3 downto 0));
end component;
----------------------REGISTER FILE----------------------------
component RegisterFile is
    Port ( readreg1 : in  STD_LOGIC_VECTOR (4 downto 0);
           readreg2 : in  STD_LOGIC_VECTOR (4 downto 0);
           writereg : in  STD_LOGIC_VECTOR (4 downto 0);
			  writedata : in  STD_LOGIC_VECTOR (31 downto 0);
			  regwrite : in  STD_LOGIC;
			  readdata1 : out  STD_LOGIC_VECTOR (31 downto 0);
			  readdata2 : out  STD_LOGIC_VECTOR (31 downto 0);
			  clk : in  STD_LOGIC);
end component;
----------------------CONTROL UNIT-----------------------------
component ControlUnit is
    Port ( op_code : in  STD_LOGIC_VECTOR (5 downto 0);
           regdst : out  STD_LOGIC;
           alusrc : out  STD_LOGIC;
           memtoreg : out  STD_LOGIC;
           regwrite : out  STD_LOGIC;
           memread : out  STD_LOGIC;
           memwrite : out  STD_LOGIC;
           branch : out  STD_LOGIC;
			  jump: out STD_LOGIC;
           alu_op : out  STD_LOGIC_VECTOR (1 downto 0));
end component;
----------------------DATA MEMORY-----------------------------
component DataMemory is
    Port ( address : in  STD_LOGIC_VECTOR (31 downto 0);
           write_data : in  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC;
           memread : in  STD_LOGIC;
           memwrite : in  STD_LOGIC;
           read_data : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
----------------------MUX 32Bits-----------------------------
component Mux32bits is
    Port ( input1 : in  STD_LOGIC_VECTOR (31 downto 0);
           input2 : in  STD_LOGIC_VECTOR (31 downto 0);
           s : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
----------------------MUX 5Bits------------------------------
component Mux5bits is
    Port ( input1 : in  STD_LOGIC_VECTOR (4 downto 0);
           input2 : in  STD_LOGIC_VECTOR (4 downto 0);
           s : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (4 downto 0));
end component;
--------------------SHIFTLEFT 28Bits-------------------------
component ShiftLeft28 is
    Port ( num_in : in  STD_LOGIC_VECTOR (25 downto 0);
           num_out : out  STD_LOGIC_VECTOR (27 downto 0));
end component;
--------------------SHIFTLEFT 32Bits-------------------------
component ShiftLeft32 is
    Port ( num_in : in  STD_LOGIC_VECTOR (31 downto 0);
           num_out : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
----------------------SIGN EXTEND----------------------------
component SignExtend is
    Port ( num_in : in  STD_LOGIC_VECTOR (15 downto 0);
           num_out : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

begin
	
Zero_Branch <= branch and Zero;

InstructionMux_Comp_20100519: Mux5bits port map(Inst(20 downto 16), Inst(15 downto 11), regdst, Output_InstMux);
BranchMux_Comp_20100519: Mux32bits port map(PC_AdderOutput, branchAdder_Output, Zero_Branch, Output_BranchMux);
JumpMux_Comp_20100519: Mux32bits port map(Output_BranchMux, Shift28_Output, jump, Output_JumpMux);
DataToMemMux_Comp_20100519: Mux32bits port map(Alu_Output, dataMemRead, memtoreg, Output_DataMemMux);
RegisterMux_Comp_20100519: Mux32bits port map(Reg_Data2, SignExtend_Output, alusrc, Output_RegMux);

InstructionMem_Comp_20100519: InstMem	port map(PC_Output, clk, Inst);
RegisterFile_Comp_20100519: RegisterFile port map(Inst(25 downto 21), Inst(20 downto 16), Output_InstMux, Output_DataMemMux, regwrite, Reg_Data1, Reg_Data2, clk);
DataMmemory_Comp_20100519: DataMemory port map(Alu_Output, Reg_Data2, clk, memread, memwrite, dataMemRead);
ControlUnit_Comp_20100519: ControlUnit	port map(Inst(31 downto 26), regdst, alusrc, memtoreg, regwrite, memread, memwrite, branch, jump, alu_op);

ALU_Comp_20100519: Alu_32 port map(Reg_Data1, Output_RegMux, Operat ,Alu_Output, Zero);
AluControl_Comp_20100519: Alu_Control port map(alu_op, Inst(5 downto 0), Operat);

PC_Comp_20100519: PC_Counter port map(Output_JumpMux,PC_Output,clk);
PCAdder4_Comp_20100519: PC_Adder port map(PC_Output, PC_AdderOutput);
Adder_Comp_20100519: Adder32 port map(PC_AdderOutput, Shift32_Output, branchAdder_Output);

ShiftLeft_32_Comp_20100519: ShiftLeft32 port map(SignExtend_Output, Shift32_Output);
ShiftLeft_28_Comp_20100519: ShiftLeft28 port map(Inst(25 downto 0), Shift28_Output(27 downto 0));
Shift28_Output(31 downto 28) <= PC_AdderOutput(31 downto 28);
Sign_Comp_20100519: SignExtend port map(Inst(15 downto 0), SignExtend_Output);

end Behavioral;