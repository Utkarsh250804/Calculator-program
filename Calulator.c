#include <stdio.h>
#include <stdlib.h>
 


int main()
{

    char ch;

    double a, b;

    while (1) {

        printf("Enter an operator (+, -, *, /), "

               "if want to exit press x: ");

        scanf(" %c", &ch);
 

        // to exit

        if (ch == 'x')

            exit(0);

        printf("Enter two first and second operand: ");

        scanf("%lf %lf", &a, &b);
 

       //Select operation

        switch (ch) {
 

        // For Addition

        case '+':

            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);

            break;
 

        // For Subtraction

        case '-':

            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);

            break;
 

        // For Multiplication

        case '*':

            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);

            break;
 

        // For Division

        case '/':

            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);

            break;
 

        

        default:

            printf(   "Invalid operator\n");

        }
 

        printf("\n");

    }
}
