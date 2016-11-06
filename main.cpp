#include <iostream>
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

//Goal: Function that gives out buffers. Buffer Size of (2^x)-1 from 7 words to 511 words ( word = 4 bytes )
//Avail memory of buffer manager will be set to 10 of the maximum buffer size of 511 Words
//requestor provides a block size and routine will return address of buffer or -1 if not enough space
int main() {
    std::cout << "Hello, World!" << std::endl;

    int i,n;
    char * buffer;

    printf ("How long do you want the string? ");
    scanf ("%d", &i);

    buffer = (char*) malloc (i+1);
    if (buffer==NULL) exit (1);

    for (n=0; n<i; n++)
        buffer[n]=rand()%26+'a';
    buffer[i]='\0';

    printf ("Random string: %s\n",buffer);
    free (buffer);

    return 0;
}