#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j, n, s, a[10][10];

int main(){
    printf("Enter number of vetices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: ");
    for (i = 0; i<n ; i++){
        for (j =0 ; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (i =0 ; i<n; i++){
        for (j =0; j<n; j++){
            if (i==j){
                a[i][j] = 0;
            }
            else if (a[i][j] == -1){
                a[i][j] = 3000;
            }
        }
    }
    printf("Enter the source vertex: ");
    scanf("%d", &s);
    

}
