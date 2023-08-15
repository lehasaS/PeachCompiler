#ifndef PEACHCOMPILER_COMPILER_H
#define PEACHCOMPILER_COMPILER_H

#include <stdio.h>

enum
{
    COMPILER_FILE_COMPILED_OK,
    COMPILER_FAILED_WITH_ERRORS
};
struct compile_process
{
    // Flags specifying how file should be compiled
    int flags;

    struct compile_process_input_file
    {
        FILE* fp;
        const char* abs_path;
    } cfile;

    FILE* ofile;
};

int compile_file(const char* filename, const char* output_filename, int flags);
struct compile_process *compile_process_create(const char *filename, const char *output_filename, int flags);

#endif //PEACHCOMPILER_COMPILER_H
