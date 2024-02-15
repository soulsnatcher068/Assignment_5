//Arrange 10 numbers using bubble sort
#include<stdio.h>
void main()
{
    int array[10],i,j;
    for(i=0;i<10;i++)
    {
        printf("\nEnter a number = ");
        scanf("%d",&array[i]);
    }
    printf("\n");
    for(i=0;i<10;i++) printf("%d\t",array[i]);
    printf("\n");

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
        
    }
    for(i=0;i<10;i++) printf("%d\t",array[i]);
}