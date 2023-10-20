#include <stdio.h>
#include <limits.h>
int main()
{
    int marks = 75;
    if(marks>75)
    {
        printf("A Grade");
    }
    else if(marks>=60 && marks<=75)
    {
        printf("B Grade");

    }
    else if(marks>=50 && marks<60)
    {
        if(marks>50&&marks<=55)
        printf("C Grade");
        else
        printf("D Grade");
    }
}