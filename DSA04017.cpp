#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n - 1);

        for(long long i = 0; i < n; i++) 
            cin >> a[i];
        
        for(long long i = 0; i < n - 1; i++) 
            cin >> b[i];

        int result = n; // V? tr� m?c d?nh l� ph?n t? cu?i c�ng (n?u t?t c? ph?n t? d?u ti�n gi?ng nhau)

        // So s�nh tr?c ti?p t?ng ph?n t? c?a hai m?ng
        for(long long i = 0; i < n - 1; i++) {
            if(a[i] != b[i]) {
                result = i + 1; // Ch? s? b?t d?u t? 1
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}

