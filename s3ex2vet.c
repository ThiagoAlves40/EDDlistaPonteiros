int main(){
 
    int v [10];
    int i, maior = 0; 
    int *pV, *pM;
    
    for(i=0;i<10;i++){
        printf("Digite o valor %d\n", i+1);
        scanf("%d", &v[i]);
    }
    
    pV = v;
    pM = &maior;
    
    for(i=0;i<10;i++){
            if(pV>pM){
                pM=pV;
            }
        }
     printf("o maior valor eh %d", *pM);
     
    return 0;
}
