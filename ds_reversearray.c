#include<stdio.h>
void reversearray(int list[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",list[i]);
        printf("leetcode");
         printf("\n");
    }
    printf("\n");
}
int main()
{
    int list[]={1,2,3,4,5};
    int n=sizeof(list)/sizeof(list[0]);
    reversearray(list,n);
    return 0;
}


