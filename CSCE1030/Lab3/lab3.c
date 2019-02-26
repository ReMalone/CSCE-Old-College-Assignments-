
/*
 * Author: Robert Malone (darkgenezis@gmail.com)
 * Class: CSCE 1030
 * Date 2/13/2013
 * This program receives an input from the user containing a radius
 * and will use it to calculate the circumference and area between them
 *
 */



#include <stdio.h>
#define PI 3.14159

int main(){
  
  float Rad, Cir, Area, Rat;
  int Ratio;
    
  printf("Robert Malone, CS 1030, Darkgenezis@gmail.com 2/13/13\n\n");
  printf("Enter the radius of a circle: ");
   scanf("%f", &Rad);
   
   Cir = 2 * PI * Rad;
   Area = PI * Rad * Rad;
   
  printf("The circumference of the circle is: %.2f \n", Cir);
  printf("The area of the circle is: %.3f \n", Area);
  
   Rat = Area / Cir; 
   Ratio = Rat + 0.5;
  
  printf("The rounded ratio of area to circumference is: %d \n", Ratio);
  
  return 0;
  }