#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8]={100,50,20,10,5,2,1};

    int n,ans;

    cin >> n;
    cout <<  n << endl;

    for(int i=0;i<7;i++)
    {
        ans=n/arr[i];
        printf("%d nota(s) de R$ %d,00\n",ans,arr[i]);
        n=n%arr[i];
    }
    //cout << endl;
}
