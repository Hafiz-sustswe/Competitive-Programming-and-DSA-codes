 #include<stdio.h>
 #include<stdlib.h>
 int startsWith(char str1[],char str2[])
 {
     for(int i=0;i<strlen(str2);i++)
     {
         if(str1[i]==str2[i] )
            continue;
         else
            return 0;

     }
    return 1;

 }
 int main()
 {
     char str1[]="hello world";
     char str2[]="hello";
      int b= startsWith(str1,str2);
      if(b)
            printf("yeah\n");
      else
            printf("no\n");

     return 0;
 }
