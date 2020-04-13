#include<stdio.h>
#define MAX 5

void TangDan(int a[])
{
    int i,j,temp;
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
}
void GiamDan(int a[])
{
    int i,j,temp;
    for(i=0;i<MAX-1;i++)
    {
        for(j=i+1;j<MAX;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int i;
    int a[MAX]={0,5,3,8,6};
    TangDan(a);
    for(i=0;i<MAX;i++);
    {
        printf("%d ",a[i]);
    }
    return 0;
}
