 #include<stdio.h>
 #include<time.h>
 #include<string.h>
 int count_word(char s[],int ln)
 {
    int cnt=0;
    for(int i=0;i<ln;i++)
    {
        if(s[i] == ' ' || s[i]=='.')
            cnt++;
    }
    return cnt+1;
 }
 int main()
 {
    time_t time1,time2;
    int a,l;
    char get_input[256];

    double b, difference;
    printf("Type the text given bellow-\nThe name of our country is Bangladesh.It's a very beautiful country.\n\n");
    time(&time1);
    gets(get_input);
    time(&time2);

    difference=difftime(time2,time1);
    l = strlen(get_input);
    a = count_word(get_input,l);
    b = difference/60;


    printf("\n\nYou r speed is %0.1lf word per minute",(double)a/b);







 }
