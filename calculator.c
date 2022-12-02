//This a simple calculator program made in C language...

//Inluding Header files
#include <stdio.h>

int main()
{   //Declearing variables
    float num1, num2, result, sum, i;
    printf("\t\t\t\t*Welcome to Aniket's Calculator*\n");
    while (i = 1)
    {   //Taking input from user
        printf("Enter the first number:\n");
        scanf("%f", &num1);
        printf("Enter the second number:\n");
        scanf("%f", &num2);
        //Asking user what to do
        printf(
            "Press 1 for Addition\n"
            "Press 2 for Subtraction\n"
            "Press 3 for Multiplication\n"
            "Press 4 for Division\n"
            "Press 0 for exit\n");
        scanf("%f", &result);

        // Main Calculations

        if (result == 1)
        {
            printf("%f + %f = %f", num1, num2, num1 + num2);
            printf("Thanks for Using!!!");
        }
        else if (result == 2)
        {
            printf("%f - %f = %f", num1, num2, num1 - num2);
            printf("Thanks for Using!!!");
        }
        else if (result == 3)
        {
            printf("%f * %f = %f", num1, num2, num1 * num2);
            printf("Thanks for Using!!!");
        }
        else if (result == 4)
        {
            printf("%f / %f = %f", num1, num2, num1 / num2);
        }
        else if (result == 0)
        {
            printf("Thanks for using our calculator\n"
                   "Hope you enjoyed!!!\n");
        }
        else
        {
            printf("Something went wrong:\nPlease try again...\n");
            continue;
        }

        break;
    }
return 0;
}
