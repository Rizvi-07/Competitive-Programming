#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d ",&tc);
    for(int i = 0;i<tc;i++)
    {
        string str;
        getline(cin,str);
        string s1 = "";
        int sum = 0;
        for(int j = 0;j<str.size();j++)
        {

            if(isdigit(str[j])){
                    s1 += str[j];
                if(!(isdigit(str[j+1]))|| str[j+1]=='\o'){
                    sum += atoi(s1.c_str());
                    s1 = "";
                }
            }
        }
        cout<<sum<<endl;
    }
}
