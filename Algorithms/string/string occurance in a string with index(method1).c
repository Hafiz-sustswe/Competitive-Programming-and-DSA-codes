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
 int stringOccur(char str1[], char str2[])
 {
     int count =0;
     int j =1;
     for(int i=0;i<strlen(str1);i++)
     {
         int b = startsWith(&str1[i],str2);

         if(b)
         {
             printf("occ %d is at %d\n",j++,i);
             count++;
         }


     }
    return count;
 }
 int main()
 {
     char str1[]="hello world hello hello";
     char str2[]="hello";
     puts(&str1[12]);
      int b= stringOccur(str1,str2);///puts(&str[number] express the rest of string from the character number///
        printf("%d",b);
     return 0;
 }

