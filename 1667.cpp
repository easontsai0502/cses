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
ulli solve(ulli x,ulli c){
	return re;
}
int main(){
	ulli n,m;
	cin<<n<<m;
	vector<ulli> con[n];
	vector<ulli> howto[n];
	bool isconnect[n];
	while(m--){
		ulli a,b;
		cin>>a>>b;
		a--;b--
		con[a].push_back(b);
		con[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		isconnect[n]=false;
	}
	isconnect[0]=true;
	deque<ulli> checkque;
	checkque.push_back(0);
	while(checkque.size()){
		
		if(isconnect[n]){
			break;
		}
	}
	ulli ans=0;

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
