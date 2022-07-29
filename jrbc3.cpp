/*1. Write a program to check whether a given number is positive or non-positive. 
	#include<stdio.h>
	int main()
	{
	int a;
		printf("Enter a Number: ");
		scanf("%d",&a);
	if(a>0)
		printf("%d is Positive.",a);
	else 
	printf("%d is non Positive.",a);
	return 0;
	}*/

/*2. Write a program to check whether a given number is divisible by 5 or not 
	#include<stdio.h>
	int main()
	{
	int a;
		printf("Enter a Number: ");
		scanf("%d",&a);
	if(a%5)
		printf("%d is not divisible by 5",a);
	else
		printf("%d is divisible by 5",a);
	return 0;
	}*/
/*3. Write a program to check whether a given number is an even number or an odd number.
	#include<stdio.h>
	int main()
	{
	int a;
		printf("Enter a Numbers: ");
		scanf("%d",&a);
	if(a%2)
		printf("%d is odd Number.",a);
	else 
		printf("%d is even Number.",a);
     return 0;
	}*/

/*4. Write a program to check whether a given number is an even number or an odd
     number without using % operator.
	#include<stdio.h>
	int main()
	{
	int a;
		printf("Enter a Numbers: ");
		scanf("%d",&a);
	if(a&1)
		printf("%d is odd Number.",a);
	else 
		printf("%d is even Number.",a);
    return 0;
	}*/

/*5. Write a program to check whether a given number is a three-digit number or not.
	#include<stdio.h>
	int main()
	{
	int a;
		printf("Enter a  Number: ");
		scanf("%d",&a);
	if(a>=100 && a<1000)
		printf("%d is a 3 digit Number.",a);
	else
		printf("%d is not a 3 digit Number.",a);
	return 0;
	}*/
/*6. Write a program to print greater between two numbers. Print one number of both are the same. 
	#include<stdio.h>
	int main()
	{
	int a,b;
		printf("Enter 2 Numbers: ");
		scanf("%d %d",&a,&b);
	(a>=b)? printf("%d is Greater",a):printf("%d Greater",b);
	return 0;
	}*/
/*7. Write a program to check whether roots of a given quadratic equation are real & distinct, real &   
     equal or imaginary roots.
	#include<stdio.h>
 	int main(){
    int a,b,c,d;
   	  	printf("Enter coficient of x^2,x & constant for Quadratic Equation: ");
     	scanf("%d %d %d",&a,&b,&c);
     	d=b*b-(4*a*c);
  if(d>0)
		printf("The quadratic equation is real & distinct");
  if(d==0)
		printf("The quadratic equation is real & equal");
  if(d<0)	
		printf("The quadratic equation is imaginary");
	return 0; 
 	}*/
/*8. Write a program to check whether a given year is a leap year or not.
	#include<stdio.h>
	int main()
	{
	int a;
		printf("Enter a Year: ");
		scanf("%d", &a);
   	if((a%4==0 && a%100!=0) || a%400 ==0)
       printf("%d is a leap Year", a);
    else
 		printf("%d is not a leap Year", a);
	return 0;
	}*/
/*9. Write a program to find the greatest among three given numbers. Print number once
     if the greatest number appears two or three times.
	#include<stdio.h>
	int main()
	{
  int a,b,c,max=0;
		printf("Enter a 3 Numbers: ");
		scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?(a>c?a:c):(b>c?b:c);
		printf("%d is the greatest Number",max);
	return 0;
	}*/
/*10. Write a program which takes the cost price and selling price of a product from the
      user. Now calculate and print profit or loss percentage. 
	#include<stdio.h>
 	int main()
	{
	float cp,sp,p,d;
   		printf("Enter Cost Price and Selling Price: ");
   		scanf("%f %f",&cp,&sp);	
	if(sp>cp)
   		 printf("Profit is:  %.2f persenrtage ",((sp-cp)/cp)*100);
	if(sp<cp)
    	 printf("Loss   is:  %.2f percentage",((cp-sp)/cp)*100);
	return 0;
	}*/
/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
      out of 100 and passing marks is 33. Now display whether the candidate passed the
      examination or failed.
	#include<stdio.h>
	int main()
	{
   	 int a,b,c,d,e;
    	printf("Enter mark of 5 subject: ");
   		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);	
	if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33  )
    	printf("He passed in the Exam");
	else
    	printf("HeFailed in the Exam");
	return 0;
	}*/
/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.
	#include<stdio.h>
	int main()
	{
     char ch;
    	printf("Enter an Alphabet: ");
    	scanf("%c",&ch);
 	if(ch>='A' && ch<='Z')
		printf("%c is in Upper case", ch);
	else
		printf("%c is in Lower case", ch);	
	return 0;
	}*/
/*13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
	#include<stdio.h>
	int main()
	{
	 int a;
		printf("Enter a Number: ");
		scanf("%d",&a);
	if(a%6)
		printf(" %d is not divisible by both 2 & 3",a);
	else 
		printf(" %d is  divisible by both 2 & 3",a);

	return 0;
}*/
/*14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
	#include<stdio.h>
	int main()
	{
	 int a;
		printf("Enter a Number: ");
		scanf("%d",&a);
	if(a%7==0)
		printf(" %d is divisible by 7",a);
	else if(a%3==0)
		printf(" %d is  divisible by 3",a);
	return 0;
	}*/

/*15. Write a program to check whether a given number is positive, negative or zero.
	#include<stdio.h>
	int main()
	{
	int a;
		printf("Enter a Number: ");
		scanf("%d",&a);
	if(a>0)
		printf(" %d Positive",a);
	else if(a==0)
		printf("%d is  Zero",a);
	else
		printf("%d is  Negative",a);
	return 0;
	}*/
/*16. Write a program to check whether a given character is an alphabet (uppercase), an
       alphabet (lower case), a digit or a special character.
	#include<stdio.h>
	int main()
	{
     char ch;
    	printf("Enter an Alphabet: ");
    	scanf("%c",&ch);
 	if(ch>='A' && ch<='Z')
		printf("%c is in Upper case", ch);
	else if(ch>='a' && ch<='z')
		printf("%c is in Lower case", ch);	
	else if(ch>='0' && ch<='9')
		printf("%c is a digit", ch);
	else
		printf("%c is a special character", ch);	
	return 0;
	}*/
/*17. Write a program which takes the length of the sides of a triangle as an input. Display
      whether the triangle is valid or not.
	#include<stdio.h>
	int main()
	{
     float a,b,c;
		printf("Enter a 3 Sides of a Triangle: ");
		scanf("%f %f %f",&a,&b,&c);
	if (a+b>=c)
		printf("It is a valid Triangle");
	else
        printf("It is not a valid Triangle");  
	return 0;
	}*/
/*18. Write a program which takes the month number as an input and display number of
      days in that month.
	#include<stdio.h>
	int main()
	{
	 int a;
		printf("Enter a Month Number: ");
		scanf("%d",&a);
	if(a==1|| a==3|| a==5|| a==7|| a==10|| a==12)
		printf("The days of %d Month is 31",a);
	else if(a==4|| a==6|| a==8|| a==9|| a==11)
		printf("The days of %d Month is 30",a);
	else 
		printf("The days of %d Month is 28",a);
	return 0;
	}*/

















