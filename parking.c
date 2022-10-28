/*
Name: Sumit Subhash Jadhav
U89612131.
This program is for calculating cost of parking, like a parking meter, the maximum cost for 24 hrs is capped at $12, first 30 min are free and there after $1 for every 20 min.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int hours,minutes,overall,days;
    int days_total;  //Variables for hours parked, minutes parked, amount due and
    printf("Enter hours parked:");
    scanf("%d",&hours);
    printf("Enter minutes parked:");
    scanf("%d",&minutes);

    overall = 0;

    if(hours <0 || minutes <0 || minutes>=60)
        {
        printf("Invalid input");
        }

    else
        {
        if(hours >24 )
        {
        days = hours / 24;
        hours -= days * 24;
        days_total = days * 12;
            if(hours > 4 && hours < 24)
            {
            overall = days_total + 12;
            }
        else
            {
            overall = days * 12 + ceil((hours *60 +minutes - 30) / 20)+1;
            }
        }

    else
        {
        if(hours >4)
            {
            overall = 12;
            }
    else
        {
        overall = (ceil((hours *60 +minutes - 30) / 20))+1;}}
        printf("Amount due is $%d",overall);
        }

return(0);
}
