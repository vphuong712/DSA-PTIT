#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int count = 0;
        string str;
        getline(cin, str);
        stringstream ss(str);
        string tmp;
        while(ss >> tmp) {
        	count++;
        	if(count == 1) {
        		cout << tmp << " ";
			}
        	if(count == 2) {
		        bool pos = next_permutation(tmp.begin(), tmp.end());
		        if (pos) {
		            cout << tmp;
		        } else {
		        	cout << "BIGGEST";
				}        		
			}
		}
        cout << endl;
    }
    return 0;
}
