#include <stdio.h>
#include <stdlib.h>
void insertion(int *v,int n){
  int i,j,aux;
  for(i=1;i<n;i++){
    aux=v[i];
    j=i-1;
    while((j>=0) && (aux<v[j])){
      v[j+1]=v[j];
      j--;}
    v[j+1]=aux;
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
  insertion(a,b);
  for(k=0;k<b;k++){
    printf("\n Posicao %d do vetor depois de ordenar: %d",k,a[k]);
  }
  return 0;
}
