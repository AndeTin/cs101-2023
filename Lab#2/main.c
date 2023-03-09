#include<stdio.h>
#include<string.h>

typedef struct employee{
    int em_id;
    char em_name[10];
    int em_age;
    char em_phone[12];
    float em_salary;
}employee_t;

void employee_info(employee_t employee){
    printf("Employee ID: %d\n"
            "Employee name: %s\n"
            "Employee age: %d\n"
            "Employee phone: %s\n"
            "Employee salary: %f\n",employee.em_id,employee.em_name,employee.em_age,employee.em_phone,employee.em_salary);
}
int main(){
    employee_t employee;
    employee.em_id = 69;
    strcpy(employee.em_name,"Maka Baka");
    employee.em_age = 18;
    strcpy(employee.em_phone,"0800770885");
    employee.em_salary = 0.003;
    employee_info(employee);
    return 0;
}