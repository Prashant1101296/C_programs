#include <stdio.h>

// Define a union to store employee details
union EmployeeDetails {
    char name[50];
    int employeeId;
    float salary;
};

int main() {
    // Declare a variable of type union EmployeeDetails
    union EmployeeDetails employee;

    // Prompt the user to enter employee details
    printf("Enter employee name: ");
    scanf("%s", employee.name);

    printf("Enter employee ID: ");
    scanf("%d", &employee.employeeId);

    printf("Enter employee salary: ");
    scanf("%f", &employee.salary);

    // Display the entered employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.employeeId);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
