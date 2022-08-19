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
    for(int i=0;i<n;i++)cin>>k[i],maxk=max(maxk,k[i]);
    map<UINT,UINT> highpoint;/*紀錄每個高度的竿子的位置*/
    UINT ans=0;
    for(int i=0;i<n;i++){
        if(i){
            if(!(highpoint.count(k[i]))){
                highpoint[k[i]]=i;
            }
            ans=max((i-highpoint[k[i]]+1)*k[i],ans);
        }else{
            ans=k[i];
            highpoint[k[i]]=i;
        }
    }
    return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/