#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[50];
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt = 0;
    for(int i = 1;i<=n;i++)
    {
        if(a[i-1]>= a[k-1] && a[i-1]>=1)
            cnt++;
    }
    cout<<cnt<<endl;
}
