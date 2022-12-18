Q=1
/*
#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}*/
Q=2
/*
#include<stdio.h>
int SumOdd(int num1, int num2)
{
   if(num1>num2)
    return 0;
return num1+SumOdd(num1+2,num2);
}
int main()
{
    int num1=1,num2;
    printf("Enter your Limit:");
    scanf("%d",&num2);
    printf("Sum of all odd numbers in the given range is: %d",SumOdd(num1,num2));
}*/
Q=3
/*
#include<stdio.h>
int SumOdd(int num1, int num2)
{
   if(num1>num2)
    return 0;
return num1+SumOdd(num1+2,num2);
}
int main()
{
    int num1=1,num2;
    printf("Enter your Limit:");
    scanf("%d",&num2);
    printf("Sum of all odd numbers in the given range is: %d",SumOdd(num1,num2));
}*/
Q=4
/*
// C program to calculate
// 1^2+2^2+3^2+...
#include <stdio.h>
  
// Function to calculate sum
int summation(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (i * i);
    return sum;
}
  
// Driver code
int main()
{
    int n = 2;
    printf("%d",summation(n));
    return 0;
}*/
Q=5
/*
#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, result;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}*/
Q=6
/*
#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}*/
Q=7
/*
#include<stdio.h>
 
void main()
{
    int num1, num2, hcf, remainder, numerator, denominator;
 
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    hcf = denominator;
    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
}*/
Q=8
/*
#include<stdio.h>
int main()
{
int first=0, second=1, i, n, sum=0;
printf("Enter the number of terms: ");
scanf("%d",&n);
//accepting the terms
printf("Fibonacci Series:");
for(i=0 ; i<n ; i++)
{
if(i <= 1)
{
sum=i;
}
//to print 0 and 1
else
{
sum=first + second;
first=second;
second=sum;
//to calculate the remaining terms.
//value of first and second changes as new term is printed.
}
printf(" %d",sum)
}
return 0;
}*/
Q=9
/*
#include <stdio.h>
 
//function to count digits
int countDigits(int num)
{
    static int count=0;
     
    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
     
    count=countDigits(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
     
    return 0;
}*/
Q=10
/*
#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}*/