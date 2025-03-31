void selectionSort(int*a,int n)
{for(int i=0,j,m;i<n-1;i++)
{for(m=i,j=i+1;j<n;j++)
if(a[j]<a[m])m=j;
int t=a[m];
a[m]=a[i];
a[i]=t;}
}

int kthSmallest(int*a,int n,int k)
{
    s(a,n);
return a[k-1];
}