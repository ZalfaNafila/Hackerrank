//link : https://www.hackerrank.com/challenges/apple-and-orange/problem

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int s,t,a,b,m,n,apple,orange;
	int totalapple = 0;
	int totalorange = 0;
	
	cin >> s >> t >> a >> b >> m >> n;
	for(int i=0; i<m; i++){
		cin >> apple;
		if(a + apple >= s && a + apple <= t){
			totalapple++;
		}
	}
	for(int j=0; j<n; j++){
		cin >> orange;
		if(b + orange >= s && b + orange <= t){
			totalorange++;
		}
}
		cout << totalapple << "\n" << totalorange;
		
}
	
