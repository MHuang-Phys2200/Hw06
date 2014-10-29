#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 128

void caesar(int key, char message[])
{
    char buf[N+1], c;
    int i;
    strncpy(buf, message, N);
   
    for (i = 0; i < strlen(buf); i++)
    {
        c = buf[i];
        if (islower(c))
        {
            c = 'a' + (c - 'a' + key)%26;
        }
        else if (isupper(c))
        {
            c = 'A' + (c - 'A' + key)%26;
        }
        printf("%c", c);
    }
    printf("\n");
}
