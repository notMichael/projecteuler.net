#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secondNumber = 2;
    int firstNumber = 1;
    unsigned int sum = 0;
    while(secondNumber<4000000)
        {
            secondNumber+=firstNumber;
            int tmp = secondNumber;
            secondNumber = firstNumber;
            firstNumber = tmp;
            if(firstNumber%2==0)sum+=firstNumber;
        }
    printf("result: %d",sum);
    getchar();
    return 0;
}
