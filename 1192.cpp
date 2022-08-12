/*
[Q]https://cses.fi/problemset/task/1192
[]
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int maplist[1001][1001];
int n,m;
void solver(int x,int y,int point=0){

}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		string str;
		cin>>str;
		for(int j=0;j<n;j++){
			if(str[j]=='#'){
				maplist[m][n]=0;
			}else{
				maplist[m][n]=1;
			}
		}
	}
	return 0;
}
/*
[THINK]
______>n
......|
......|
......|
      V
	  m
#=0
.=1
*/