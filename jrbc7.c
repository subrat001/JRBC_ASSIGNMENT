/*1. Write a program to find the Nth term of the Fibonnaci series.
	#include<stdio.h>
	int main()
	{
	int a=-1,b=1,N,fibo,i=1;
		printf("Enter the value of Nth term: ");
		scanf("%d",&N);
	
	while(i<=N){
		fibo=a+b;
		a=b;
		b=fibo;
		 i++;
		}
		printf("%d term of a fibonacci series is: %d",N,fibo);
	return 0;
	}

/*2. Write a program to print first N terms of Fibonacci series
	#include<stdio.h>
	int main()
	{
	int a=-1,b=1,N,fibo,i=1;
		printf("Enter the value of Nth term: ");
		scanf("%d",&N);
	
	while(i<=N){
		fibo=a+b;
		a=b;
		b=fibo;
		printf("%d ",fibo);
		 i++;}
	return 0;
	}
	
/*3. Write a program to check whether a given number is there in the Fibonacci series or not.
	#include<stdio.h>
	int main()
	{
	int a=-1,b=1,N,fibo=0;
		printf("Enter the value for checking present or not: ");
		scanf("%d",&N);	
	while(fibo<=N){
		fibo=a+b;
		a=b;
		b=fibo;
		if(fibo==N){
		printf("%d is present in the Fibonacci series.",N);
		return 0;
	 				} 
	 		}
		printf("%d is not present in the fibonacci series.",N);
     return 0;
    	}

/*4. Write a program to calculate HCF of two numbers
	#include<stdio.h>
	int main()
	{
	int a,b,r;
		printf("Enter 2 Numbers: ");
		scanf("%d %d",&a,&b);
	r=a*b;
	while(a!=b){
		if(a>b)
			a-=b;
		else
			b-=a;
			  }
		printf("HCF is %d",a);
    return 0;
	}

/*5. Write a program to check whether two given numbers are co-prime numbers or not
		#include<stdio.h>
	int main()
	{
	int a,b,r,c,d;
		printf("Enter 2 Numbers: ");
		scanf("%d %d",&a,&b);
		c=a;d=b;
	r=a*b;
	while(a!=b){
		if(a>b)
			a-=b;
		else
			b-=a;
			  }
	 if(a==1)
		printf("both %d and %d are co-prime",c,d);
	else
		printf("Both %d and %d are not co-prime",c,d);
		}
/*6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
  int i, a = 2;
   for(a;a<=100;a++) {
   	for(i=2;i<=a/2;i++)
	   if(a%i==0)
	   break; 				 
	if(i==(a/2+1))
	printf("%d ",a);}
	return 0;
	}
	
/*7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
  int i,a,n;
  printf("Enter Starting Value and Ending Value: ");
  scanf("%d %d",&a,&n);
   for(a;a<=n;a++) {
   	for(i=2;i<=a/2;i++)
	   if(a%i==0)
	   break; 				 
	if(i==(a/2+1))
	printf("%d ",a);}
	return 0;
	}
 	
/*8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
  int i,a,b;
  printf("Enter a Number to find next prime Number: ");
  scanf("%d",&a);
  b=a;
   for(++a;a;a++) {
   	for(i=2;i<=a/2;i++)
	   if(a%i==0)
	   break; 				 
	if(i==(a/2+1)){
	printf("%d is the next prime number after %d ",a,b);
	break;}
					}
	return 0;
	}
	
/*9. Write a program to check whether a given number is an Armstrong number or not
	#include<stdio.h>
	int main()
	{
	int a,n,b,r,s=0,p;
		printf("Enter Numbers: ");
		scanf("%d",&a);		
		p=a;
		for(a;a!=0;a/=10){
		r=a%10;
		n=p;b=1;
		for(n;n!=0;n/=10)	
			 b=b*r;
		s=s+b;
						}		
	if(s==p)
		printf("it is an armstrong Number");
	else
		printf("it is not an armstrong Number");
	return 0;
	}
	
/*10. Write a program to print all Armstrong numbers under 1000
	#include<stdio.h>
 		#include<stdio.h>
	int main()
	{
	int a,n,b,r,s=0,p,i;		
	for(i=1;i<=1000;i++){
		a=i;p=i,s=0;
		for(a;a!=0;a/=10){
			r=a%10;n=p;b=1;
			for(n;n!=0;n/=10)
				 b=b*r;
			s=s+b;
						}		
	if(s==p)
		printf("%d ",p);
	}
	return 0;
	}
	
