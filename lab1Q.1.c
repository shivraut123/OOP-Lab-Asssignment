// 1. WAP to input name, roll number, and
// marksin 5 subjects for a student, and display
// it.
#include<stdio.h>
struct mani{
int rollNo;
char
name[32];int
marks[5];
}
main(){
struct mani oop;
printf("enter the roll number: ");
scanf("%d",&oop.rollNo);
printf("enter the name: ");
scanf("%s",(oop.name));
for(int i=0;i<5;i++){
printf("enter the marks of %d subject",i+1);
scanf("%d",&oop.marks[i]);
}
printf("name of student %s\n",oop.name);
printf("roll.No of student %d\n",oop.rollNo);
printf("marks\n");
for(int i=0;i<5;i++)
{ printf("%d\n",oop.marks[i]);
}

}