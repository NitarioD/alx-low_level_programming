#include <stdio.h>
#include <stdlib.h>

main(void)
{
        unsigned long long number = 612852475143;
        printf("      %ull\n", number);
        unsigned long long int i;
        for (i = 2; i <= number; i++)
        {
                while ((number % i) == 0 && number != i)
                {
                        printf("        %d", i);
                        number /= i;
                }
        }
        printf("highest is     :%d", number);
}
