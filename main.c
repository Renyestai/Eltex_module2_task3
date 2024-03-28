#include <stdio.h>
#include <arithmetic_operations.h>

int main()
{   
    char choice;
    float a, b;

    while(1)
    {  
         
        printf("Choose arithmetic operation | + - * / |\n Or q to quit\n");
        scanf("%c", &choice);

        if(choice == 'q')
        {
            printf("You have quit the program");
            return;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        
        switch (choice)
        {
        case '+':
            printf("Result: %f", add(a,b));
            break;
        case '-':
            printf("Result: %f", subtract(a, b));
            break;
        case '*':
            printf("Result: %f", multiply(a, b));
            break;
        case '/':
            printf("Result: %f", divide(a, b));
            break;
        default:
            printf("Invalid choice. Please, enter | + - * / | to choose arithmetic operation or q to quit\n");
        }
    }
    return 0;
}