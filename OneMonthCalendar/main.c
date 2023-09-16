#include <stdio.h>
#include <stdlib.h>

//outputs a one-Month-Calendar
// first column is all the mondays, second all the tuesdays, etc.

int main()
{
    int daysInMonth = 30;
    int dayOfWeek = 1;
    int endOfWeek = 7;
    printf("number of days in month: ");
    scanf("%d", &daysInMonth);
    printf("starting day of week (1=Monday, 7=Sunday): ");
    scanf("%d", &dayOfWeek);
    printf("\n");
    for (int i=1; i<dayOfWeek; i++)
    {
        printf("   ");
    }
    for (int i=1; i<=daysInMonth; i++)
    {
        printf("%2d ",i);
        if (dayOfWeek == endOfWeek)
        {
            printf("\n");
            dayOfWeek = 1;
        }
        else
        {
            dayOfWeek++;
        }
    }
    return 0;
}
