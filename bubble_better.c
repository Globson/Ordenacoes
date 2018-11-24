#include <stdio.h>
#include <stdlib.h>
void bubble_better(int *v,int n){
  int i,j,troca,aux;
  for(i=0;i<(n-1);i++){
    troca=0;
    for(j=1;j<(n-i);j++){
      if(v[j]<v[j-1]){
        aux=v[j];
        v[j]=v[j-1];
        v[j-1]=aux;
        troca=1;
      }if(troca==0) break;
    }
  }
}
int main(int argc, char const *argv[]) {
  int a[10],b,k;
  printf("\nEntre com o tamanho desejado do vetor:");
  scanf("%d",&b);
  printf("\nEntre com o vetor de %d posições:",b);
  for(k=0;k<b;k++){
    scanf("%d",&a[k]);
  }
  for(k=0;k<b;k++){
    printf("\n Posicao %d do vetor: %d",k,a[k]);
  }
  bubble_better(a,b);
  for(k=0;k<b;k++){
    printf("\n Posicao %d do vetor depois de ordenar: %d",k,a[k]);
  }
  return 0;
}
