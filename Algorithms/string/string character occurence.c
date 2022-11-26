#include<stdio.h>
#include<stdlib.h>
int charOcc(char str[],char c)
{
    int count=0,found=1;
    int strlength = strlen(str);
    for(int i=0;i<strlength;i++)
      {
           if(str[i] == c)
       {
                count++;
        if(found)
        {
            printf("index of first occ-%d\n",i);
            found =0;
        }
      }
       }

  return count;
}
int main()
{
    printf("total occ-%d",charOcc("hello world",'l'));
    return 0;
}
