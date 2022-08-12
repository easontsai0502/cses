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
using namespace std;
#define ulli unsigned long long int
#define lli long long ulli
ulli main(){
    ulli n;
    cin>>n;
    vector< pair<ulli,ulli> >x;
    for(ulli i=0;i<n;i++){
		int z;
        cin>>z;
		x.push_back({z,i});
    }
    stack< pair<ulli,ulli> > st;
    for(ulli i=0;i<n;i++){
		if(i){

		}else{
			cout<<"0 ";
			st.push(x[i]);
			continue;
		}
		while(st.front()>=x[i].first)st.pop();
		
    }
	return 0;
}
/*
*/