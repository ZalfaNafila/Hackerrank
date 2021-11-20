#include <iostream>
using namespace std;

int main(){
	
	int s;
	cin >> s;
	for(int i = 0; i<s; i++){
		int a,b,c;
		int notlate = 0;
		cin >> a >> b;
		for (int j=0; j<a; j++){
			cin >> c;
			if (c<=0){
				notlate++;
			}
		}
		if(notlate>=b){
			cout << "NO" <<endl;
		}
		else cout << "YES" <<endl;
	}
return 0;
}
