#include <stdio.h>
#include <stdlib.h>
void shellsort(int v[], int n){
  int i,j,h=1,aux;
  do h = h*3+1;while(h<n);
  do{
    h= h/3;
    for(i=h;i<n;i++){
      aux=v[i];j = i;
      while(v[j - h]>aux){
        v[j]=v[j-h];j -= h;
        if(j<h)break;
      }
      v[j]=aux;
    }
  } while(h != 1);
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
  shellsort(a,b);
  for(k=0;k<b;k++){
    printf("\n Posicao %d do vetor depois de ordenar: %d",k,a[k]);
  }
  return 0;
}
