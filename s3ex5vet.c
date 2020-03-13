#include<stdio.h>
#include<stdlib.h>

int main(){
    int v [5];
    int i, soma, media;
    int *pS, *pM, *pV, *pD;

    for(i=0;i<5;i++){
        printf("Digite o valor %d\n", i+1);
        scanf("%d", &v[i]);
    }
  
    pV=v;

    for(i=0;i<5;i++){
    
        soma += v[i];
    	media = soma /5;
    }
    
    pM = &media;
    pS = &soma;
    printf("\n a media eh:%d \n",*pM);
    
    return 0;
}
