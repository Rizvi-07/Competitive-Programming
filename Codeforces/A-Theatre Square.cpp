#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n,m,a;
    long long int p,q;
    scanf("%lld %lld %lld",&n,&m,&a);
    p = ceil(n/(a*1.0))* ceil(m/(a*1.0));
    // n ar a - 2 tai int value , vag korar por int value ei pabe. ceil korar por kono labh hobe na.
    //Sei 1.0 diye vag kore a er value double e convert kora hoyeche
    printf("%lld\n",p);
}


