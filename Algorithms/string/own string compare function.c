#include<stdio.h>
#include<stdlib.h>
int strlen(char str[])
{
    int count =0;
    for(int i=0;str[i] !='\0';i++)
        count++;
    return count;

}

int strcmp(char source[],char destination[])

{
    int destlenth = strlen(destination);
    int sourcelength =strlen(source);

    for(int i=0 ;i<sourcelength; i++)
    {
        if(source[i]==destination[i])
            continue;
        else
            if(source[i]>destination[i])
            return 1;
            else
                return -1;
    }


  return 0;
}
int main()
{
    char str[]="hello";
    char str2[]=" world";
    printf("%d",strcmp(str,str2));
    return 0;

}



