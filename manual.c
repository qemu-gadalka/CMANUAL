#include <stdio.h> // Include standard library

int main() { // _start but in C (Program starts here)
    int a = 69; // int = number
    printf("a: %d\n", a);

    // char = one letter, const char* = unlimited letters (string)
    double real_femboys = 69.6969; // float but better (float so bad...)
    double *femboy = &real_femboys; // Get 'real_femboys' address

    printf("double (float but better) real_femboys > %f\n", real_femboys); // read value
    printf("real_femboys address: %p\n", (void*)femboy); // read address via pointer

    // float femboy = 69.6969;
    // reads as = 69.6966

    return 0; // exit program
}

// compile C file as:
// Linux:  gcc astolfo.c -o real_femboy_file
// Windows (MinGW): gcc astolfo.c -o real_femboy_file.exe

// We LOVE C!
// C — The Global Programming Language
// Linux kernel — C
// Windows kernel — C
// Python interpreter — C
// C++ = C but faster
// minus of C — bad networking in the standard library :(
