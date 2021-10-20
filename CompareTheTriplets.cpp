#include<iostream>
using namespace std;


int main(){
	int ascore = 0;
	int bscore = 0;
	int a[3], b[3];
	
	for (int i = 0; i<3; i++){
		cin >> a[i];
	}
	for (int i=0; i<3; i++){
		cin >> b[i];
		if (a[i] > b[i]){
			ascore+=1;
		}
		else if(b[i] > a[i]){
			bscore+=1;
		}
	}	
	cout << ascore << " " << bscore;
}
