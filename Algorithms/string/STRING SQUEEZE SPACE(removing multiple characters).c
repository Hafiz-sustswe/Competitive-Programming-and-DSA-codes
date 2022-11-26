#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int strlen(char str[])
//{
//    int count =0;
//    for(int i=0;str[i] !='\0';i++)
//        count++;
//    return count;
//
//}

void squeezSpaces(char str[]){
    int strleth= strlen(str),k=0;

    char squeezed[strleth];

    for(int i=0 , j=0;i<strleth;i++)
    {
        if (str[i]==' '  &&  str[i+1]==' ')
            {
                k++;
                continue;}

        else
            squeezed[j++]=str[i];

    }
    strcpy(str,squeezed);

}
int main()
{
    char str[]="this  is   a test";
    squeezSpaces(str);
    puts(str);

    return 0;

}




