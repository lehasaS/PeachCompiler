#include <stdio.h>
#include <stdlib.h>
#include "compiler.h"

struct compile_process *compile_process_create(const char *filename, const char *output_filename, int flags)
{
    FILE *file = fopen(filename, "r");

    if (!file)
    {
        return NULL;
    }

    FILE *out_file = NULL;
    if (output_filename)
    {
        out_file = fopen(output_filename, "w");
        if (!out_file)
        {
            return NULL;
        }
    }

    // Declare memory and set it to null
    struct compile_process* process = calloc(1, sizeof(struct compile_process));
    process-> flags = flags;
    process-> cfile.fp = file;
    process-> ofile = (FILE *) output_filename;
    return  process;
}