#include <stdio.h> // Include standard library

int main() { // _start but in C (Program starts here)
    int a = 69; // int = number
    printf("a: %d\n", a);

    // char = one letter, const char* = unlimited letters (string)
    double real_femboys = 69.6969; // float but better (float so bad...)
    double *femboy = &real_femboys; // pointer to real_femboys

    printf("double (float but better) real_femboys > %f\n", real_femboys); // read value '69.696900
    printf("real_femboys address: %p\n", (void*)femboy); // print pointer

    // float femboy = 69.6969;
    // reads as = 69.6966 because float is less precise

    return 0; // exit program
}

// compile C file as:
// Linux:  gcc manual.c -o real_femboy_file
// Windows (MinGW): gcc manual.c -o real_femboy_file.exe

// We LOVE C!
// C — The Global Programming Language
// Linux kernel — C
// Windows kernel — C
// Python interpreter — C
// C++ = C but faster
// minus of C — no high-level networking in the standard library
