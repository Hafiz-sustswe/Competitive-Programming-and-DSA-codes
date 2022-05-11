#include<stdio.h>
#include<time.h>

int main()
{

    /* Define temporary variables */
    time_t current_time;
    struct tm *local_time;

    /* Retrieve the current time */
    current_time = time(NULL);
    /* Get the local time using the current time */
    local_time = localtime(&current_time);

    /* Display the local time */

    printf("The time at TechOnTheNet is: %s\n",asctime(local_time));
    //another mathod
    time_t curr_time;
    curr_time = time(NULL);
    printf("The time  is: %s",ctime(&curr_time));


    return 0;
}

