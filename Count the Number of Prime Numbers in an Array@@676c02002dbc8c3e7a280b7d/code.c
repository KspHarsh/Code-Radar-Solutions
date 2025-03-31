#include<stdio.h>
#include<math.h>
int p(int n){
if(n<2)return 0;
for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
return 1;
}
int main(){
int N,c=0;
scanf("%d",&N);
while(N--){
int x;
scanf("%d",&x);
c+=p(x);
}
printf("%d",c);
return 0;
}