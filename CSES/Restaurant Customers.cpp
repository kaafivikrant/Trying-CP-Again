#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<numeric>
#include<algorithm>
#include<set>
#include<utility>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

int main(){
    fio;
    int n;
    cin>>n;

    vector<std::pair<int,bool> > v;
    int x; int y;

    while(n--){
    	cin>>x;cin>>y;
    	v.push_back(make_pair(x,true));
    	v.push_back(make_pair(y,false));
    }

   	sort(v.begin(),v.end());
    
   	int ans =0; int maxx =0;
    
   	for(int i=0;i<v.size();i++){
   		if(v[i].second==true){
   			ans++;
   			maxx = max(ans,maxx);
   		}else{
   			ans--;
   		}
   	}
    
   	cout<<maxx<<endl;

return 0;
}