#include <stdio.h>

unsigned int sum_of_squares(unsigned int number);
unsigned int square_of_sum(unsigned int number);
unsigned int difference_of_squares(unsigned int number);

int main(){
 unsigned int n;
 printf("Enter num: ");
 scanf("%u", &n);
 unsigned int result= difference_of_squares(n);
 printf("Result = %u\n",result);
return 0;
}

unsigned int sum_of_squares(unsigned int number){
    unsigned int s=0;
    while (number>0){
        s=s + number*number;
        number--;
    }
    return s;
}
unsigned int square_of_sum(unsigned int number){
    unsigned int s=0;
    while (number>0){
        s=s+number;
        number--;
    }
    return s*s;
}
unsigned int difference_of_squares(unsigned int number){
    unsigned int diff= square_of_sum(number)-sum_of_squares(number);
    return diff;
    
}

/*this code calculates and prints the difference between the square of the sum 
and the sum of the squares of numbers from 1 to a user-entered number.*/