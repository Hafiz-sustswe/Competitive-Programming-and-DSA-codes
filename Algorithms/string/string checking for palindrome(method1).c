#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void removeSpaces(char str[])
{
    int strlenth= strlen(str);
    char removed[strlenth+1];
    int j=0;
    for(int i=0;i<strlenth;i++)
       {

        if(str[i]==' ')
        continue;
        else
            removed[j++]=str[i];
        }
        removed[j] = '\0';

        strcpy(str,removed);


}




void reversString(char str[])
{
    char reverse[strlen(str)+1];
    for(int i=strlen(str)-1,j=0;i>=0;i--,j++)
        reverse[j]=str[i];
    reverse[strlen(str)]='\0';
    strcpy(str,reverse);
}


int main()
{
    char str[]="star comedy by democrats";
    char reverse[strlen(str)+1];
    strcpy(reverse,str);
    removeSpaces(str);
    removeSpaces(reverse);

    reversString(reverse);
    if(strcmp(str,reverse)==0)
        printf("palindrome\n");
    else
             printf(" not palindrome\n");

}
