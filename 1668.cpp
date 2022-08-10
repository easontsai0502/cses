/*
[Q]https://cses.fi/problemset/task/1084
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
	vector<int> friendlist[100000];
	int team[200000];
void solve(int x,c){
	team[x]=c;
	for(int i:friendlist[x]){
		/*確認這一組裡面有沒有friend*/
		if(team[i]==team[x]){
			return false;
		}
		/*若有朋友沒有分到組*/
		if(team[i]==0){

		}
	}
}
int main(){
	ulli n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		team[n]=0;
	}
	while(m--){
		ulli a,b;
		cin>>a>>b;
		friendlist[a].push_back(b);
		friendlist[b].push_back(a);
	}
	void cansolve=true;
	for(int i=0;i<n && cansolve;i++){
		if(team[n]){continue;}
		else{
			cansolve=solve(i,1);
		}
	}
	if(cansolve){
		for(int i=0;i<n;i++){
			cout<<team[i]<<' ';
		}
	}else{
		cout<<"IMPOSSIBLE";
	}
	return 0;
}

/*
*/