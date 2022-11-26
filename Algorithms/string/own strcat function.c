#include<stdio.h>
#include<stdlib.h>
int strlen(char str[])
{
    int count =0;
    for(int i=0;str[i] !='\0';i++)
        count++;
    return count;

}

void strcat(char destination[],char source[])

{
    int destlenth = strlen(destination);
    int sourcelength =strlen(source);

    for(int i=strlen(destination), j=0;j<strlen(source) ; i++,j++)
    {
        destination[i]=source[j];

    }
     destination[destlenth+sourcelength]='\0';


}
int main()
{
    char str[]="hello";
    char str2[]=" world";

    strcat(str,str2);
    puts(str);
    return 0;

}


