#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int num[10];
	double sum = 0;
	
	for (int i=0; i<n; i++){
		cin >> num[i];
		sum += num[i];
	}
	cout << fixed << std::setprecision(0) << sum;

	
}
