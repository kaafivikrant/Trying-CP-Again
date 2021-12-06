#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

vector<string> grey(ll n){
    vector<string> ans;
    if(n==1){
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    vector<string> prev = grey(n-1);
    for(ll i=0;i<(ll)prev.size();i++){
        string s;
        s+='0';
        s+=prev[i];
        ans.push_back(s);
    }
    for(ll i=prev.size()-1;i>=0;i--){
        string s;
        s+='1';
        s+=prev[i];
        ans.push_back(s);
    }
    
    return ans;
}

int	main()
{
    fio;
    ll n;
    cin >> n;

    vector<string> final =  grey(n);

    for(ll i=0;i<(ll)final.size();i++){
        cout << final[i] << endl;
    }

    return 0;
}
