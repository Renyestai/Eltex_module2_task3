#include <stdio.h>
#include "arithmetic_operations.h"

int main()
{   
    
    float a, b;
    int choice;

    float (*operations[4])(float, float) = {add, subtract, multiply, divide};
    while(1)
    {  
        printf("Choose arithmetic operation\n1. + 2. - 3. * 4. / \nor 5 to quit\n");
        scanf("%d", &choice);
      
        getchar();
        
        if(choice == 5)
        {
            printf("You have quit the program\n");
            return 0;
        }
        
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        getchar();

        if(choice < 1 ||choice > 5)
        {
            printf("Invalid choice\n");
            continue;
        }

      float result = operations[choice - 1](a,b);
        printf("Result: %.2f\n",result);
    }
    return 0;
}