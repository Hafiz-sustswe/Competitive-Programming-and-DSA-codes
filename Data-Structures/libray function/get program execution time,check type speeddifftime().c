/*
    Project Name    :   Typing Speed Counter
    Project Type    :   Console Application
    Author          :   Md Sadman Hafiz
    Starting Date   :   March 22, 2021
    Ending Date     :   ***** **, ****
*/

 #include<stdio.h>
 #include<time.h>
 #include<string.h>

 int main()
 {
    time_t time1,time2;
    int a,l;
    char get_input[1000000];

    printf("Are you ready to start? Enter Y/y/YES/Yes to start.\n");
    char str[100];
    scanf("%s", str);
    if( str[0] != 'Y' && str[0] != 'y' ) return 0;
    getchar();
    system("cls");

    double b, difference;
    printf("Type the text given bellow-\nThe name of our country is Bangladesh. It's a very beautiful country.\n\n");
    time(&time1);
    gets(get_input);
    time(&time2);

    difference=difftime(time2,time1);
    l = strlen(get_input);
    b = difference/60;

    printf("\n\ncharacter per minute : %0.2lf\n", (double)l / b);
    printf("You r speed is %0.2lf word per minute\n\n",((double)l/b)/ 5.0);

    printf("Typed characters: %d\n", l);
    printf("Time duration: %0.2lfs", (double)(b * 60));





 }
