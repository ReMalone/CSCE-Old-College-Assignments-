
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char English[25+1];
char Spanish[25+1];
char ch;
int i;
FILE *fp;
 
 
 fp = fopen("words.dat", "r");


 printf("the contents of words.dat file are: \n"); 

 printf("%c", ch);

  
  printf("Enter an English string: ");
  gets(English); 
 

 while(( ph = getchar(fp)) != '\n'){
  English[i++] = ph;
  }
 
  fgets(English,25, fp);  
  printf("%s" English[0]);
 fclose(fp);  
} 
 
return 0;
} 