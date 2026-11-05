#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    int i=0;
    char name[100];
    printf("Enter the word:=");
    fgets(name,100,stdin);

    while(name[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}