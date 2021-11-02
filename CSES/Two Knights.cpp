#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

int	main()
{
    ll t;
    cin>>t;

    for(ll n=1;n<=t;n++){
        cout<<(n - 1)*(n + 4)*((n*n) - (3*n) + 4)/2<<endl;
    }

    return 0;
}
