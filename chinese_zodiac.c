/*
Name: Sumit Subhash Jadhav
U89612131.
This program is for determining zodiac according to Chinese culture which influences a person's character.
*/
#include<stdio.h>
int main()
{
    int birth_year,remainder;
    printf("Enter the year of birth:");
    scanf("%d",&birth_year);
    if (birth_year>0)
    {
        remainder=(birth_year % 12);
        switch(remainder)      //Starting switch case using remainder, this will test all conditions of the table
        {
            case 0: printf("The Chinese animal sign for %d is Monkey",birth_year);
                    break;
            case 1: printf("The Chinese animal sign for %d is Rooster",birth_year);
                    break;
            case 2: printf("The Chinese animal sign for %d is Dog",birth_year);
                    break;
            case 3: printf("The Chinese animal sign for %d is Pig",birth_year);
                    break;
            case 4: printf("The Chinese animal sign for %d is Rat",birth_year);
                    break;
            case 5: printf("The Chinese animal sign for %d is Ox",birth_year);
                    break;
            case 6: printf("The Chinese animal sign for %d is Tiger",birth_year);
                    break;
            case 7: printf("The Chinese animal sign for %d is Rabbit",birth_year);
                    break;
            case 8: printf("The Chinese animal sign for %d is Dragon",birth_year);
                    break;
            case 9: printf("The Chinese animal sign for %d is Snake",birth_year);
                    break;
            case 10: printf("The Chinese animal sign for %d is Horse",birth_year);
                    break;
            case 11: printf("The Chinese animal sign for %d is Sheep",birth_year);
                    break;
        }
    }
    else
    {
        printf("Please enter a valid year!"); //If Birth year is less than or equal to zero
    }
    return(0);
}
