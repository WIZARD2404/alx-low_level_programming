#include <stdio.h>

/**
 * main - A Simple code that accepts an input and print out the day you were born,
 * your age,days you've spent on earth and your zodiac sign.
 *
 * Please Enter Date in this format- DD MM YYYY
 *
 * Returns (0) - Success
 */

int main()
{
        /* The days of the week are represented from 0......7 */


        /* Jan 1st 0001 was on a Saturday (6) */
        const int fday = 6 ;
        int day = 0, month = 0, year = 0, pow = 1, mday, x = 0;

        /*int jan, feb, mar, apr, may, june, july, aug, sep, oct, nov, dec;*/

        scanf("%2d %2d %4d", &day, &month, &year);
        /**
         * lyear: Subtract a year for ease of calculations
         * leap : finds the number of leap year between year of birth & 1st year
         */
        int lyear = year - 1, leap = year / 4,
        dys = ((lyear * 365) + leap), cal = dys + 6 - 1;
        _Bool is_leap= !(year % 4);

        //Error Handler
        if ((!year)){
                printf("Please enter a valid Year\n");
                pow = 0;
        } else if((!day)){
                printf("Please enter a valid Year\n");
                pow = 0;
        } else if((!month)){
                printf("Please enter a valid Year\n");
        }

        /* Days in a Month calculation + t=    = (cal + day + 31 + 28) % 7;*/
        for(register int i = 0; i <= 12 && pow; ++i){
                switch(month)
                {
                        case 1:
                                mday = (cal + day) % 7;
                                break;
                        case 2:
                                mday = (cal + day + 31);
                                break;
                        case 3:
                                is_leap? ++x : x;
                                mday = (cal + day + 31 + 28 + x) % 7;
                                x = 0;
                                break;
                        case 4:
                                is_leap? ++x : x;
                                mday = (cal + day + 31 + 28 + x + 30) % 7;
                                x = 0;
                                break;
                        case 5:
                                mday = cal + day;
                                break;
                        case 6:
                                mday = cal + day;
                                break;
                }
        }

        switch (mday)
        {
        case 0 :
                printf("You were born on a Sunday\n");
                break;
        case 1 :
                printf("You were born on a Monday\n");
                break;
        case 2 :
                printf("You were born on a Tuesday\n");
                break;
        case 3 :
                printf("You were born on a Wednesday\n");
                break;
        case 4 :
                printf("You were born on a Thursday\n");
                break;
        case 5 :
                printf("You were born on a Friday\n");
                break;
        case 6 :
                printf("You were born on a Saturday\n");
                break;
        }
        printf("I just started learning C recently  so if you like this code,"\
             "encourage me\n by hitting the upvote button and drop a comment below"\
             " on features you'll like me to add");

         return 0;



}

/**

 * Get the PC version on Github(https://github.com/WIZARD2404)

 * This code is Opensource and can be rebuilt an

 */
