#include <stdio.h>
#include <math.h>
#include <string.h>

int helloWorld(){
    // to print stuff:
    printf("Hello World!\n");
    printf("people!\n");
    return 0;
}

int Variables(){
    // variables 101:
    // C is statically typed
    char varName[] = "this is a variable with multiple characters";
    int number = 60;

    // %s for strings, %d for numbers, etc
    printf("my variable is: %d\n", number);
    printf("here is the varName: %s\n", varName);
    
    // to change variable:
    number = 30;
    printf("my variable is: %d\n", number);
    return 0;
}

int DataTypes(){
    // datatypes 101
    // when creating a variable we of course tell C the datatype. 
    /* these include:
        integers
            e.g. int age = 40;
        float 
            e.g. float cool = 2.19;
        double
            e.g. double gpa = 3.2;
        -> Double is more precise than float and can store 64 bits; double the number of bits float

        characters
            e.g. char favChar = 'X'; 
            you must use single quotation marks
        ^ to make sentences, we use strings.
        string
            e.g. char string[] = "very cool string";
            you must use double quotation marks
    */
    int age = 40;
    float cool = 2.19;
    double gpa = 3.2;
    char favChar = 'X';
    char string[] = "very cool string";
    printf("%d\n", age);
    printf("%f\n", cool);
    printf("%f\n", gpa);
    printf("%c\n", favChar);
    printf("%s\n", string);
    // to print these, you must use different format specifier to call them ^^

    return 0;
}

int printing(){
    // printf 
    // its a function
    // \n < for new lines
    // dont use quotation marks inside it, use \" instead
    // as mentioned before, there exist format specifiers:
    // the full list:
    /*
        %c			Character
        %d			Signed integer
        %e or %E	Scientific notation of floats
        %f			Float values
        %g or %G	Similar as %e or %E
        %hi			Signed integer (short)
        %hu			Unsigned Integer (short)
        %i			Unsigned integer
        %l or %ld or %li	Long
        %lf			Double
        %Lf			Long double
        %lu			Unsigned int or unsigned long
        %lli or %lld	Long long
        %llu		Unsigned long long
        %o			Octal representation
        %p			Pointer
        %s			String
        %u			Unsigned int
        %x or %X	Hexadecimal representation
        %n			Prints nothing
        %%			Prints % character
    */
    // the order in which you include these specifiers is the order in which they must appear as inputs to the printf function
    
    return 0;
}

int Mathematics(){
    // numbers and math
    // addition
    int x = 4+2; // 6
    // subtraction
    int y = 4-2; // 2
    // multiplication
    int z = 4*2; // 8
    // division
    int w = 4/2; // 2
    // if you do 5/4 the answer will be the integer approximation, so its important to note that integer opperations only output integers.
    printf("this is what 4+2 gives: %d\n", x);
    printf("this is what 4-2 gives: %d\n", y);
    printf("this is what 4*2 gives: %d\n", z);
    printf("this is what 4/2 gives: %d\n", w);
    // math functions:
    printf("pow(2, 3) = %f\n", pow(2, 3)); // 8
    printf("sqrt(36) = %f\n", sqrt(36)); // 6
    printf("ceil(36.234) = %f\n", ceil(36.234)); // 37
    printf("floor(36.234) = %f\n", floor(36.234)); // 36

    // from <math.h>: 
    /*
        abs(x)	Returns the absolute value of x
        acos(x)	Returns the arccosine of x
        asin(x)	Returns the arcsine of x
        atan(x)	Returns the arctangent of x
        cbrt(x)	Returns the cube root of x
        cos(x)	Returns the cosine of x
        exp(x)	Returns the value of Ex
        sin(x)	Returns the sine of x (x is in radians)
        tan(x)	Returns the tangent of an angle
    */
    return 0;
}

int Constants() {
    // Constants 101
    // these are mutable objects:
    int num = 5;
    printf("%d\n", num);
    printf("%p\n", (void *)&num);
    num = 8;
    printf("%d\n", num);
    printf("%p\n", (void *)&num);
    // the value of num changes ^^
    // its position remains
    // a mutable object is one that can be changed

    const int number = 5;
    // this will make it a constant, which is immutable
    // an immutable object is one that cannot be changed
    // The next line would give an error if it was ran:
    // num = 8;
    // since the number is immutable. 
    // thats what a constant is.
    // a best practice is to make it capitalized:
    // const int NUMBER = 5;
    // a string of text is a constant, and numbers are also constant, as in you can't set 7 = 8; for example.
    // this shows a possible use for constants ^^, for when something is defined a certain way and isn't meant to mean other things.
    
    return 0;
}

