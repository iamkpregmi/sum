//Sum more thern two numbers using single variable
#include<stdio.h>
#include<conio.h>
 int sum = 0;
 int calculate(){
   printf("Enter a number: ");
   scanf("%d",&sum);
   return(sum);
 }
int main()
{
  clrscr();
   sum = calculate() + calculate() + calculate();
   printf("Sum is: %d",sum);
  getch();
return(0);
}