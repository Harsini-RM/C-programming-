#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
    printf("a is greater than c and b");
    }
    else if(b>=a && b>=c)
    {
        printf("b is greater than a and c");
    }
    else
    {
        printf("c is greeatre than a and b");
    }
}
