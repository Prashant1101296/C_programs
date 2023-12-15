#include<stdio.h>
struct Employee{
    int empid;
    float salary;
    char name[30];

};
int main(){
    // struct Employee ram;
    // struct Employee rahul;
    //  rahul.empid=2169;
    //  rahul.salary=20000.25;
    struct Employee e1={2169,25000.25,"rahul"};
     
     printf("empid of employee is=%d\n",e1.empid);
      printf(".salary of the employee is=%f \n",e1.salary);
     return 0;
}
