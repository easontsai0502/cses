/*
[Q]https://cses.fi/problemset/task/1142
[]
*/

/*include*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
#include<struct>
#include<queue>
#include<deque>
#include<map>
#include<set>

/*using namespace*/
using namespace std;

/*define type*/
#define ulli unsigned long long int
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define pulli pair<ulli,ulli>
#define INT int
#define UINT unsigned INT

/*struct*/

/*num*/

/*fn*/

/*main*/
int main(){
	UINT n;
	cin>>n;
	UINT k[n];
	UINT maxk=0;
	UINT mink=0;
	for(int i=0;i<n;i++){
		cin>>k[i];
		maxk=max(maxk,k[i]);
		if(mink){
			mink=min(mink,k[i]);
		}else{
			mink=k[i];
		}
	}
	map<UINT,UINT> highpoint;/*紀錄每個高度的竿子的位置*/
	UINT ans=0;
	for(int i=0;i<n;i++){
		if(i){
			/*如果現在這個比上一個矮*/
			if(k[i-1]>k[i]){
				/*偵測是否要加入*/
				if(!(highpoint.count(k[i]))){
					/*需要加入，從高度矮的開始找*/
					for(int j=k[i]+1;j<=maxk;j++){
						/*如果該高度有資料*/
						if(highpoint.count(j)){
							highpoint[k[i]]=highpoint[j];
						}
					}
				}
				highpoint.erase[k[i-1]];
			}else if(k[i-1]<k[i])){
				/*你比上一個高，直接進去，不要多問*/
				highpoint[k[i]]=i;
			}
			/*計算ans*/
			for(int i=1;i<k[i];i++){

			}
			ans=max( (i-highpoint[k[i]]+1)*k[i] ,ans);
		}else{
			/*如果是第一個，先做初始化*/
			ans=k[i];
			highpoint[k[i]]=i;
		}
	}
	cout<<ans;
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/