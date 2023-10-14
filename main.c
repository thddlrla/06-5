#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int div1, div2;

int combination(int n, int r)
{
	
	int div1, div2; //분자 , 분모 
	
	div1 = factorial(n); // n!
	div2 = factorial(n-r)*factorial(r);
	
	//분자, 분모 나누기연산
	return (div1/div2);
}

int factorial(int n, int r) 
{
	
	for(int i=1; i<=n; i++) 
    	printf("%d\n",i);
    
    int res = 1;
     res * i;
    return res;
}
int main(int argc, char *argv[]) 
{
	int n, r;
	int result ;
	//1. 입력값 받음 
	//메세지 출력
	
	printf("input n : ");
	//n입력 
	scanf("%d", &n);
	
     //메세지 출력
	 printf("input r : ");
	 //r입력
	
	 scanf("%d", &r);
	//2. 분모,분자 계산
	 result = combination(n,r);
	 
	
	
	//3. 최종 값 출력 
	
	//분모,분자 나누기연산 
	result = div1/div2;
	//결과 출력
	printf("result is %i\n", result);
	
	 
	
	return 0;
}
