#include <stdio.h>

void main()
{
   char answer = 0;                    /* Stores an input character */

   printf("Enter Y or N: ");
   scanf(" %c", &answer);

   switch (answer)
   {
     case 'y': case 'Y':
       printf("\n affirmative.");
       break;

     case 'n': case 'N':
       printf("\n  negative.");
       break;

     default:
       printf("\n  not respond correctly...");
       break;
   }
}
