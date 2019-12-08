#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d ",&n);
    int x = 0;
    for(int i = 0;i<n;i++)
    {
        string s1;
        getline(cin,s1);
        if(s1[1]=='+')
            x++;
        if(s1[1]=='-')
            x--;
    }
    cout<<x<<endl;
}
