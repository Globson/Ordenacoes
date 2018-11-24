#include <stdio.h>
#include <stdlib.h>
void selection(int *v,int n){
  int i,j,min,aux;
  for(i=0;i<(n-1);i++){
    min =i;
    for(j=(i+1);j<n;j++){
      if(v[j]<v[min]){
        min=j;}
      aux=v[min];
      v[min]=v[i];
      v[i]=aux;
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
  selection(a,b);
  for(k=0;k<b;k++){
    printf("\n Posicao %d do vetor depois de ordenar: %d",k,a[k]);
  }
  return 0;
}
