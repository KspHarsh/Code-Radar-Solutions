#include <stdio.h>
#include <limits.h>

int main() {
    int N, max=0, res=INT_MAX;
    scanf("%d", &N);
    int arr[N], freq[100001]={0}; // Assuming numbers ≤ 100000
    
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        if(freq[arr[i]] > max || (freq[arr[i]] == max && arr[i] < res)) {
            max = freq[arr[i]];
            res = arr[i];
        }
    }
    
    printf("%d", res);
    return 0;
}