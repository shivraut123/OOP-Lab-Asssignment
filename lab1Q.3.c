// 3. WAP to enter id, name, age, and basic
// salary of n number of employees. Calculate
// thegross salary of all the employees and
// display it along with all other details in a
// tabular
// form, using the pointer to structure.
// [ Gross salary= Basic salary + DA +
// HRA,DA = 80% of Basic salary
// HRA=10% of Basic salary ].

#include <stdio.h>
#include <stdlib.h>
struct grosspay_389
{char name[30];
char gender[10];
char
designation[20];char
department[20];int
bpay_389;
float gross;
};
float gross_pay(float basic)
{
return (basic + (0.8*basic) + (0.1*basic));
}
int main()
{int n_389;
struct grosspay_389 *ptr;
printf("Enter no. of Employees:");
scanf("%d", &n_389);
ptr = (struct grosspay_389
*)malloc(n_389*sizeof(struct grosspay_389));
for(int i = 0; i< n_389; i++)
{
printf("\nEnter name of Employee %d: ", (i+1));
scanf("%s",ptr[i].name);
printf("\nEnter Gender of employee %d: ", (i+1));
scanf("%s", ptr[i].gender);
printf("\nEnter Designation of Employee %d: ",
(i+1));
scanf("%s", ptr[i].designation);
printf("\nEnter Department of Employee %d: ",
(i+1));
scanf("%s", ptr[i].department);
printf("\nEnter basic pay of Employee %d: ", (i+1));
scanf("%d", &ptr[i].bpay_389);
ptr[i].gross = gross_pay(ptr[i].bpay_389);
printf("\n");
}
printf("\n------ Printing Employee Details------\n");
for(int i = 0; i< n_389; i++)
{
printf("\nName of Employee %d: ", (i+1));
printf("%s",ptr[i].name);
printf("\nGender of employee %d: ", (i+1));
printf("%s", ptr[i].gender);
printf("\nDesignation of Employee %d: ", (i+1));
printf("%s", ptr[i].designation);
printf("\nDepartment of Employee %d: ",
(i+1));printf("%s", ptr[i].department);
printf("\nBasic pay of Employee %d: ",
(i+1));printf("%d", ptr[i].bpay_389);
printf("\nGross Pay: %.2f", ptr[i].gross);
printf("\n");
}
return 0;
}
