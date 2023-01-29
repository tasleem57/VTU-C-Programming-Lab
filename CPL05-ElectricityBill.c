/**
1. Include necessary headers
2. Declare variables
3. Get customer name and total units consumed as input
4. Set minimum charges
5. Calculate Bill amount based on slabs
6. Add surcharge if applicable
7. Print customer name, units consumed and bill amount
**/

#include <stdio.h>

int main()
{

char name[10];
int unit;
float billAmount;

printf("Enter the customer name: \n");
scanf("%s",&name);
printf("Enter the total units consumed:\n");
scanf("%d", &unit);

billAmount = 100;

if(unit<=200) {
billAmount= billAmount+(unit*.80);
}
else if(unit>200 && unit<=300){
billAmount= billAmount+(200*0.80)+((unit-200)*0.90);
}
else if(unit > 300){
billAmount= billAmount+(200*0.80)+(100*0.90)+((unit-300)*1);
}

if(billAmount>400){
billAmount=billAmount+(billAmount*0.15);
}

printf("Customer name: %s\n", name);
printf("Total units consumed: %d\n", unit);
printf("Total Bill Amount: %.2f\n", billAmount);

return 0;
}
