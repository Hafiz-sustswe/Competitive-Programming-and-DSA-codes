#include<stdio.h>
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

int ispalindrome(char str[]){
    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
    if(str[i] == str[j])
        continue;
    else
        return 0;

return 1;
}
int main()
{
    char str[]="star comedy by democrats";
    removeSpaces(str);
    int b=ispalindrome(str);
    if(b)
        printf("palindrome");
    else
        printf("not palindrome");


    return 0;
}
