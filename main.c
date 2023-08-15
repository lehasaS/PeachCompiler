#include <stdio.h>
#include "helpers/vector.h"
#include "compiler.h"

int main()
{
    
    int response = compile_file("./test.c", "./test", 0);

    if(response==COMPILER_FILE_COMPILED_OK)
    {
        printf("Compiltion Successful.\n");
    }
    else if(response==COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compilation failed.\n");
    }else
    {
        printf("Unknown error occured.\n");
    }
    return 0;
}