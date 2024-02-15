//Q5
#include<stdio.h>
void main()
{
    int sum=0;
    while(1)
    {
        int num;
        char ch;
        printf("\nEnter the number = ");
        scanf("%d",&num);
        if (num%2==0 ) sum+=num;
    
        printf("\nDo you want to enter more Y/N = ");
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='N'||ch=='n') break;
        else if(ch=='Y'||ch=='y') continue;
        else if (ch!='n'||ch!='N'||ch!='y'||ch!='Y')
        {
            printf("Invalid statement");
            continue;
        } 
    }
    printf("\nThe sum of the even numbers is = %d",sum);
    

    
}