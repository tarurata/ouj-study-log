#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen ("output.txt", "w");
    fprintf(fptr, "The open university of japan\n");
    fclose(fptr);
    return 0;
}
