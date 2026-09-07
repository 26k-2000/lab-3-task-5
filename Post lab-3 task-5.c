#include <stdio.h>
int main(){

    char name[50];
    printf("Enter the name of student: ");
    fgets(name,50,stdin);

    char id[50];
    printf("Enter the id of student:");
    fgets(id,50,stdin);

    float cmp_labs,total_labs;

    printf("Enter the no. of labs student completed:");
    scanf("%f", &cmp_labs);

    printf("Enter the total no. of labs:");
    scanf("%f", &total_labs);

    float quiz_marks,assignment_marks,project_marks;

    printf("Enter the marks of quiz:");
    scanf("%f", &quiz_marks);

    printf("Enter the marks of assignment:");
    scanf("%f", &assignment_marks);

    printf("Enter the marks of project:");
    scanf("%f", &project_marks);


    if (total_labs<=0 || total_labs!=(int)total_labs || cmp_labs!=(int)cmp_labs || cmp_labs<0 )
    {
        printf("The no of labs can only be natural numbers(0 is allowed only for completed labs)!!!");
        return 1;
    }

    if (cmp_labs>total_labs)
    {
        printf("Completed labs can never be greater than total!!!");
        return 1;
    }
    
    if (quiz_marks<0||assignment_marks<0||project_marks<0)
    {
        printf("Marks can not be less than zero!!!");
        return 1;
    }
    
    
    float lab_percentage,total_marks;

    lab_percentage=(cmp_labs/total_labs)*100;

    total_marks=quiz_marks+assignment_marks+project_marks;

    printf("\t\t====STUDENT REPORT====\n");
    printf("Student name:");
    fputs(name,stdout);
    printf("Student id:");
    fputs(id,stdout);
    printf("Labs Attended:%.0f \t Total Labs:%.0f\n",cmp_labs,total_labs);
    printf("Lab Attendance Percentage:%.2f\n",lab_percentage);
    printf("Quiz Marks:%.2f\tAssignment Marks:%.2f\tProject Marks:%.2f\n",quiz_marks,assignment_marks,project_marks);
    printf("Total Marks:%.2f\n",total_marks);

    return 0;
}