int Inputs(){
    // Inputs are things that are taken from the terminal.
    // say that we want whoever uses the shell to input a number:
    int InputtedNum;
    // we must first declair the variable to be inputted ^^
    // if you come from a python background like me, this may not make sense,
    // but all we are doing is declaring the variable, while not setting any value to it.
    printf("enter a number: ");
    scanf("%d", &InputtedNum);
    // ^^ the function to get inputs from the terminal.
    // note that we didn't add a new line to the first printf,
    // that is because we want the input to be entered in front of that text.
    // we also have to type & to symbolize that is being inputted.
    // note that this & is a pointer, but we won't work with them just now.
    printf("your input is: %d\n", InputtedNum);
    // this process works similarly to floats, doubles, and characters.

    // to get strings:
    int n = 20;
    char string[n];
    // you must tell C the length of this string though, so it knows how much memory to allocate
    printf("enter a sentence: ");
    scanf("%s", string);
    printf("your sentence: %s\n", string);
    // scanf doesn't understand when users put spaces, so if you enter a sentence with two words or more,
    // it will ignore anything after the first space/

    // to solve this, we use a function called fgets.
    n = 20;
    char cool[20];
    printf("enter a cool sentence: ");
    fgets(cool, 20, stdin);
    // the first input to this function is the place to store it at, then the maximum size of input,
    // and stdin just tells you that we want the information from the terminal, but it can also be other more complex things.
    printf("your cool sentence: %s\n", string);
    // remember that fgets only works for strings, and will take a number and see it as a string.

    return 0;
};

int Calculator(){
    double num1; double num2;
    printf("enter first number: ");
    scanf("%lf", &num1);
    printf("enter second number: ");
    scanf("%lf", &num2);
    printf("______________\n");
    printf("Addition: %f \n", (double)num1+(double)num2);
    printf("Subtraction: %f\n", (double)num1-(double)num2);
    printf("Division: %f\n", (double)num1/(double)num2);
    printf("Multiplication: %f\n", (double)num1*(double)num2);
    return 0;
};

int MadLib(){
    char color[20]; char noun[30]; char celebrity[60];
    printf("enter a color: ");
    fgets(color, 20, stdin);
    printf("enter a noun: ");
    fgets(noun, 30, stdin);
    printf("enter a celebrity: ");
    fgets(celebrity, 60, stdin);
    printf("\n");
    color[strcspn(color, "\n")] = 0;
    noun[strcspn(noun, "\n")] = 0;
    celebrity[strcspn(celebrity, "\n")] = 0;
    printf("    Roses. \n");
    printf("| roses are %s\n", color);
    printf("| %s is blue\n", noun);
    printf("| I love %s\n", celebrity);
    return 0;
};

void Arrays(){
    // I use voids now I'm awesome.
    // defining: type_being_held Name[] = {elements,};
    // [] tells C it's an array
    int IntArray[] = {1, 3, 6, 2, 453, 1, 364, 2345, 1, 34};
    double DoubleArray[] = {0.23423, 234.234, 234.0, 238.1}; 
    // indexing
    printf("%d\n", IntArray[3]);
    printf("%lf\n", DoubleArray[2]);
    // changing
    IntArray[3] = 5;
    DoubleArray[2] = 0.69696969;
    printf("%d\n", IntArray[3]);
    printf("%lf\n", DoubleArray[2]);
    // to define an array without adding stuff to it right away you must state just the length of it
    int Cool[3];
    // this array can only hold 3 items

    // a sting is already an array
};

// function: 
/*
output_type Name(inputs){
    code;
};

*/

int Max(int x, int y){
    // if statements
    if (x>y){
        return x;
    } else {
        return y;
    };
};

int Max3(int x, int y, int z){
    return (x>y && x>z) ? x : ((y>z) ? y : z);
};

int SwitchStat(){
    char grade;
    printf("enter your grade: ");
    scanf("%c", &grade);
    switch(grade){
        case 'A': 
            printf("you got an A, exceptional job.");
            break;
        case 'B': 
            printf("you got an B, good job.");
            break;
        case 'C': 
            printf("you got an C, that was ok.");
            break;
        case 'D': 
            printf("you got an D, that wasn't good, but you will pass too.");
            break;
        case 'F': 
            printf("you got an F, that was really bad, and you are failing.");
            break;
    };
    return 0;
};

