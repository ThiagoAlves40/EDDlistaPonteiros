#include<stdio.h>

void maior(int a, int b){
	
	int *p;
	int *d;
	
	p = &a;
	d = &b;
	
	if(a>b){
		printf("O maior e: %d", *p);
	}
	else{
		printf("O maior e: %d", *d);
	}
}

int main(){
	
	int a, b;
	int *pA;
	int *pB;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	pA = &a;
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	pB = &b;
	
	maior(*pA,*pB);
}
