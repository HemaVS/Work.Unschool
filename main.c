/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
struct employees{
  char name[20];
  int employeeid;
  int experience;
  int salary;
  
};
int main()
{
    
    struct employees e[5];
    for(int i=0;i<5;i++){
        printf("Enter the name of employee");
        scanf("%s", &e[i].name);
        printf("Enter the employee id ");
        scanf("%d",&e[i].employeeid);
        printf("Enter the years of experience");
        scanf("%d",&e[i].experience);
        printf("Enter salaray recieved");
        scanf("%d",&e[i].salary);
    }
for(int i=0;i<5;i++)
{
    printf("\n Now printing the details of employee %d",i+1);
    printf("\n Name of employee is %s", e[i].name);
    printf("\n Employee id is %d",e[i].employeeid);
    printf("\n Years of experience is %d years",e[i].experience);
    printf("\n Salary is %d /- ",e[i].salary);
}
return 0;
}
