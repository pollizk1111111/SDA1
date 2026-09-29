#include <stdio.h>

int main(void)
{
    double x, y = 0;
    scanf("%lf", &x);

if (x >= -49)
    {
        if (x < -10)
        {
            y = 10*x*x*x + 7*x/5 + 2;
        }
        else if (x > 0)
        {
            if (x <= 10)
            {
                y = 10*x*x*x + 7*x/5 + 2;
            }
            else if (x > 20)
            {
                y = -x + 9;
            }
            else
            {
                printf("Error\n");
                return -3;
            }
        }
        else
        {
            printf("Error\n");
            return -3;
        }
    }
    else
    {
        printf("Error\n");
        return -3;
    }

    printf("%g", y);

    return 0;
}