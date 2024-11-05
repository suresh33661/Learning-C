#include <stdio.h>
int main(){
    int arr[10], *ptr, i, n;
    ptr = arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0 ; i<n; i++)
    scanf("%d", ptr+i );
    for (i = 0; i<n; i++)
    printf("%d ", *(ptr+i));
}