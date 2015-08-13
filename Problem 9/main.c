/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    for (a = 1; a < 1000 / 3; a++)
    {
        for (b = a; b < 1000 / 2; b++)
        {
            c = 1000 - a - b;

            if (a * a + b * b == c * c)
            {
                printf("result: %d",a*b*c);
                return 0;
            }
        }
    }
    return 0;
}
