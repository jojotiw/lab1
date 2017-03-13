#include <iostream>
using namespace std;

int main(){
	int n;
	int i;
	cin >> n;
	for(i=1 ;;i++){
		cout << n << " " ;
		if(n==1) break;
		if(n%2 !=0) n= n*3+1;
		else n=n/2;
	}
	cout << "\n";
	return 0;
}
