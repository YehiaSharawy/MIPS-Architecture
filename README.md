# MIPS-Architecture
 MIPS Processor implementation of single cycle using Xilinx ISE and VHDL.
 
 ## Tech Stack
 - VHDL
 
 ## Green Sheet for MIPS Architecture
<img width="649" alt="SCR-20230606-etmm" src="https://github.com/YehiaSharawy/MIPS-Architecture/assets/65984199/c05e8335-7d86-4e54-bc46-de19e55e5b08">

## Single Cycle MIPS Architecture
<img width="1037" alt="SCR-20230606-etiq" src="https://github.com/YehiaSharawy/MIPS-Architecture/assets/65984199/9da4ef50-dc75-4a6d-8729-9567e30a619f">

## Some used paarameters
### Memory File
- Memory[0]= 0x”ABCDEF00”
- Memory[1]= 0x”75746572”
- Memory[2]= 0x”20417263”
- Memory[3]= 0x”68697465”
- Memory[4] = 0x”12345678”
- Memory[5]= 0x”7F7F6D6D”
- Memory[6]= 0x”00000000”
- Memory[7]= 0x”78786A6A”
- Memory[8]= 0x”00000001”

### Register File
- $a0 = 5
- $a1 = 7

### Instructions
- add $v0, $a0, $a1
- sw $v0, 8($zero)
- lw $a2, 8($zero)
- beq $v0, $a2, Good_Processor
- slt $s1, $v0, $a2
- Good_Processor: sub $s1, $a1, $a0

## Output Simulation
![2](https://github.com/YehiaSharawy/MIPS-Architecture/assets/65984199/57ed4b1f-d5b3-435f-a53e-369ba3051946)

## Report
[MIPS Project Report - Yehia Sharawy 20100519 .pdf](https://github.com/YehiaSharawy/MIPS-Architecture/files/11659017/MIPS.Project.Report.-.Yehia.Sharawy.20100519.pdf)
