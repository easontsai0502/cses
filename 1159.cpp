/*
[Q]https://cses.fi/problemset/task/1159
[]
*/

/*include*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<stack>
#include<cstring>
#include<unordered_map>

/*using namespace*/
using namespace std;

/*define type*/
#define ULLI unsigned long long int
#define LLI long long int
#define INT int
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>

/*struct*/

/*fn宣告*/

/*num*/

/*fn定義*/
INT TFbackpack(INT n,INT m){//經典01背包問題(物品數,承受重量)
	INT h[n+1],s[n+1],k[n+1];
	//h為物品重
	//s為價值
	//k為此物品的數量(可以都拿，也可以只拿部分，也可以都不拿)
	/*cin*/
	for(INT i=1;i<=n;i++){
		cin>>h[i];
	}
	for(INT i=1;i<=n;i++){
		cin>>s[i];
	}
	for(INT i=1;i<=n;i++){
		cin>>k[i];
	}
	/*solve*/
	INT dp[n+1][m+1];//dp[i][j] i為物品編號 j為承受重量
	for(INT i=0;i<=n;i++){
		dp[i][0]=0;
	}
	for(INT i=0;i<=m;i++){
		dp[0][i]=0;
	}
	for(INT i=1;i<=n;i++){//i為物品編號
		for(INT j=h[i];j<=m;j++){//j為承受重量
			INT &nowans=dp[i][j];
			nowans=dp[i-1][j];
			for(INT c=1;c<=k[i] && h[i]*c<=j;c++){//c為物品數
				nowans=max(dp[i-1][j-c*h[i]]+s[i]*c,nowans);
			}
		}
	}
	return dp[n][m];
}
/*main*/
int main(){
	/*IO加速*/
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	INT a,b;
	cin>>a>>b;
	cout<<TFbackpack(a,b);
	return 0;
}

/*
[I1]
3 10
2 6 3
8 5 4
3 5 2
[O1]
28
*/

/*think*/
/*

*/
