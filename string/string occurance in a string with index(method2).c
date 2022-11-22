 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

 int stringOccur(char str1[], char str2[])
 {
     int count =0;
     int j=1;
     int foundOcc =1;
     for(int i=0;i<strlen(str1);i++)

     {

         int foundOcc =1;
         for(int j =i,k=0;k<strlen(str2);j++,k++)
         {
             if(str1[j]==str2[k])
                continue;
             else
               {
                   foundOcc =0;
                   break;

               }

         }
         if(foundOcc)
            {
//                printf("occ %d is at %d\n",j++,i);
//                count++;}

    return i;}

     }
    //return count;
 }
 int main()
 {
     char str1[]="jghello world hello hellohellohello";
     char str2[]="hello";
     puts(&str1[12]);
      int b= stringOccur(str1,str2);///puts(&str[number] express the rest of string from the character number
        printf("%d",b);

     return 0;
 }



