#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverseString(char source[],char destination[])
{
    int j=0;
    for(int i=strlen(source);i >= 0;i--,j++)
    {
        destination[j]=  source[i];

    }
    destination[strlen(source)]='\0';

}
int main()
{

    char name[]= "Sadman Hafiz";
    char reverse[strlen(name)+1];

    reverseString(name,reverse);
    puts(reverse);
    return 0;

}

