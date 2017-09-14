#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int alphaPos(char, bool);
int reverseAlpha(char, bool);

int main(int argc, string argv[])
{
    
     // wait for user input
    /* if(argc < 2)
     {
         printf("Rerun this program by adding the key first and message second in the arg list\nand construct additional pylons\n");
     }*/
   char ptxt,chartxt,encryptxt, x;
   string test = "BE ZA sure to drink your Ovaltine!";
   int len = 0, key = 13;
   bool upperCase, lowerCase;
  
    for(int i = 0; i < argc; i++)
    {
        len = strlen(test);
        for(int j = 0; j < len; j++)
        {
            chartxt = (char)test[j];
           // p = alphaPos(c);
            printf("%c\n",chartxt);
           // x = (char)((c + 13)%26);
        }
      printf("\n");
    }
    for(int i = 0; i < argc; i++)
    {
        
        len = strlen(test);
        //int temp2;
         for(int t = 0; t < len; t++)
        {
            chartxt = test[t]; //Get individual char from string
            ptxt = alphaPos(chartxt,upperCase); // reads char and determines its position in alphabet 0 - 25
            encryptxt = ((ptxt+key)%26); //adds key and modulus by 26 to keep char with in letters on ascii table
                        
            x = reverseAlpha(encryptxt,upperCase);
            printf("%c\n",(char)(encryptxt)); 
            /* 
            printf("ORGINAL:%c\n",c);
        printf("%d\n",c);
            c = c + x;
            c = c % 122;
            printf("ENCRYPTED:%c\n",c);
            printf("%d\n",c);*/
        }
    }
}

int alphaPos(char letter, bool upperCase)
{
    int holderChar = letter , alPos = 0; 
   // if(isalpha(letter))
        if(isupper(letter))  
        {
          alPos = holderChar - 65;   
         printf("%c is: %d in the Alphabet\n",letter,alPos);
         upperCase = true;
         return alPos;
        }
        if(islower(letter)
        {
           alPos = holderChar - 97;
         printf("%c is: %d in the Alphabet\n",letter,alPos);
         upperCase = false;
         return alPos;
        }
         else
        {
            return -1;
        }
}

int reverseAlpha(char letter, bool upperCase)
{
    int holderChar = letter , alPos = 0;        
        if(upperCase == true)  
        {
          alPos = holderChar + 65;   
         printf("%c is: %d in the Alphabet\n",letter,alPos);
         return alPos;
        }
        if(upperCase==false)
        {
           alPos = holderChar + 97;
         printf("%c is: %d in the Alphabet\n",letter,alPos);
         return alPos;
        }
        else
        {
            return -1;
        }
       
}