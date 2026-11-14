binaryLiteralUnions.c:<br>
how assignment of binary literals works with unions on a little-endian system<br>
for example, dosHeaderWindowsX64.magic = UINT16_C(0b01011010'01001101); //5A 4D<br>
results in 4D 5A when output is viewed in a hex editor. this is written in hex as 0x5A4D

hexToBinaryLiterals.c:<br>
converts text representation of hex numbers (from the command line) into text binary literals.

minimalWindowsExe.c:<br>
as far as I know, the most minimal C program it's possible to write for a Windows executable.

pointersToPointers.c:<br>
how to assign an address to a pointer in a function without losing the address on function return
