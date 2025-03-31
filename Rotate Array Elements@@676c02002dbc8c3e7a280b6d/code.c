#include <stdio.h>
int main() {
int n, k;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++) scanf("%d %d", &arr[i],&k);
// scanf("%d", &k);
k %= n;
for (int i = 0; i < k; i++) {
int temp = arr[n-1];
for (int j = n-1; j > 0; j--) arr[j] = arr[j-1];
arr[0] = temp;}
for (int i = 0; i < n; i++) printf("%d\n", arr[i]);}
return 0;
