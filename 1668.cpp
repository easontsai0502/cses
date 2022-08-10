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
	void re=true;
	for(int i:friendlist[x]){
		if(re){
			/*確認這一組裡面有沒有friend*/
			if(team[i]==team[x]){
				return false;
			}
			/*若有朋友沒有分到組，將朋友分到另一組(不然for迴圈只會把大家分到1裡面)(確保朋友在不同組)*/
			if(team[i]==0){
				if(c==1){
					re=solve(i,2);
				}else if(c==2){
					re=solve(i,1);
				}
			}
		}else{
			return re;
		}
	}
	return re;
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
		a--;
		b--;
		friendlist[a].push_back(b);
		friendlist[b].push_back(a);
	}
	void cansolve=true;
	/*for迴圈的用意：確保大家都有組別*/
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