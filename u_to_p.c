#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() 
{
    int i=0;

    char name[100];

    int arr[100];

    printf("Enter the word:=");
    fgets(name,100,stdin);
    size_t n=strlen(name);
    for(int i=0;i<n-1;i++)
    {
        if((int)name[i]>=97)
            arr[i]=(int)name[i]-32;
        else
            arr[i]=(int)name[i]+32;
        
    }

    for(int i=0;i<n;i++)
    {
        printf("%c",(char)arr[i]);
    }
    return 0;
}