/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int number);

int main()
{
    int counter;
    int number = 2;
    for(counter = 1; counter<=10001; counter++)
    {
        while(1)
        {
            if(isPrime(number))
            {
                if(counter!=10001)number++;
                break;
            }
            else
            {
                number++;
            }
        }
    }
    printf("result %d",number);
    return 0;
}

bool isPrime(int number)
{
    int factor;
    for(factor = 2; factor<number; factor++)
    {
        if(number%factor==0)
        {
            return false;
        }
    }
    return true;
}
