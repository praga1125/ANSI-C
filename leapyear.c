#include <stdio.h>
#include <conio.h>
void main(){
  int year;
  printf("enter the year to check:\n");
  scanf("%d",&year);
  
  if(year%400 == 0 || year%100 == 0 || year%4 == 0){
    printf("it is a leap year\n");
  }
  else{
    printf("it is not a leap year\n");
  }
}
