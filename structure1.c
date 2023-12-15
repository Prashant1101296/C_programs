#include<stdio.h>
struct student {
char name[20];
int rollno;
float marks;
};

int main()
{
    struct student A1={ "rahul",323328476,576.00};
    printf("marks of the student is= %f\n",A1.marks);
    printf("roll no of the student is=%d\n", A1.rollno);
    return 0;
}