#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int div1, div2;

int combination(int n, int r)
{
	
	int div1, div2; //���� , �и� 
	
	div1 = factorial(n); // n!
	div2 = factorial(n-r)*factorial(r);
	
	//����, �и� �����⿬��
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
	//1. �Է°� ���� 
	//�޼��� ���
	
	printf("input n : ");
	//n�Է� 
	scanf("%d", &n);
	
     //�޼��� ���
	 printf("input r : ");
	 //r�Է�
	
	 scanf("%d", &r);
	//2. �и�,���� ���
	 result = combination(n,r);
	 
	
	
	//3. ���� �� ��� 
	
	//�и�,���� �����⿬�� 
	result = div1/div2;
	//��� ���
	printf("result is %i\n", result);
	
	 
	
	return 0;
}