int Struct(){
    // a struct is a class basically, or a dictionary (but it can contain different types of data)
    // example struct:
    struct coolInfo {
        int myFavNumber;
        int cringeNumber;
        char nameStart;
        double yourFavDecimal;
        char favWord[30];
    };
    struct coolInfo myCoolInfo;
    // my cool info stores the coolInfo variables and you can assign values to double for example.
    myCoolInfo.yourFavDecimal = 3.141;
    strcpy(myCoolInfo.favWord, "Asia");
    myCoolInfo.myFavNumber = 4;
    myCoolInfo.cringeNumber = -3;
    myCoolInfo.nameStart = 'G';
    // strcpy will set the string value like we usually do.
    printf("%d\n", myCoolInfo.myFavNumber);
    printf("%d\n", myCoolInfo.cringeNumber);
    printf("%c\n", myCoolInfo.nameStart);
    printf("%f\n", myCoolInfo.yourFavDecimal);
    printf("%s\n", myCoolInfo.favWord);
    return 0;
};

int WhileLoop(){
    /*
    while(condition){
        perform tasks;
    };
    */
   return 0;
};

int ForLoop(){
    /*
    int itterator;
    the incermemter can be i++ to increase i by 1, or i = i+2, etc.
    for(itterator = 1; itterator<=loop_size, incrememter(itterator)){
        perform actions.
    };
    */
    return 0;
};

int D2Arrays(){
    int IntArray[] = {1, 3, 6, 2, 453, 1, 364, 2345, 1, 34};
    // this is a one dimensional array ^.
    // to "increase the dimension", we are basically adding arrays inside arrays. 
    int IdentityMatrix3[3][3] = {{1, 0, 0},
                       {0, 1, 0},
                       {0, 0, 1}};
    printf("%d\n", IdentityMatrix3[0][0]); // prints 1
    printf("%d\n", IdentityMatrix3[1][1]); // prints 1
    printf("%d\n", IdentityMatrix3[2][2]); // prints 1
    // if you dont want to define the array's values straght away you can only define it's size
    int IdentityMatrix4[4][4];
    // and then manually define each value separately.
    int i;
    for (i =0; i<5; i++){
        int j;
        for (j =0; j<5; j++){
            if (i == j){
                IdentityMatrix4[i][j] = 1;
            } else {
                IdentityMatrix4[i][j] = 0;
            };
        };
    };
    int k;
    for (k =0; k<4; k++){
        printf("[%d, %d, %d, %d]\n", IdentityMatrix4[k][0], IdentityMatrix4[k][1], IdentityMatrix4[k][2], IdentityMatrix4[k][3]);
    };
    // Identity matrix in 4d ^.
    return 0;
};

int MemoryAddresses(){
    // so in a program, you usually have many variables. 
    // these are of course useful and relevant. 
    // but physically they are a bit more complex. 
    // if you create a variable in C, it gets stored in ram, and it has a memory address, so that the program knows where to look for the variable.
    // its also important to declare the variable type not just for more robust code, but also because C will then know how much storage to use, 
    // as for example doubles use double the storage of floats.
    int x = 20;
    // this 20 is somewhere physically in your ram.
    int y = x+x;
    // to access a variable, is by refering to the name.
    // when C wants to find the value, it will look for the physical address, and not the name of the variable.
    // we can print out the memory address of any varaible. 
    printf("%p\n", &x);
    // note that you need to use & and %p to get addresses from variables.
    printf("%p\n", &y);
    /*
    in this specific case, C outputted:
        0x7ffee81437ec 
        0x7ffee81437e8
    these are the addresses.
    */
    // so if you were to physically open your ram at the very moment when you assign it, you will find the variable in the address C gave you.
    // in C, its very useful to have these physical addresses. so its nice to have a way to find the address of a variable
    return 0;
};

