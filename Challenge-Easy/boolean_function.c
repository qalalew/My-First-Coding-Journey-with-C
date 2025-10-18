#include <stdio.h>
#include <stdbool.h>

bool leap (int year){
    if(year%4==0 && year%100!=0)return true;
     else if(year%400==0) return true;
     else return false;

}

int main(){
    int year;
    printf("please enter the number: ");
    scanf("%d", &year );

    if (leap(year))
      printf("%d is a leap year", year);
     else
      printf("%d isnt a leap year", year);
    
    return 0;
      
}

//this code is to check if a number is a leap year.
//a leap year means a year divisible by 4 but not by 100
//but if it is divisible by 100 it must also be divisible by 400