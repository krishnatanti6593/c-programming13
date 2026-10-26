#include <stdio.h>
int main()
{
    int n, count = 0, sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
    }
    printf("number of digit = %d\n",count);

        return 0;
}