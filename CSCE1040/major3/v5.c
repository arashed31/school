#include "v5.h"

int main()
{

    int i;
    int num;
    studentRecord **students;
    char temp1[257], temp2[257];

    scanf("%d",&num);
    students = (studentRecord **) malloc(num * sizeof(studentRecord *));
    for(i = 0; i < num; i++)
    {
        students[i] = (studentRecord *) malloc (sizeof(studentRecord));
        scanf("%s %s %s %d %d %d", temp1, temp2, students[i]->idNum, 
              &students[i]->exam1, &students[i]->exam2, &students[i]->exam3);

        /*  allocate space for character strings, and copy the strings */
        students[i]->lastName = (char *) malloc(strlen(temp1) + 1);
        strcpy(students[i]->lastName, temp1);
        students[i]->firstName = (char *) malloc(strlen(temp2) + 1);
        strcpy(students[i]->firstName, temp2);

        students[i]->avg = 
            (students[i]->exam1 + students[i]->exam2 + students[i]->exam3)/3.;
        if( students[i]->avg >= 90.0 ) students[i]->grade = 'A';
        else if( students[i]->avg >= 80.0 ) students[i]->grade = 'B';
        else if( students[i]->avg >= 70.0 ) students[i]->grade = 'C';
        else if( students[i]->avg >= 60.0 ) students[i]->grade = 'D';
        else students[i]->grade = 'F';

        printf("%s, %s: %s, %s \n\t %4d %4d %4d %s %6.2f %s  %c\n",
               students[i]->lastName, students[i]->firstName, 
               students[i]->idNum, "has exams scores of:", students[i]->exam1, 
               students[i]->exam2, students[i]->exam3, 
               "for an average of ", students[i]->avg, " and a grade of ",
               students[i]->grade); 
    }
    return 0; 
}
