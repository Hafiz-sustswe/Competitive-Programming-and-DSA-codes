#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    clock_t t1, t2;
    double time_elapsed;

    t1 = clock();

    int n;

    scanf("%d", &n);
    printf("%d\n", n);

    t2 = clock();

    time_elapsed = (double) (t2 - t1) / CLOCKS_PER_SEC;

    printf("Time elapsed : %lf\n", time_elapsed);
    printf("Clock per second : %d", CLOCKS_PER_SEC);

}
