#include<bits/stdc++.h>
using namespace std;

bool is_composed_of_4_or_7(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    bool found = false;
    for (int i = a; i < b; i++) {
        if (is_composed_of_4_or_7(i)) {
            cout << i << "\n";
            found = true;
        }
    }
    
    if (!found) {
        cout << "-1\n";
    }
    
    return 0;
}
