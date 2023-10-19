# include <stdio.h>
# include <limits.h>
int main () 
{
    int a = 6,b = 4,c;
    c = a+b;
    printf("a+b = %d \n",c);
    
    c = a-b;
    printf("a-b = %d \n",c);

    c = a*b;
    printf("a*b = %d\n",c);

    c = a/b - a%b;
    printf("%d",c);
}