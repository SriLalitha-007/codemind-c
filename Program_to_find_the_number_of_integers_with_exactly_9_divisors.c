#include<stdio.h>
int no_of_divisors(int num)
{
    int count=0,i;
    for (i=1;i<=num;i++)
    {
        if (num % i == 0)
        count=count+ 1;
    }
    return count;
}
void check_fac(int n)
{
    int c=0,i;
    for (i=1;i<=n;i++)
    {
        if (no_of_divisors(i)==9)
        {
            printf("%d ", i);
            c = c + 1;
        }
}
printf("
Total=%d", c);
}
int main()
{
    int n;
    scanf("%d", &n);
    check_fac(n);
    return 0;
}