#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void copyString(char source[], char destination[])
{
    for(int i=0;i<strlen(source);i++)
    {
        destination[i]=source[i];
    }
    destination[strlen(source)]='\0';///we are filling destination string manually,so we have to give '\0' manually,because we are using charActers ,not string here...
}
int main()
{

    char name[]= "Sadman Hafiz";
    char copy[strlen(name)+1];///for '\0'
    copyString(name,copy);
    puts(copy);
}
