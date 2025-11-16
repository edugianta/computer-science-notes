// add2.asm
// Adds two numbers from RAM[0] and RAM[1], stores result in RAM[2]

@0      // Load address 0 into A register
D=M     // D = RAM[0] (first number)

@1      // Load address 1 into A register  
A=M     // A = RAM[1] (second number)

D=D+A   // D = first number + second number

@2      // Load address 2 into A register
M=D     // RAM[2] = sum

(END)   // Infinite loop to prevent running into undefined memory
@END
0;JMP
