// Given a character array of n characters, write a function that take a
// word from the user and checks whether the word can be made from
// the characters available in the array or not
#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j,t=0;
    printf("\nNo of character to be entered = ");
    scanf("%d",&n);
    char chararray[n];
    char word[100];
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a character = ");
        fflush(stdin);
        scanf("%c",&chararray[i]);
    }
    printf("Enter a word = ");
    scanf("%s",word);
    int l=strlen(word);
    printf("\n%d",l);
    for(i=0;i<l;i++)
    {
        for(j=0;j<n;j++) 
        {
            if(chararray[j]==word[i]) 
            {
                printf("\nPass");
                t+=1;
            }
        }
    }
    printf("\n%d",t);
    if(t==l) printf("\nThe number can be constructed");
    else printf("\nThe number cannot be constructed");

}