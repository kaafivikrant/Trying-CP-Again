#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

int	main()
{
    fio;
    ll n;
    cin>>n;

    while(n--){
        int a,b; cin>>a>>b; 
        if(a>=b){
            int k=abs(a-b);
            a-=2*k; b-=k;
            if(a==b && a>=0  && a%3==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            int k=abs(a-b);
            b-=2*k; a-=k;
            if(a==b && a>=0 && a%3==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
	}

    return 0;
}
