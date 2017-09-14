#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>



void vigenere(string,string);
int alphaPos(char letter);
string applyKey(string, string);


int main(int argc, string argv[])
{
  /*  
   if(argc < 2)
    {
        printf("You need to enter a number for a key when running\n");
        return 1;
    }
    */
    
    string phrase = GetString();
    string keyPhrase = "panda";//argv[1];

    string newPhrase = applyKey(keyPhrase, temp);
    //int len = strlen(phrase);
   
    printf("%s\n",temp);
    printf("%s\n",phrase);
    
    vigenere(phrase,newPhrase);
  
   return 0;
}
string applyKey(string key, string phrase)
{
    int len = strlen(phrase),
        modKey = 0,
        keyLen = strlen(key),
        phraseLoc = 0;
        
    for(int i = 0; i < len; i++)
    {
         if(isalpha(phrase[i]))
        {
           if (phraseLoc >= keyLen)
           {
             phraseLoc = 0;
           }
           modKey = phraseLoc % keyLen;
           phrase[i] = key[modKey];
           phraseLoc++;
        }
    }
    return phrase;
}

void vigenere(string phrase, string newPhrase)
{
    int len = strlen(phrase), key = 0;
    
    for(int i = 0; i < len; i++)
    {
        if(isalpha(phrase[i]))
        {
        
           if(islower(phrase[i]))
           {
           key = alphaPos(newPhrase[i]);
           printf("%c",((phrase[i] - 65 + key) % 26) + 65);  
           } 
           
           if(isupper(phrase[i]))
           {
           key = alphaPos(newPhrase[i]);
           printf("%c",((phrase[i] - 97 + key) % 26) + 97);  
           }  
        }
        else
        {
            printf("%c",phrase[i]);
        }
    
    }
   printf("\n");
}
int alphaPos(char letter)
{
    int holderChar = letter , alPos = 0;        
        if((letter >= 65 && letter <= 90))  
        {
          alPos = holderChar - 65;   
         //printf("%c is: %d in the Alphabet\n",letter,alPos);
         return alPos;
        }
        if((letter >= 97 && letter <= 122))
        {
           alPos = holderChar - 97;
        // printf("%c is: %d in the Alphabet\n",letter,alPos);
         return alPos;
        }
        else
        {
            return alPos = 0; // error case
        }
       
}