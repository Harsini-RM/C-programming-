#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int i,flag=0;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES");
    }
    else
    {
       int sum=0,i=0;
        while(n>0)
        {
            sum=n%10;
            n=n/10;
            i++;
        }
        printf("NO %d",i);
    }
    return 0;
}
    
    
    
