#include <stdio.h>
#include<stdlib.h>

/**
 * main - prints numbers from 0 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int thousand, hundred, ten, one;

    for(thousand = '0'; thousand <= '9'; thousand++)
        for(hundred = '0'; hundred <= '8'; hundred++)
            for(ten = '0'; ten <= '9'; ten++)
                for(one = '1'; one <= '9'; one++)
                {   
                    putchar(thousand);
                    putchar(hundred);
                    if(thousand <= '9')
                    {
                        putchar(' ');
                        putchar(ten);
                        putchar(one);
                        if(ten <= '9' || one <= '9')
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                }
                return(0);

}