// Write a program in C to input a 4 digit number and print all possible
// numbers that can be formed using the four digits.
#include<stdio.h>
void main()
{
    int num;
    printf("\nEnter the number = ");
    scanf("%d",&num);
    int i,j,k,l,e=0,m,digit[4]={0};
    for(i=0;i<4;i++)
    {
        digit[i]=num%10;
        num/=10;
    }
    int number[24]={0} ;
    for(i=0;i<4;i++) 
    for(j=0;j<4;j++)
    for(k=0;k<4;k++)
    for(l=0;l<4;l++)
    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
    {
        int newnum=1000*digit[i]+100*digit[j]+10*digit[k]+digit[l];
        for(m=0;m<24;m++) if(number[m]==newnum) break;
        if(m==24) number[e++]=newnum;
    }
    for(i=0;i<24;i++) if(number[i] != 0) printf("\n%d",number[i]);
}
 