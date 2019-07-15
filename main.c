#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    if (NULL == (fptr = fopen ("output.txt", "w"))) {
       fprintf(stderr, "ERROR: Can not open file [output2.txt]") ;
        exit (-1);
    };
    fprintf(fptr, "abc The open university of japan \n");
    fclose(fptr);
    return 0;
}
