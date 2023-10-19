# include <stdio.h>
# include <limits.h>
int main()
{
    int a = 10, b = 20;
    if(a>b)
    printf("a is less than b");
    else
    printf("a is greater than b");
    if (a>=b)
    {
        printf("a is greater than or equal to b\n");
    }
    else 
    {
        printf("a is lesser than b\n");
    }
    if(a<=b)
    {
        printf("a is lesser than or equal to b\n");
    }
    else 
    {
        printf("a is greater than b\n");
    }
    
}