/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int palindromic(char* number);

int main()
{
    int i;
    int j;
    int maxPalindromic = 0;
    char * number = malloc(6*sizeof(char));
    for(i = 999;i>0;i--)
        {
         for(j = 999;j>0;j--)
         {
             number = itoa(i*j,number,10);
             if(palindromic(number))
                {
                    if(i*j>maxPalindromic) maxPalindromic = i*j;
                }
         }
         }
    printf("result: %d",maxPalindromic);
    return 0;
}

int palindromic(char* number)
{
    int numberLength = 6;
    int i;
    for (i = 0; i <= numberLength / 2; i++)
    {
        //numberLength-1 = maxIndex
        if (number[i] != number[numberLength-1 - i]) return 0;
    }
    return 1;
}
