//Calculate addition, subtraction, multiplication or division depending on input from user
#include<stdio.h>
#include<conio.h>
int main()
{
main:
    system("cls");
    int choice, n, i, isprime = 0, year, number,ch;
    float first_number, second_number;
    char operator;

    printf("\n\t***** Welcome to Ashadul Calculator *****\t\n");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Simple Calculator\n\t\t[2] Prime Number Checking Calculator\n\t\t[3] Leap Year Checking Calculator\n\t\t[4] Odd or Even Checking Calculator\n\t\t[5] About Developer\n\t\t[0] Exit\n\t\t=================\n\t\t");

    printf("Enter the Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case (1):
        system("cls");
        printf("Enter two number and operator as shown below\n");
        printf("\n\
           1. For Addition\t\t :\t First Number + Second Number\n\
           2. For Subtraction\t\t :\t First Number - Second Number\n\
           3. For Multiplication\t :\t First Number * Second Number\n\
           4. For Division\t\t :\t First Number / Second Number\n");

        printf("\nPress ENTER button after each of input\n\n");
        scanf("%f %c %f", &first_number, &operator, &second_number);

        switch(operator)
        {
        case ('+'):
            system("cls");
            printf("\n\nAddition Result \t:\t %.2f + %.2f = %.2f\n\n", first_number, second_number, first_number+second_number);
            break;
        case ('-'):
            system("cls");
            printf("\n\nSubtraction Result \t:\t %.2f - %.2f = %.2f\n\n", first_number, second_number, first_number-second_number);
            break;
        case ('*'):
            system("cls");
            printf("\n\nMultiplication Result \t:\t %.2f * %.2f = %.2f\n\n", first_number, second_number, first_number*second_number);
            break;
        case ('/'):
            system("cls");
            printf("\n\nDivision Result \t:\t %.2f / %.2f = %.2f\n\n", first_number, second_number, first_number/second_number);
            break;
        default:
            printf("Sorry! This is not valid operator\n\n");
        }
        break;


    case (0):
        system("cls");
        printf("Are you sure to exit?");
        return 0;


    default:
        system("cls");
        printf("Invalid Choice");


    case (2):///prime calculator
        system("cls");

        printf("Enter a positive integer: ");
        scanf("%d",&n);
        system("cls");
        for(i=2; i<=n/2; ++i)
        {
            if(n%i==0)
            {
                isprime=1;
                break;
            }
        }
        system("cls");
        if (isprime==0)
            printf("\n%d is a prime number.\n\n",n);
        else
            printf("\n%d is not a prime number.\n\n",n);

        getch();
        break;


    case (3):///leap year calculator
        system("cls");

        printf("Enter a year: ");
        scanf("%d",&year);
        printf("\n");
        system("cls");

        if(year%4 == 0)
        {
            if( year%100 == 0)
            {
                /// year is divisible by 400, hence the year is a leap year
                if ( year%400 == 0)
                    printf("%d is a leap year.", year);
                else
                    printf("%d is not a leap year.", year);
            }
            else
                printf("%d is a leap year.", year );
        }
        else
            printf("%d is not a leap year.", year);
        break;


    case (4):///odd even checking
        system("cls");

        printf("Enter an integer: ");
        scanf("%d", &number);
        system("cls");
        /// True if the number is perfectly divisible by 2
        if(number % 2 == 0)
            printf("%d is even.", number);
        else
            printf("%d is odd.", number);


    case (5):///About Developer
        system("cls");
        printf("\n\t\t\t\t\t\t About Developer\t\t\t\t\t\n");
        printf("\n\t\t*******************************************************************************\t\t\n");
        printf("\n\t\tName \t\t\t: \t\tMd. Ashadul Islam\t\t\n");
        printf("\n\t\tStudent ID \t\t: \t\t1602058\t\t\n");
        printf("\n\t\tLevel \t\t\t: \t\t03\t\t\n");
        printf("\n\t\tSemester \t\t: \t\t01\t\t\n");
        printf("\n\t\tDepartment \t\t: \t\tComputer Science and Engineering\t\t\n");
        printf("\n\t\tUniversity \t\t: \t\tHajee Mohammad Danesh Science and Technology University\t\t");
        printf("\n\t\tEmail \t\t\t: \t\tashadul.cse.hstu@gmail.com\t\t\n");
        printf("\n\t\tContact \t\t: \t\t+8801750669727\t\t\n");
    }

    getch();






    printf("\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");

    scanf("%d",&ch);

    switch (ch)

    {

    case 1:

        goto main;





    case 0:

        break;



    default:

        printf("Invalid choice");

        break;

    }



    return 0;
}
