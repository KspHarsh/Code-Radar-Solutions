#include<stdio.h>
int main(){ 
int n;
scanf("%d",&n);
int arr[n],i,j;
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
if(arr[i]!=-1){
    int c =1;
    for(j=i+1;j<n;j++)
    if(arr[i]==arr[j])
    c++,
    arr[j]=-1;
    printf("%d %d\n",arr[i],c);
    }
return 0;

}

// #include <stdio.h>
// int main() {
//     int N; scanf("%d", &N);
//     int arr[N], i, j;
//     for (i = 0; i < N; i++) scanf("%d", &arr[i]);
//     for (i = 0; i < N; i++) if (arr[i] != -1) {
//         int c = 1;
//         for (j = i + 1; j < N; j++) if (arr[i] == arr[j]) c++, arr[j] = -1;
//         printf("%d %d\n", arr[i], c);
//     }
//     return 0;
// }



