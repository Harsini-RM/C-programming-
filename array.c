#include<stdio.h>
int main()
{
    int a;
    int b[a];
    int *c[a];
    scanf("%d",&a);
    for (int i=0;i<=a;i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i=0;i<a;i++)
    {
        c[i]=&b[i];
        printf("%d",*c[i]);
    }
}


