#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int n,m,a;
    long long int p,q;
    scanf("%lld %lld %lld",&n,&m,&a);
    printf("%lld\n", (long long int)(ceil(n/(a*1.0))* ceil(m/(a*1.0))));
}
