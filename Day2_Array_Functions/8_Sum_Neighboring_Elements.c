#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    b[0] = a[0];
    b[n-1] = a[n-1];

    for(int i = 1; i < n-1; i++)
        b[i] = a[i-1] + a[i+1];

    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
