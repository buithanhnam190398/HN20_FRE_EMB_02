#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[MAX]={0,5,3,8,6};
    for(i=0;i<MAX-1;i++)
    {
        for(j=i+1;j<MAX;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<MAX;i++);
    {
        printf("%d ",a[i]);
    }
    return 0;
}
