#include<stdio.h>
int fatorial(int a){
	
	if(a>1){
		return fatorial(a-1)*a;
	}
	else{
		return 1;
	}
}

int main(){
	int *pA;
	int a = 0;
	pA =  &a;
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("\nO fatorial de %d = %d\n",*pA,fatorial(*pA));
	return 0;
}
