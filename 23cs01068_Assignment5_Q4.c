// Write a program in C to print a triangle of size n. Use the following
// example as reference. 
#include<stdio.h>
void main()
{
    int i,s,p,n;
    printf("\nEnter the size of the triangle = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=n-1;s>=i;s--) printf(" ");
        for(p=1;p<=i;p++) printf("* ");
        printf("\n");
    }
}