#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,j,k ,word=0,line=0,character=0;
    printf("type your paragraph(type 0(zero) at the end:\n");
    gets(a);
    j = strlen(a);

    for(i=0;i<j;i++)
    {
        if(a[i]=='0')
            break;
        else {
                if(a[i]==' ')
                word++;
            else if(a[i]=='\n')
            {
                word++;
                line++;

            }
        }

    }
    character = character-line;
    printf("word=%d \n character=%d\n line =%d\n",word,character,line);
    return 0;


}
