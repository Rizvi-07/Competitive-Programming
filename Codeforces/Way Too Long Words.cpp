#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d ",&tc);
    for(int i = 0; i < tc; i++)
    {
        string str;
        getline(cin,str);
        if(str.size()>10)
            cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
        else
            cout<<str<<endl;
    }
}
