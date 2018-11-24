#include <stdio.h>
#include <stdlib.h>
void particao(int esq,int dir,int* i, int* j, int * a){
  int pivo,aux;
  *i=esq;
  *j=dir;
  pivo=a[(*i+*j)/2];
  do{
    while (pivo>a[*i]) (*i)++;
    while (pivo<a[*j]) (*j)--;
    if(*i<=*j){
      aux=a[*i];
      a[*i]=a[*j];
      a[*j]=aux;
      (*i)++;
      (*j)--;
    }
  }while(*i<*j);
}

void ordena(int e, int d,int *A){
  int i,j;
  particao(e,d,&i,&j,A);
  if(e<j) ordena(e,j,A);
  if(i<d) ordena(i,d,A);

}

void quicksort(int *v, int n){
  ordena(0,n-1,v);
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
  quicksort(a,b);
  for(k=0;k<b;k++){
    printf("\n Posicao %d do vetor depois de ordenar: %d",k,a[k]);
  }
  return 0;
}
