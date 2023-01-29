/**
1. Include libraries
2. Initialize variables
3. Get arithmetic expression from user. Ex: 10 + 5
4. Perform mathematical operations based on operator - conditional statements
5. Print output
**/

#include<stdio.h>

void main() {

    int num1, num2, result;
    char operator;

    printf("Please enter the arithmetic expression\n");
    scanf("%d %c %d", &num1, &operator, &num2);

   switch(operator) {
        case '+':
                result = num1 + num2;
                break;
        case '-':
                result = num1 - num2;
                break;
        case '*':
                result = num1 * num2;
                break;
        case '/':
                result = num1 / num2;
                break;
        case '%':
                result = num1 % num2;
                break;
        default:
                printf("Invalid operator\n");
   }

    printf("\nResult is %d\n",result); //printing result

}
