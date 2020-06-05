#include <stdio.h>
#include <conio.h>
void main(){
  int num,sum,data,i;
  printf("enter the elements to sum\n");
  scanf("%d",&num);
  i=1;
  sum=0;
  while(i<=num){
    printf("enter data number\t");
    scanf("%d",&data);
    if(data%2==0){
      sum+=data;
        }
        i++;
     } 
    printf("the sum is %d\n",sum);
}
