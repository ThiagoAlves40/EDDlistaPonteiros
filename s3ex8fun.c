#include<stdio.h>
void primo(num)
{	int i, j, d;
	int *pD;
	pD = &d;
	for(i=0;i<1;i++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		d=0;
			for(j=1;j<=num;j++) {
				if(num%j==0){
					d++;
				}
			}
			if(*pD==2){
				printf("\nPrimo");
			}
			else{	
				printf("\nNao primo");
			}
	}
}

int main(){
	int num;
	int *pNum;
	
	pNum = &num;
	primo(*pNum);
}
