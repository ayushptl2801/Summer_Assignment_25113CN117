/*Write a program to Check strong number*/

#include <stdio.h>
int factorial(int n) {
   int fact = 1;
   for (int i = 1; i <= n; i++) {
       fact *= i;
   }
   return fact;
}
int main() {
   int num, originalNum, lastDigit, sum = 0;
   printf("Enter a number to check if it is a Strong Number: ");
   scanf("%d", &num);
   originalNum = num;

   while (num > 0) {
       lastDigit = num % 10; 
       sum += factorial(lastDigit); 
       num /= 10; 
   }
   
   if (sum == originalNum) {
       printf("%d is a STRONG NUMBER\n", originalNum);
   } else {
       printf("%d is NOT a STRONG NUMBER\n", originalNum);
   }
   return 0;
}
