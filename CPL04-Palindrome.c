/**
1. Include necessary headers
2. Declare variables
3. Get the integer value from user
4. Check for positive number
5. Logic to reverse the number
6. Check for Palindrome and print output
**/


#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n, rev, m, digit;

   printf("Enter a positive number\n");
   scanf("%d",&n);

   if(n < 0){
    printf("Invalid number\n");
    exit(0);
   }

   rev=0;
   m=n;

   while(n!=0)
   {
      digit=n%10;
      n=n/10;
      rev=digit+10*rev;
   }
   printf("Reverse of %d is %d\n",m,rev);

   if(m==rev) {
	     printf("It is a palindrome\n");
    } else {
	     printf("It is not a palindrome\n");
    }

    return 0;
}
