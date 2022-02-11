//link : https://www.hackerrank.com/challenges/bon-appetit/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b,n,n2,sum2,s[101000];
	int sum = 0;
	int total = 0;
	
	cin >> a >> b;
	for(int i=0; i<a; i++){
		cin >> s[i];
		sum+=s[i];
	}
	cin >> n;
	sum2 = sum - s[b];
	total = sum2 / 2;
	if(n == total){
		cout << "Bon Appetit";
	}
	else 
	cout << n - total << endl;
}
