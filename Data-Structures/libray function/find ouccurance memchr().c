#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr;
    char s[] ="Example string";
    ptr = (char *) memchr(s,'ing',sizeof(s));
    if(ptr != NULL)
        printf(" 'p' is found at %d \n ",ptr-s+1);
    else
        printf("p not found\n");





}
