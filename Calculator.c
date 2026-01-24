#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

void print_menu();
double division(double, double);
double modulus(int, int);
double cube(double);

int main()
{

    int choice;
    double first, second, result;
    while (1)
    {
        print_menu();
        scanf("%d", &choice);
        if (choice == 11)
        {
            break;
        }
        if (choice < 1 || choice > 11)
        {
            fprintf(stderr, "Invalid Menu choice");
            continue;
        }
        printf("Please enter the first number : ");
        scanf("%lf", &first);
        printf("Please enter the second number : ");
        scanf("%lf", &second);
        switch (choice)
        {
        case 1: // Add
            result = first + second;
            break;

        case 2: // Sub
            result = first - second;
            break;

        case 3: // Multiply
            result = first * second;
            break;

        case 4: // Divison
            result = division(first, second);
            break;

        case 5: // Modulus
            result = modulus((int)first, (int)second);

            break;

        case 6: // power
            result = pow(first, second);

            break;
        case 7: // cube first

            result = cube(first);

            break;
        case 8: // cube second

            result = cube(second);

            break;

        case 9:                             //
            result = sin(first * PI / 180); // In radians
            break;
        case 10:                            //
            result = sin(first * 180 / PI); // In degree
        case 11:
            break;
        }
        if (!isnan(result))
        {
            printf("\nResult of operation is : %.2f", result);
        }
    };
    return 0;
}
double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Divison");
        return NAN;
    }
    else
    {
        return a / b;
    }
}
double modulus(int x, int y)
{
    if (y == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus");
        return NAN;
    }
    else
    {
        return x % y;
    }
}
double cube(double num)
{
    if (num == 0)
    {
        fprintf(stderr, "Invalid Argument for Cube Root ");
        return NAN;
    }
    else
        return num * num * num;
}

void print_menu()
{
    printf("\n\n------------------------------------");
    printf("\nWelcome to Simple Calculator\n");
    printf("\nChoose one of the following options :");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Divison");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Cube  of First number");
    printf("\n8. Cube  of Second number");
    printf("\n9. Sine of first number (degrees)");
    printf("\n10. Sine of first number (radians)");
    printf("\n11. Exit");
    printf("\nNow, enter your choice :");
}