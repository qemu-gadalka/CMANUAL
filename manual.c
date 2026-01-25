#include <stdio.h> // Include standard library
#include <string.h> // Include 'strcmp' library

void example(void) { // class with nothing
    printf("nothing\n");
    return; // return from class
}

void example2(int exvoid, char exchar) { // class with exvoid, exchar
    printf("exvoid --> %d\n", exvoid); // prints exvoid perm (int, %d)
    printf("exchar --> %c\n", exchar); // prints exchar perm (char, %c)
    return; // return from class
}

int main() { // _start but in C (Program starts here)
    int a = 69; // int = number
    printf("a: %d\n", a);

    // char = one letter, const char* = unlimited letters (string)
    double real_femboys = 69.6969; // float but better (float is so bad...)
    double *femboy = &real_femboys; // pointer to real_femboys

    printf("double (float but better) real_femboys > %f\n", real_femboys); // print value: 69.696900
    printf("real_femboys address: %p\n", (void*)femboy); // print memory address

    // float femboy2 = 69.6969;
    // reads as 69.696600 because float has less precision
    // 16.1.26: update :D
    char input[256];
    printf("enter random text: "); Prints text without NewLine For Prompt
    scanf("%[^\n]", input); // input (for %s (char) and perm (FOR VALUES USR %d!!!!))
    printf("you entered: %s\n", input); // prints your entered string
    if (strcmp(input, "youtext") == 0) { 
        // if perm == (is) "value" --> event
        printf("if worked!\n");
    }
    else if (strcmp(input, "youtext1") == 0 || strcmp(input, "youtext2") == 0) // DO NOT DO 2 IF ON 1 PERM!!! THIS IS -STABLE!!! + multi if example
    {
        printf("multi if worked!\n");
    }
    example(); // vizvat perm
    example2(1, "a"); // peredacha dannix
    return 0; // exit program
}

// compile C file as:
// Linux:  gcc manual.c -o real_femboy_file
// Windows (MinGW): gcc manual.c -o real_femboy_file.exe

// We LOVE C! (+ femboys btw)
// C — The Global Programming Language
// Linux kernel — C
// Windows kernel — C
// Python interpreter — C
// C++ = C but faster
// minus of C — no high-level networking in the standard library :(