int Pointer(){
    // Pointers are a datatype. 
    // they are memory addresses.
    // it becomes much less cmoplex when you just look at it as a datatype.
    // a datatype that stores memory addresses.
    int i = 3;
    // if you have a variable, say, i, when you write &i, that will tell you the address of the variable. 
    // therefore &x for any x will be the pointer, the memory address to x.
    double cool = 6.356;
    char x = 'A';
    // you can store pointers inside pointer variables. 
    // since a pointer variable is still a variable, it itself has a memory address.
    // but to create a pointer variable, its not like creating any other kind of variable, 
    // since if i wish to say that a = 4, that 4 can be anything, but its not that meaningful to just pick a random 14 digit hexadecimal wont actually be meaningful.
    // so what we usually want to do is a assign the memory address of a predefined variable to our pointer.
    // create a pointer varaible for i:
    int * p_i = &i;
    // note that the int here isn't for the pointer being an integer, but rather for i being an integer, and you must put the asterisc just cuz.
    double * p_cool = &cool;
    char * p_x = &x;


    // dereferencing pointers:
    // to dereference a pointer is to get the information stored on the pointer's address.
    printf("%d\n", *p_i); // when you put a star on the pointer like this, you are dereferencing the pointer. you are refering to it's variable.
    // and therefore, you must print according to the datatype, which in this case is an integer.
    // this does allow you to do some funny stuff:
    printf("%p\n", &*p_i);
    printf("%d\n", *&*p_i);
    printf("%p\n", &*&*p_i);
    return 0;
};

int ReadingAndWritingFiles(){
    // ^^ this will literally create the file.
    // this "coolFilePointer" is simply a pointer to the file.
    // filename: the actual name of the file with .type
    // filemode: read, write, append (r, w, a)

    /*
    Modes:
        r	Open a file for reading. If a file is in reading mode, then no data is deleted if a file is already present on a system.
        w	Open a file for writing. If a file is in writing mode, then a new file is created if a file doesn’t exist at all. If a file is already present on a system, then all the data inside the file is truncated, and it is opened for writing purposes.
        a	Open a file in
        append mode. If a file is in append mode, then the file is opened. The content within the file doesn’t change.
        r+	open for reading and writing from beginning
        w+	open for reading and writing, overwriting a file
        a+	open for reading and writing, appending to file

    Functions:
        function	purpose	
        fopen ()	Creating a file or opening an existing file
        fclose ()	Closing a file
        fprintf ()	Writing a block of data to a file
        fscanf ()	Reading a block data from a file
        getc ()	Reads a single character from a file
        putc ()	Writes a single character to a file
        getw ()	Reads an integer from a file
        putw ()	Writing an integer to a file
        fseek ()	Sets the position of a file pointer to a specified location
        ftell ()	Returns the current position of a file pointer
        rewind ()	Sets the file pointer at the beginning of a file
    */
    FILE *coolFilePointer = fopen("filename.txt", "w");

    fputs("The fputs function writes a string instead of a character at once.\n", coolFilePointer);
    // ^^ this wrote the string on the newly created file. 
    // you can also use fprintf:
    fprintf(coolFilePointer, "hello");
    fclose(coolFilePointer); // closes the file and saves changes if any happened etc.
    // the write method will override everything thats in the file.
    
    
    // READING FILES
    FILE *coolReaderPointer = fopen("test.txt", "r");
    char lines[4][30];
    int i;
    for (i=0; i<4; i++){
        fgets(lines[i], 30, coolReaderPointer);
        printf("%s", lines[i]);
    };
    // ^^ this will fill the lines array with the lines from the file
    return 0;
};

int main() {
    helloWorld();
    printf("_________________________\n");
    Variables();
    printf("_________________________\n");
    DataTypes();
    printf("_________________________\n");
    printing();
    printf("_________________________\n");
    Mathematics();
    printf("_________________________\n");
    Constants();
    printf("_________________________\n");
    Inputs();
    printf("_________________________\n");
    Calculator();
    printf("_________________________\n");
    MadLib();
    printf("_________________________\n");
    Arrays();
    printf("_________________________\n");
    printf("%d\n", Max(3, 5));
    printf("%d\n", Max(-4, -5));
    printf("%d\n", Max(-23, 5));
    printf("%d\n", Max(2342342, 5));
    printf("%d\n", Max(9, 5));
    printf("%d\n", Max(5, 5));
    printf("_________________________\n");
    SwitchStat();
    printf("_________________________\n");
   Struct();
    printf("_________________________\n");
    D2Arrays();
    printf("_________________________\n");
    MemoryAddresses();
    printf("_________________________\n");
    Pointer();
    printf("_________________________\n");
    ReadingAndWritingFiles();
    printf("_________________________\n");
    return 0;
}
