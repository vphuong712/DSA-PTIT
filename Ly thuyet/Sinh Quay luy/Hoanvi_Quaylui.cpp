#include<iostream>
using namespace std;
int n, m, dem, A[20], B[20];
void in(){
	for(int i=1;i<=n;i++) cout << A[i] << " ";
	cout << endl;
}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(B[j]==0){
			A[i] = j; B[j] = 1;
			if(i==n){
                dem++;
                if(dem%m == 0) in();
			}
			else quaylui(i+1);
			B[j] = 0;
		}
	}
}
main(){
	cin >> n >> m; dem = 0;
	quaylui(1);
}
