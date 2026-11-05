#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char word[100];
    int check=0;
    printf("Enter the word:-");
    fgets(word,100,stdin);
    int n=strlen(word);
    for(int i=0;i<n-1;i++)
    {
        if(word[i]==word[n-i-2])
        {
            check=1;
            continue;
        }
        else
        check=0;
    }
    if(check==0)
    printf("The word is not a Palindrome.");
    else
    printf("The word is a Palindrome.");
    return 0;
}