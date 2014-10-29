#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 128

void caesar(int key, char message[]);

int main(void)
{	
    int i;
	char a[] = "Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai";

    for(i = 0; i < 25; i++)
    {
        caesar(i, a);
    }
    return 0;
}
/* Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai */

