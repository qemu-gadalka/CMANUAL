#include <stdio.h> // Include standard library
#include <string.h> // Include 'strcmp' library

#ifdef _WIN32
    #include <windows.h> // Include windows.h for Windows-specific API
#else
    #include <unistd.h> // Include unistd.h for Linux/Unix
#endif

void movecursor(void) {
    int x, y;

    printf("x pos (or col): ");
    if (scanf("%d", &x) != 1) return;

    printf("y pos (or row): ");
    if (scanf("%d", &y) != 1) return;

#ifdef _WIN32
    // Windows: Moves the actual mouse cursor on the screen
    SetCursorPos(x, y); 
#else
    // Linux/Unix: Moves the text cursor in the terminal window
    // \033[%d;%dH is the ANSI escape sequence for cursor position
    printf("\033[%d;%dH", y, x);
    fflush(stdout); 
#endif
}

void example(void) { // function with nothing
    printf("nothing\n");
    return; // return from function
}

void example2(int exvoid, char exchar) { // function with exvoid, exchar
    printf("exvoid --> %d\n", exvoid); // prints exvoid (int, %d)
    printf("exchar --> %c\n", exchar); // prints exchar (char, %c)
    return; 
}

void massiveexample(void) { // function
    const char *massivec[] = {"hello", "friend"}; // text massive
    int choisem; // number choise
    printf("Select 0, or 1: "); 
    
    if (scanf("%d", &choisem) != 1) { // security 
        printf("Bro, enter a NUMBER!\n");
        return;
    }

    // security check for array bounds
    if (choisem >= 0 && choisem < 2) {
        printf("Result: %s\n", massivec[choisem]); 
    } else {
        printf("Index %d is out of bounds! Are you trying to hack me?\n", choisem);
    }
}

int main() { // Program starts here
    int a = 69; // int = number
    printf("a: %d\n", a);

    double doubleman = 69.6969; // float but better
    double *doublemanaddr = &doubleman; // pointer to doubleman

    printf("double doubleman > %f\n", doubleman); // print value
    printf("doubleman address: %p\n", (void*)doublemanaddr); // print memory address

    char input[256];
    printf("enter random text: ");
    
    // Clear buffer before using fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    if (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = 0; // remove newline character
    }

    printf("you entered: %s\n", input);
    
    if (strcmp(input, "youtext") == 0) { 
        printf("if worked!\n");
    }
    else if (strcmp(input, "youtext1") == 0 || strcmp(input, "youtext2") == 0) 
    {
        printf("multi if worked!\n");
    }

    example();        // Call function without arguments
    example2(1, 'a'); // Pass int and char arguments
    massiveexample();
    movecursor(); // Cross-platform cursor move

    return 0; // exit program with code 0
}
