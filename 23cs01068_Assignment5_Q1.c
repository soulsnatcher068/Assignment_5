// 1. Write a program in C to input a number and [3]
// a. Print no. of digits
// b. Sum of all unique digits present
// For example
// Input: 33045
// Output: 5
// 12
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k,num,sum=0;
    printf("\nEnter the number = ");
    scanf("%d",&num);
    int numcpy=num;
    for(i=0;num!=0;i++) num/=10;        

    int digit[i];
    
    for(k=0;k<i;k++) 
    {
        int t=0;
        for(j=0;j<=k;j++) if(digit[j]==numcpy%10) t+=1;
        if(t==0)
        {
            digit[k]=numcpy%10;
            sum+=digit[k];
        } 
        numcpy/=10;
    }
    printf("\n%d",sum);
}

    
