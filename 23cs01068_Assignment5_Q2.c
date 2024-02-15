// Write a program to implement division using increment and repeated
// subtraction operations only. (Quotient and remainder needed)
// Input:
// Dividend = 28
// Divisor = 6
// Output:
// Quotient = 4
// Remainder = 4
int pos(int x);
#include<stdio.h>
void main()
{
    int num,quo,rem,div,i;
    printf("\nEnter the number = ");
    scanf("%d",&num);
    printf("\nEnter the divisor = ");
    scanf("%d",&div);

    int sign=0;
    if(num<0) sign=1;
    if(div<0 && num<0) sign=2;
    if(div<0 && num>0) sign=3;

    if(div ==0) printf("\nInvalid Input");
    else 
    {
        switch(sign)
        {
            case 0:
            div=pos(div);
            for(i=0;num>=div;i++) num-=div;
            rem=num;
            quo=i;
            printf("\n%d",quo);
            printf("\n%d",rem);
            printf("\n pass 0");
            break;
                 
                       
            
            case 1:
            num=pos(num);
            div=pos(div);
            for(i=0;num>=div;i++) num-=div;
            rem=num;
            quo=i;
            printf("\n pass 1");
            printf("\n%d",quo*-1);
            printf("\n%d",rem*-1);
            break;

            case 2:
            num=pos(num);
            div=pos(div);
            for(i=0;num>=div;i++) num-=div;
            rem=num;
            quo=i;
            printf("\n pass 2");
            printf("\n%d",quo);
            printf("\n%d",rem*-1);
            break;

            case 3:
            div=pos(div);
            for(i=0;num>=div;i++) num-=div;
            rem=num;
            quo=i;
            printf("\n pass 2");
            printf("\n%d",quo*-1);
            printf("\n%d",rem);
            break;
            


        }
    }
    
    

}
int pos(int x)
{
    if(x<0) x=-1*x;
    return x;
}