/**
1. Include necessary headers
2. Declare variables and get input values
3. Convert degree to radians
4. Compute Sin(x) values using Taylor series
5. Print output
6. Compute Sin(x) using built-in function and print output
**/

#include<stdio.h>
#include<math.h>

int main(){

    float degree, x;
    float numerator, denominator, term, value;
    int n, i;

    printf("Enter the angle: ");
    scanf("%f", &degree);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    x = degree * M_PI / 180;

    numerator = x;
    denominator = 1.0;

    value = 0.0;
    term = numerator / denominator;

    for(i=1;i<=n;i++){
        value = value + term;
        numerator = - numerator * x* x;
        denominator = denominator * (2*i) * (2*i+1); //5 * 4* 3!
        term = numerator / denominator;
    }

    printf("Calculated value of Sin(%f) is %f\n", degree, value);

    printf("Computed value of Sin(%f) using Built in function is %f\n", degree, sin(x));

    return 0;

}
