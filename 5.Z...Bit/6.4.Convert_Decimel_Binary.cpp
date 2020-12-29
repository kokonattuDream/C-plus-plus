/**
 
*Converting integers to binary two’s complement

-5 in binary two’s complement:

binary relation for 5: 0000 0101
invert all of the bits: 1111 1010
Then we add 1: 1111 1011

-76 to binary:
Positive 76 in binary: 0100 1100
Invert all the bits: 1011 0011
Add 1: 1011 0100

*Converting binary two’s complement to integers
-If the sign bit is 0, just convert the number as shown for unsigned numbers above.
-If the sign bit is 1, 
    1.we invert the bits
    2.add 1
    3.convert to decimal
    4. make that decimal number negative 

convert 1001 1110 from two’s complement into a decimal number:
Given: 1001 1110
Invert the bits: 0110 0001
Add 1: 0110 0010
Decimal is 64 + 32 + 2 = 98
Since the original sign bit was negative, the final value is -98.
 */
