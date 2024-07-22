#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generate(vector<string>& results, string current, int countA, int countB, int countC, int n) {
    if (current.length() == n) {
        results.push_back(current);
        return;
    }
    
    if (countA < n / 3) {
        generate(results, current + 'A', countA + 1, countB, countC, n);
    }
    
    if (countB < countA && countB < n / 3) {
        generate(results, current + 'B', countA, countB + 1, countC, n);
    }
    
    if (countC < countB && countC < n / 3) {
        generate(results, current + 'C', countA, countB, countC + 1, n);
    }
}

vector<string> generate_strings(int n) {
    vector<string> results;
    generate(results, "", 0, 0, 0, n);
    return results;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> strings = generate_strings(n);
    
    // Sort strings lexicographically
    sort(strings.begin(), strings.end());
    
    for (const string& s : strings) {
        cout << s << endl;
    }
    
    return 0;
}

