#include<iostream>
using namespace std;
int n,B[30];

bool check(int a[]) {
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += a[i];
	}
	if(sum % 2 == 0) {
		return true;
	}
	return false;
}

void in(){
	if(check(B)) {
		for(int i = 1; i <= n; i++) {
			cout << B[i];
		}
		cout << endl;
	}
}
void quaylui(int i){
	int j;
	for(j=0;j<=1;j++){
		B[i] = j;
		if(i==n) {
			in();
		}
		else quaylui(i+1);
	}
}
main(){
	cin >> n;
	quaylui(1);
}
