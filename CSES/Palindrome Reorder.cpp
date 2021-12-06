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
    string s;
    cin >> s;

    unordered_map<char, int> m;
    for(ll i=0; i<s.size(); i++){
        m[s[i]]++;
    }

    ll count_odd = 0;
    for(auto c : m){
        if(c.second % 2 == 1){
            count_odd++;
        }
    }

    if(count_odd > 1)
        cout << "NO SOLUTION" << endl;
    
    string ans = "";
    string first = "";
    string second = "";
    string mid = "";
    // aabbaacdd // a6b2c1d2 // aaabd aaabd // aaabdcdbaaa
    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second % 2 == 0){
            ll temp = it->second / 2;
            for(ll i=0; i<temp; i++){
                first += it->first;
                second += it->first;
            }
        }
    }

    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second % 2 == 1){
            if((it->second - (it->second%2))/2){
                ll temp = (it->second - (it->second%2))/2;
                for(ll i=0; i<temp; i++){
                    first += it->first;
                    second += it->first;
                }
            }
            mid += it->first;
        }
    }

    reverse(second.begin(), second.end());

    ans = first + mid + second;

    cout<<ans<<endl;

    return 0;
}
