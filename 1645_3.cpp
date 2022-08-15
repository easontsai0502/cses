/*
[Q]https://cses.fi/problemset/task/1645
[]
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<stack>
#include<deque>
using namespace std;
#define ulli unsigned long long int
#define lli long long ulli
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	ulli n,x;
	cin>>n;
	deque< pair<ulli,ulli> > vec;
	for(int i=0;i<n;i++){
		cin>>x;
		if(vec.size){
			deque< pair<ulli,ulli> >::iterator it;
			it=vec.end();
			ulli runcount=vec.size();
			while(runcount--){
				it--;
				if((*it).first<x){
					cout<<(*it).second+1<<' ';
					break;
				}
			}
			if(!runcount){
				cout<<"0 ";
			}
		}else{
			cout<<"0 ";
		}
		while((vec.back()).first>=x && vec.size()){
			vec.pop_back();
		}
		vec.push_back({x,i});
	}
	return 0;
}
/*
*/
