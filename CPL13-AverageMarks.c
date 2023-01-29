/**
1. Include necessary headers
2. Define student structure
3. Define variables inside main function
4. Get student details as input
5. Calculate total marks and average for each student
6. Check if the student scored above or below average marks
**/

#include<stdio.h>

struct Student {
    char name[20];
    float sub1, sub2, sub3;
    float total, avg;
};

int main(){

    struct Student s[20];
    int n, i;
    float classAvg, totalAvg = 0.0;

    printf("Enter the total number of students\n");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the name\n");
        scanf("%s", s[i].name);
        printf("Enter the marks\n");
        scanf("%f%f%f", &s[i].sub1, &s[i].sub2, &s[i].sub3);

        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].avg = s[i].total / 3;
        totalAvg = totalAvg + s[i].avg;
    }

    classAvg = totalAvg / n;

    for(i=0;i<n;i++){
        printf("\n Total marks scored by %s is %f\n", s[i].name, s[i].total);
        printf("Average marks scored: %f\n", s[i].avg);

        if(s[i].avg >= classAvg){
            printf("%s has scored above average\n", s[i].name);
        } else {
            printf("%s has scored below average\n", s[i].name);
        }
	}

	return 0;

}
