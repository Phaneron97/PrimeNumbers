#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("How many prime numbers do you want: ");
    scanf("%d", &input);

    printf("Prime numbers:\n");
    for (; input > 2; input--)
    {
        for (int i = 2; i < input; i++)                     //start counting from 2 because input % 1 is always 0
        {
            if (input % i == 0)                             //if 0 = true, then input != prime
            {
                //printf("%d mod %d = 0, break\n", input, i);
                break;                                      //0 is found, break loop and go to next number in line.
            }
            else if (input % i != 0)                        //if 0 != true, then input = prime (for this sequence)
            {
                if (input - i == 1)                         //last number in loop before you know for sure that number is prime.
                {
                    printf("%d\n", input);
                    //printf("%d mod %d != 0\n", input, i);
                }
                continue;                                   //not nessecary
            }
        }
    }
}
