#include <stdio.h>
#include <conio.h>
void main(){
    char text[100];
    int i;
    int countL,countU,countS;
    printf("Enter any string: ");
    gets(text);
    countL=countU=countS=0;
    for(i=0;text[i]!='\0';i++) {
        if((text[i]>='A' && text[i]<='Z') || (text[i]>='a' && text[i]<='z')){
            if((text[i]>='A' && text[i]<='Z')){
                countU++;
            }
            else{
                countL++;
            }
        }
        else {
            countS++;
        }
    }
    printf("\nUpper case characters: %d \n",countU);
    printf("\nLower case characters: %d \n",countL);
    printf("\nSpecial characters:  %d \n",countS);
}