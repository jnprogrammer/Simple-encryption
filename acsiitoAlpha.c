#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int alphaPos(char letter);

int main(int argc, string argv[])
{
    int x = 97, y = 122, z = 0;
    
    for(int i = 0; i < 26;i++)
    {
        z = x % y+i;
      printf("%d = %c #%d\n",z,z,i);
    }
    printf("\n\n");
    
    for(int i = 0; i < 26;i++)
    {
        z = 65 % 90+i;
      printf("%d = %c #%d\n",z,z,i);
    }
    
    
}

