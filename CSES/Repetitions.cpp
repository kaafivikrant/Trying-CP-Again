#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

int	main()
{
    string s;
    cin >> s;
    ll count = 1;
    ll temp = 1;
    int n = s.size();

    // AAAACCCGGT 

    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        count = max(count, temp);
    }

    cout<<count<<endl;

    return 0;
}
