#include<stdio.h>
#include<stdlib.h>
int strlen(char str[])
{
    int count =0;
    for(int i=0;str[i] !='\0';i++)
        count++;
    return count;

}

void strcpy(char destination[],char source[])

{
    for(int i=0; i<strlen(source); i++)
    {
        destination[i]=source[i];

    }
     destination[strlen(source)]='\0';


}
int main()
{
    char str[]="123456789";
    char copy[10]={};
    strcpy(copy,str);
    puts(copy);
    return 0;

}

