#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
#include<stdbool.h>

#define MAX 20
uint8_t head;

void ThemPhanTu(uint8_t arr[])
{
    int index,value,i;
    bool check=true;
    printf("Enter the additional index range of 0 to 19.\n");
    scanf("%d",&index);
    if(index<0||index>MAX-1)
    {
        printf("Error! index was outside range of 0 to 19.\n");
    }
    else
    {
        if(arr[index]!=0xFF)
        {
            printf("Error! This index was entered.\n");
        }
        else
        {
            printf("Enter the additonal value range of 0 to 100.\n");
            scanf("%d",&value);
            if(value<0||value>100)
            {
                printf("Error! Value was outside range of 0 to 100.\n");
            }
            else
            {
                for(i=0;i<MAX;i++)
                {
                    if(value==arr[i])
                    {
                        check=false;
                    }
                }
                if(check==false)
                {
                    printf("This value was entered in your array.\n");
                }
                else
                {
                    if(head==0xFF)
                    {
                        
                        arr[index]=value;
                        printf("Add successful!\n");
                    }
                    else
                    {
                        
                    }
                }
            }
        }
    }
}
void XoaPhanTu(uint8_t arr[])
{
    int value,i,temp,index;
    bool check=true;
    printf("Enter the additonal value range of 0 to 100.\n");
    scanf("%d",&value);
    if(value<0||value>100)
    {
        printf("Error! Value was outside range of 0 to 100.\n");
    }
    else
    {
        for(i=0;i<20;i++)
        {
            if(value==arr[i])
            {
                check=true;
                index=i;
            }
        }
        if(check==false)
        {
            printf("Don't have your entered value in array.\n");
        }
        else
        {
            arr[index]=0xFF;
            printf("Delete sucessful!\n");
        }
    }
}
void PrintArray(uint8_t arr[])
{
    int i;
    printf("Your array before arranging:\n");
    for(i=0;i<19;i++)
    {
        if(arr[i]==0xFF)
        {
            printf("0xFF ");
        }
        else
        {
            printf("%d ",arr[i]);
        }  
    }
    printf("\n");
}
void Menu(uint8_t arr[])
{
    uint8_t option,choice,index,value;
    while(1)
    {
        printf("\t\t\t===================Menu====================\n");
        printf("\t\t\tEnter 1: Add an element into your array.\n");
        printf("\t\t\tEnter 2: Delete an element from your array.\n");
        printf("\t\t\tEnter 3: Print out your array.\n");
        printf("\t\t\tEnter 4: End program.\n");
        printf("\t\t\t===========================================\n");
        printf("Enter your option.\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            {
                ThemPhanTu(arr);
                break;
            }
            case 2:
            {
                XoaPhanTu(arr);
                break;
            }
            case 3:
            {
                printf("\t\t\tEnter 1: Print the elements of your array before arranging.\n");
                printf("\t\t\tEnter 2: Print the elements of your array after arranging.\n");
                printf("Enter your choice.\n");
                scanf("%d",&choice);
                switch(choice)
                {
                    case 1:
                    {
                        PrintArray(arr);
                        break;
                    }
                    case 2:
                    {
                        break;
                    }
                    default:
                    {
                        printf("Invalid choice!\n");
                        break;
                    }
                }
                break;
            }
            case 4:
            {
                
                return;
            }
            default:
            {
                printf("Invalid option.\n");
                break;
            }
        }
    }
}
int main()
{
    int i=0;
    uint8_t assignment3[MAX],Poiter[MAX];
    for(i=0;i<MAX;i++)
    {
        assignment3[i]=0xFF;
        Poiter[i]=0xFF;
    }
    Menu(assignment3);
	return 0;
}
