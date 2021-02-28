#include <stdio.h>

    typedef struct
    {
        char name;
        int age;
        int PhoneNumber;
        float Salary;
    }Employee;
    int main()
    {
    int i;
    int n=20;
    Employee emp[n];
    printf("Enter %d employees details ",n);
    for(i=0;i<n;i++)
    {
        printf("%d",i+1);
        printf("\nEnter employee name: ");
        scanf("%s",&emp[i].name);
        printf("\nEnter age: ");
        scanf("%d",&emp[i].age);
        printf("\nEnter Phone Number: ");
        scanf("%i",&emp[i].PhoneNumber);
        printf("\nEnter salary: ");
        scanf("%f",&emp[i].Salary);
    }
    printf("\nSerial Number\tName\tAge\tPhone Number\tSalary");
    for(i=0;i<20;i++)
    {
        printf("\n%d",i+1);
        printf("\t%s",emp[i].name);
        printf("\t%d",emp[i].age);
        printf("\t%i",emp[i].PhoneNumber);
        printf("\t%f",emp[i].Salary);
    }
    return 0;
}
