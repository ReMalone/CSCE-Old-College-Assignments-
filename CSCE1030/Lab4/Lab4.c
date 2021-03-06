/*
 *Robert Malone (darkgenezis@gmail.com)
 *CSCE 1030
 *2/20/2013
 *Ask the user for their homework and test grades and solve for the average.
 */ 

#include <stdio.h>
 
int main(){
 char name[40];  // Set your variables
 float HW, Test;
 int final;
 
 printf("Robert Malone Lab Program 4 CSCE 1030\n");
 
 printf("Please enter the student's name: "); //Ask the user to input the following information
 scanf("%s",name);
 
 printf("Please enter homework grade: ");
 scanf("%f", &HW);
 
 printf("Please enter Test grade: ");
 scanf("%f", &Test);
 
 final = (HW * .6) + (Test * .4); // Solve for the average as Homework is worth 60% and test are worth %40
 
    if (HW < 0 || HW > 100 || Test < 0 || Test > 100) // Use an if statement to see if the user enters an invalid grade
     {
      printf("Invalid grade entries for %s. Please enter again!\n", name);
      }
     else{
    if (final >= 90 && final <= 100) //Receive the final grade from the user and determine their letter grade from the number grade
     {
      printf("%s final average is %d, final grade is A.\n", name, final);
     }
     else{
    if (final >= 80 && final <= 89)
     {
      printf("%s final average is %d, final grade is B.\n", name, final);
     }
     else{
    if (final >= 70 && final <= 79)
     {
      printf("%s final average is %d, final grade is C.\n", name, final);
     }
     else{
    if (final >= 60 && final <= 69)
     {
      printf("%s final average is %d, final grade is D.\n", name, final);
     }
     else{
    if (final >= 0 && final <= 59)
     {
      printf("%s final average is %d, final grade is F.\n", name, final);
     }
    }          
   }
  }
 }
}
return 0;
}
 
    