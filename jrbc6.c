/*1. Write a program to calculate sum of first N natural numbers
	#include<stdio.h>
	int main()
	{
	int a=1,N,sum=0;
		printf("Enter the value of N:");
		scanf("%d",&N);
	while(a<=N){
		sum+=a;
	a++;
	}
		printf("Sum of first %d Natural No is: %d",N,sum);
	return 0;
	}*/

/*2. Write a program to calculate sum of first N even natural numbers
	#include<stdio.h>
	int main()
	{
	int a=1,N,sum=0;
		printf("Enter the value of N:");
		scanf("%d",&N);
	for(a=1;a<=N;a++)	
		sum+=2*a;
	printf("Sum of first %d Even natural No is: %d",N,sum);
	return 0;
	}*/
	
/*3. Write a program to calculate sum of first N odd natural numbers
	#include<stdio.h>
	int main()
	{
	int a=1,N,sum=0;
		printf("Enter the value of N:");
		scanf("%d",&N);
	for(a=1;a<=N;a++)	
		sum+=2*a-1;
	printf("Sum of first %d Odd natural No is: %d",N,sum);
     return 0;
    	}*/

/*4. Write a program to calculate sum of squares of first N natural numbers
	#include<stdio.h>
	int main()
	{
	int a=1,N,sum=0;
		printf("Enter the value of N:");
		scanf("%d",&N);
	for(a;a<=N;a++)
		sum+=a*a;
	printf("Sum of Square of  first %d natural No is: %d",N,sum);
    return 0;
	}*/

/*5. Write a program to calculate sum of cubes of first N natural numbers
	#include<stdio.h>
	int main()
	{
	 int a=1,N,sum=0;
		printf("Enter the value of N:");
		scanf("%d",&N);
	for(a;a<=N;a++)
		sum+=a*a*a;
	printf("Sum of Cube of  first %d natural No is: %d",N,sum);
	return 0;
	}*/
/*6. Write a program to calculate factorial of a number
	#include<stdio.h>
	int main()
	{
	int N,a,fact=1;
		printf("Enter a Number:");
		scanf("%d",&N);
		a=N;
	for(N;N>=1;N--)
		fact*=N;
	printf("Factorial of %d is %d",a,fact);
	return 0;
	}*/
	
/*7. Write a program to count digits in a given number
	#include<stdio.h>
 	int main(){
    int N,b,i=0;
    	printf("Enter a Number:");
		scanf("%d",&N);
		b=N;
	while(N!=0){
		N/=10;
		i++;
		}
		printf("Total number of digit in %d is %d",b,i);
	return 0; 
 	}*/
 	
/*8. Write a program to check whether a given number is a Prime number or not
	#include<stdio.h>
	int main()
	{
	int a=2,N;
		printf("Enter a Number:");
		scanf("%d",&N);
	while(a<N/2){
		if(N%a==0){
		 printf("%d is a not a prime number.",N);
	 	 return 0;}
	 a++;
		}
		 printf("%d is a prime number.",N);
	return 0;
	}*/
	
/*9. Write a program to calculate LCM of two numbers
	#include<stdio.h>
	int main()
	{
	int a,b,r;
		printf("Enter 2 Numbers: ");
		scanf("%d %d",&a,&b);
		r=a*b;
	while(a!=b){
		if(a>b)
		a=a-b;
		else
		 b=b-a;
		}
	printf("LCM=%d",r/a);
	return 0;
	}*/
	
/*10. Write a program to reverse a given number
	#include<stdio.h>
 	int main()
	{
	int a,b,rev=0;;
		printf("Enter a Number:");
		scanf("%d",&a);
		b=a;
	while(a!=0){
		rev=rev*10+(a%10);
		a/=10;
		}
	printf("Reverse of %d is %d",b,rev);
	return 0;
	}*/

