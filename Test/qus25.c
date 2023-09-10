#include<stdio.h>
#include<time.h>
int main()
{
    struct tm *local;
    time_t t;
    t=time(NULL);
    local=localtime(&t);
    printf("%d",local->tm_isdst);
    return 0;
}
