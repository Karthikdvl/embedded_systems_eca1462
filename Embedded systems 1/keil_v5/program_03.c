//#include <reg51.h> // Include 8051 register definitions

//void main() {
//    unsigned char i, num = 5; // num = 5 for 5!
//    unsigned long factorial = 1; // 32-bit variable to store factorial

//    // Calculate factorial
//    for (i = 1; i <= num; i++) {
//        factorial *= i;
//    }

//    // Store factorial into port registers (Byte-wise)
//    P0 = factorial & 0xFF;          // LSB (Least Significant Byte)
//    P1 = (factorial >> 8) & 0xFF;   // Second byte
//    P2 = (factorial >> 16) & 0xFF;  // Third byte
//    P3 = (factorial >> 24) & 0xFF;  // MSB (Most Significant Byte)

//    while (1); // Infinite loop to prevent program from terminating
//}