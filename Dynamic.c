#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,i,*ptr;
  printf("Enter the number of elements: ");
  scanf("%d" , &n);
  ptr = (int *) malloc (n * sizeof(int));
  for (i = 0 ; i<n; i++){
    scanf("%d", ptr + i);
  }
  for (i = 0 ; i<n; i++)
  printf("%d", *(ptr + i));
}