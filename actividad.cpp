#include <bits/stdc++.h>
using namespace std;
void solve(vector<pair<string,string>> values,string oldstr,string newstr){
	if(oldstr==""){
		cout<<newstr;
	}
	for (int i = 0; i <values.size() ; ++i){
		int ans=oldstr.find(values[i].second);
		oldstr=oldstr.substr(ans+values[i].second.size());
		newstr=newstr+values[i].first;
		solve(values,oldstr,newstr);
		}

}
int main(){
	int times;//cin>>times;
	while(cin>>times){
		if (times==0){
			break;
		}
		vector<pair<string,string>> dict(times);//cpp "dict"
		for (int i = 0; i <times ; ++i){
			cin>>dict[i].first;
			cin>>dict[i].second;
		}
		string s;cin>>s;
		solve(dict,s,"");
		//int times;cin>>times;
	}
}