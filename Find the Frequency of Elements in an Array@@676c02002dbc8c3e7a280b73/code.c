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
    c++;
    arr[j]=-1;
    }
return 0;

}



