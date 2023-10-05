#include <stdio.h>
void main(){
    int a = 3,b = 1;
    
    printf("%dx%d=%d\n",a,b,a*b);
    b++;
    printf("%dx%d=%d\n",a,b,a*b);
    b++;
    printf("%dx%d=%d\n",a,b,a*b);
    b++;
    printf("%dx%d=%d",a,b,a*b);

}