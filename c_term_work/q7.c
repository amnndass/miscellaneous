#include <stdio.h>

struct student{
    int marks[3]; //taking 3 subjects
    char name[20];
    int totalMarks;
    float averageMarks;
};

//modifying struct students with refernce to sustain changes
void calculateMarks(struct student *s){
    int total = 0;

    for(int i = 0; i<3; i++){
        total += s->marks[i];
    }

    s->totalMarks = total;
    s->averageMarks = total/5;
}

int main(){
    //todo: calculate total and average marks of students using array of structures

    //entring the number of students
    int n = 0;
    printf("enter number of students\n");
    scanf("%d",&n);

    //declaring array students of structure student
    struct student students[n];

    //taking input of student details
    for(int i = 0; i<n; i++){
        printf("\nEnter details of student: %d\n", i+1);

        //name
        printf("enter name\n");
        scanf("%s", &students[i].name);

        //marks
        printf("enter marks of 3 subjects\n");
        for(int j = 0; j<3; j++){
            scanf("%d", &students[i].marks[j]);
        }

        calculateMarks(&students[i]);
    }

    //dispay all students detials
    printf("\nStudent details and marks\n");
    for(int i = 0; i<n; i++){
        printf("\nstudent %d: %s\n",i+1,students[i].name);
        printf("total marks: %d\n", students[i].totalMarks);
        printf("average marks: %f\n", students[i].averageMarks);
    }

    return 0;

}
