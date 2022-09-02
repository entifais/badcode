#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
void solve(vector<pair<string,string>> values,string oldstr,string newstr,int id,int &cnt){
    if(id==oldstr.length()){//empty
        cout<<newstr<<endl;
        cnt+=1;
    }else{  
        while(id<oldstr.length() && oldstr[id] == '0') id++;
        if(id>=oldstr.length()) return;
        //control index

        for (unsigned int i = 0; i <values.size() ; ++i){
            if(values[i].second.length() > oldstr.length()-id) continue;
            bool valid = true;
            //helps to validate operations and verify if you can remove the substring
            for(int ii=0;ii<values[i].second.length() && valid;ii++){
                if(oldstr[ii+id] != values[i].second[ii]){
                 valid = false;
                }            
            }
            if(valid){
                newstr += values[i].first;
                solve(values,oldstr,newstr,id+values[i].second.length(),cnt);
                newstr.pop_back();
                //remove and add letters to avoid mistakes and to allow you to try all combinations
            }
            }
    }

}
int main(){
    int times;
    int counter=1;
    while(cin>>times){
        int test=0;
        if (times==0){
            break;
        }
        vector<pair<string,string>> dict(times);
        for (int i = 0; i <times ; ++i){
            cin>>dict[i].first;
            cin>>dict[i].second;
        }//input data
        string s;cin>>s;
        cout<<"Case #"<<counter<<endl;
        solve(dict,s,"",0,test);
        counter+=1;

    }
}