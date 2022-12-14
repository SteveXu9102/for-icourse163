#include <stdio.h>
#define DAYS_FEB(year) ((year%4!=0&&year%100!=0)||(year%100==0&&year%400!=0)||(year%3200==0&&year%172800==0))?28:29

int main()
{
    int year;
    scanf("%d",&year);
    printf("days of the FEB.: %d\n",DAYS_FEB(year));
    return 0;
}