#include<stdio.h>
#include<conio.h>
int main()
{
main:
    system("cls");
    int choice, n, i, isprime = 0, year, number,ch, pd, pm, py, bd, bm, by, d, m, y;
    float first_number, second_number;
    char operator;

    printf("\n\t***** Welcome to Ashadul Calculator *****\t\n");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Simple Calculator\n\t\t[2] Age Calculator\n\t\t[3] Prime Number Checking Calculator\n\t\t[4] Leap Year Checking Calculator\n\t\t[5] Odd or Even Checking Calculator\n\t\t[6] About Developer\n\t\t[0] Exit\n\t\t=================\n\t\t");

    printf("Enter the Choice: ");
    scanf("%d", &choice);


    switch(choice)
    {
    case (1):
        system("cls");

        printf("\n\t\t\t\t\t Simple Calculator \t\t\t\t\n");
        printf("\n\t\t\t\t\t ==================\t\t\t\t\n");

        printf("\n\tEnter two number and operator as shown below\n");
        printf("\n\
           1. For Addition\t\t :\t First Number + Second Number\n\
           2. For Subtraction\t\t :\t First Number - Second Number\n\
           3. For Multiplication\t :\t First Number * Second Number\n\
           4. For Division\t\t :\t First Number / Second Number\n");

        printf("\n\tPress ENTER button after each of input \t: \t");
        scanf("%f %c %f", &first_number, &operator, &second_number);

        switch(operator)
        {
        case ('+'):
            printf("\n\n\tAddition Result \t:\t %.2f + %.2f = %.2f\n\n", first_number, second_number, first_number+second_number);
            break;
        case ('-'):
            printf("\n\n\tSubtraction Result \t:\t %.2f - %.2f = %.2f\n\n", first_number, second_number, first_number-second_number);
            break;
        case ('*'):
            printf("\n\n\tMultiplication Result \t:\t %.2f * %.2f = %.2f\n\n", first_number, second_number, first_number*second_number);
            break;
        case ('/'):
            printf("\n\n\tDivision Result \t:\t %.2f / %.2f = %.2f\n\n", first_number, second_number, first_number/second_number);
            break;
        default:
            printf("\tSorry! This is not valid operator\n\n");
        }
        break;



    case (0):
        system("cls");
        printf("Are you sure to exit?");
        return 0;


    default:
        system("cls");
        printf("Invalid Choice");




    case (2):///Age Calculator
        system("cls");
    printf("\n\t\t\t\t Age Calculator \t\t\t\t\n");
    printf("\n\t\t\t\t ============== \t\t\t\t\n");

    printf("\n\t Enter your present date - month - year \t\t: \t");
    scanf("%d %d %d", &pd, &pm, &py);
    printf("\n\t Enter your birth date - month - year \t\t: \t");
    scanf("%d %d %d", &bd, &bm, &by);

    if(bd>pd && bm==1||bm==3||bm==5||bm==7||bm==8||bm==10||bm==12)
    {
        pd=pd+31;
        bm=bm+1;
    }
    else if(bd>pd && bm==4||bm==6||bm==9||bm==11)
    {
        pd=pd+30;
        bm=bm+1;
    }
    else if(bd>pd && bm==2 && ((by%4==0) && (by%100!=0)) || (by%400==0))
    {
        pd=pd+29;
        bm=bm+1;
    }
    else if(bd>pd && bm==2)
    {
        pd=pd+28;
        bm=bm+1;
    }
    else
    {
        pd=pd;
        bm=bm;
    }

    d=pd-bd;

    if(bm>pm)
    {
        pm=pm+12;
        by=by+1;
        m=pm-bm;
        y=py-by;
    }
    else
    {
        m=pm-bm;
        y=py-by;
    }
    printf("\n\t Your age \t\t\t\t\t: \t%d years \t%d months \t%d days\n", y, m, d);

        break;


    case (3):///prime calculator
        system("cls");
        printf("\n\t\t\t\t Prime Number Checking Calculator \t\t\t\t\n");
        printf("\n\t\t\t\t ================================ \t\t\t\t\n");

        printf("\n\t Enter a positive integer \t: \t");
        scanf("%d",&n);
        for(i=2; i<=n/2; ++i)
        {
            if(n%i==0)
            {
                isprime=1;
                break;
            }
        }
        if (isprime==0)
            printf("\n\t %d is a prime number.\n\n",n);
        else
            printf("\n\t %d is not a prime number.\n\n",n);

        break;




    case (4):///leap year calculator
        system("cls");

        printf("\n\t\t\t\t Leap Year Checking Calculator \t\t\t\t\n");
        printf("\n\t\t\t\t ============================= \t\t\t\t\n");

        printf("\n\t Enter a year \t: \t");
        scanf("%d",&year);
        printf("\n");

        if(year%4 == 0)
        {
            if( year%100 == 0)
            {
                /// year is divisible by 400, hence the year is a leap year
                if ( year%400 == 0)
                    printf("\n\t %d is a leap year.\n", year);
                else
                    printf("\n\t %d is not a leap year.\n", year);
            }
            else
                printf("\n\t %d is a leap year.\n", year );
        }
        else
            printf("\n\t %d is not a leap year.\n", year);
        break;




    case (5):///odd even checking
        system("cls");
        printf("\n\t\t\t\t Odd Even Number Checking Calculator \t\t\t\t\n");
        printf("\n\t\t\t\t =================================== \t\t\t\t\n");

        printf("\t Enter an integer \t : \t");
        scanf("%d", &number);
        /// True if the number is perfectly divisible by 2
        if(number % 2 == 0)
            printf("\n\t %d is even.\n", number);
        else
            printf("\n\t %d is odd.\n", number);
        break;




    case (6):///About Developer
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


    printf("\n\n\n\t\t::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");

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
