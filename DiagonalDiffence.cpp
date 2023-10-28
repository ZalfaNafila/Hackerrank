#include<bits/stdc++.h>
using namespace std;
/*
1 2 3 
4 5 6
7 8 9 

*/
int main(){
	int n;
	cin >> n;

	int arr[n][n];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	int sum2=0, sum1= 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(i == j){
				sum1+=arr[i][j];
			}
		}
	}

	for(int i = 0, j=n-1; i<n, j>=0; i++,j--){
		// for(int j = n; j>0; j--){
			sum2+=arr[i][j];
	}
	cout << abs(sum1-sum2) << '\n';
}
