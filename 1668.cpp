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
int main(){
	ulli n,m;
	cin>>n>>m;
	vector<int> friendlist[n];
	int team[n];
	for(int i=0;i<n;i++){
		team[n]=0;
	}
	while(m--){
		ulli a,b;
		cin>>a>>b;
		friendlist[a].push_back(b);
		friendlist[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		if(team[n]){continue;}
		else{
			
		}
	}
	return 0;
}

/*
*/