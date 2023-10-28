#include <stdio.h>

int main(void) {
    int n, m, i, j, k, tmp, arr[100000], arr2[100000];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            if(arr2[i] == arr[j]) {
                printf("1\n");
                break;
            }
            if(j == n-1) {
                printf("0\n");
            }
        }
    }
    return 0;
}