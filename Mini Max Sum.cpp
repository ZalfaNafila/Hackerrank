#include <iostream>
#include <cstdio>
#include <stdio.h> 
using namespace std;

int main(){
	
	int n = 5;
	long long arr[5];
	long long arrMax = arr[0];
	long long arrMin = arr[0];
	long long sumtotal = 0;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sumtotal += arr[i];
		if (arr[i] <= arrMin){
			arrMin = arr[i];
		}
		else if(arr[i] >= arrMin){
			arrMax = arr[i]; 
		}
	}
	long long int max = sumtotal - arrMin;
	long long int min = sumtotal - arrMax;
	cout << sumtotal - arrMax << " " << sumtotal - arrMin;
	
}
