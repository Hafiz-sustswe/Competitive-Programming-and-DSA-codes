#include<stdio.h>
#include<string.h>
 int main()
 {
     char s1[] ="1564892146";
     char s2[] ="921";

     char *p= strchr(s1,'1'); ///returns a pointer of first occurance of given char. (it means if it is found it will give the rest of the string with it)
     puts(p);                 ///and returns NULL if it is not there

     p = strrchr(s1,'4');
     puts(p); ///same ,but returns the last occuarance
     p = strpbrk(s1,s2);///return a pointer to first occurance of any char. in s1 that matches with s2;
     puts(p);
     p= strstr(s1,s2);///returns is s1 matches with a string or substring fromn s2
    if(p != NULL)
     {puts(p);}
     else
        printf("null");
 }
