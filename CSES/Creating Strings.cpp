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

    vector<string> v;
    
    sort(s.begin(), s.end());

    do
    {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<endl;
    }

    

    return 0;
}
