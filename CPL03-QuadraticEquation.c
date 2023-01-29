/**
1. Include libraries
2. Declare variables
3. Get the values for coefficients from the user
4. Calculate discriminant value
5. Compute roots and print output - real and equal, real and distinct, complex
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a,b,c;
	float disc, root1,root2,rp,ip;
	printf("Enter the value for coefficients\n");
	scanf("%f%f%f",&a,&b,&c);

		disc=b*b-4*a*c;
		if(disc>0)
		{
			root1=(-b+sqrt(disc))/(2*a);
			root2=(-b-sqrt(disc))/(2*a);
			printf("roots are real and distinct\n");
			printf("root1=%f\n",root1);
			printf("root2=%f\n",root2);
		}

		else if(disc==0)
		{
			root1=-b/(2*a);
			root2=root1;
			printf("roots are real and equal\n");
			printf("root1=%f\n",root1);
			printf("root2=%f\n",root2);
		}

		else if(disc<0)
		{
			rp=-b/(2*a);
			ip=sqrt(abs(disc))/(2*a);
			printf("roots are complex\n");
			printf("root1=%f+i%f\n",rp,ip);
			printf("root2=%f-i%f\n",rp,ip);
		}

		return 0;
}
