#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    int word=0,line=0,character=0;
    printf("type your paragraph(type 0(zero) at the end:\n");
    while(1)
    {
        scanf("%c",&c);
        if(c=='0')
            break;
        else {
                if(c==' ')
                word++;
            else if(c=='\n')
            {
                word++;
                line++;

            }
        }
            character++;

    }
    character = character-line;
    printf("word=%d \n character=%d\n line =%d\n",word,character,line);

    return 0;
}
