/*
[Q]https://cses.fi/problemset/task/1667
[AC]
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<deque>
#include<stack>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	ulli n,m;
	cin>>n>>m;
	vector<ulli> con[n];
	ulli from[n];
	bool isconnect[n];
	while(m--){
		ulli a,b;
		cin>>a>>b;
		a--;b--;
		con[a].push_back(b);
		con[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		isconnect[i]=false;
	}
	isconnect[0]=true;
	deque<ulli> checkque;
	checkque.push_back(0);
	while(checkque.size()){
		ulli i=checkque.front();
		for(ulli j:con[i]){
			if(isconnect[j]){continue;}
			from[j]=i;
			deque.push_back(j);
			isconnect[j]=true;
		}
		if(isconnect[n-1]){
			break;
		}
		checkque.pop_front();
	}
	if(isconnect[n-1]){
		cout<<from[n-1].size<<"\n";
		for(ulli i:from[n-1]){
			cout<<i<<" ";
		}
	}else{
		cout<<"IMPOSSIBLE"
	}
	return 0;
}

/*
[I1]
5 5
1 2
1 3
1 4
2 3
5 4
[O1]
3
1 4 5
*/
