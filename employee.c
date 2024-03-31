#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Define an EMPLOYEE structure with members Emp_name, Emp-id, Dept-name and Salary.
 Read and display data of N employees. Employees may belong to different departments.
  Write a function to find total salary of employees of a specified department.
  Use the concept of pointer to structure and allocate the memory dynamically to EMPLOYEE instances.
*/

struct Employee
{
    char name[20];
    char dep[5];
    int Eid;
    int salary;

};

int depSal(struct Employee *emp,int n)
{
    int tol=0;
    char x[6];
    printf("ENter the department name\n");
    scanf("%s",x);

    for(int i=0; i<n ;i++)
    {
        if(strcmp((emp+i)->dep,x) == 0 )
        {
            tol = tol + (emp+i)-> salary;
        }
    }
return (printf("Total salary of department %s = %d",x,tol));
}

int main()
{
    int n;
    printf("Enter the number of employes\n");
    scanf("%d",&n);
    struct Employee *emp;
    emp = (struct Employee *)malloc(n*sizeof(struct Employee));

    for (int i=0 ;i <  n ;i++)
    {
        printf("Enter [ %d ] \nEmployee ID , name , Department name , salary \n",i+1);
        scanf("%d",&(emp + i)-> Eid);
        scanf("%s",(emp + i)-> name);
        scanf("%s",(emp + i)-> dep);
        scanf("%d",&(emp + i)-> salary);
    }
    printf("\n==================\n==================\n ");
     for (int i=0 ;i <  n ;i++)
    {
        printf("Employee[ %d ] \nEmployee ID , name , Department name , salary \n",i+1);
        printf("%d\t\t",(emp + i)-> Eid);
        printf("%s\t\t",(emp + i)-> name);
        printf("%s\t\t",(emp + i)-> dep);
        printf("%d\t\t\n",(emp + i)-> salary);
    }
    depSal(emp,n);


    return 0;
}
