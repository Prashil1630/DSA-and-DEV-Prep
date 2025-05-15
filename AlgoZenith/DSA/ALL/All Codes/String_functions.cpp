#include <bits/stdc++.h>
using namespace std;

void pop_back(string &S){
    S.pop_back();
}

void front(string S){
    cout << S[0] << '\n';
}

void back(string S){
    cout << S[S.size() - 1] << '\n';
}

void sort_sub(string &S, int l , int r){
    sort(S.begin() + l, S.begin() + r);
}

void reverse_sub(string &S, int l, int r){
    reverse(S.begin() + l, S.begin() + r);
}

void print(string S, int pos){
    cout << S[pos] << '\n';
}

void print_sub(string S, int l, int r){
    string sub = S.substr(l,r - l);
    cout << sub << '\n';
}

void push_back(string &S, char x){
    S = S + x;
}

int main(){
    int N,Q;
    cin >> N >> Q;
    string temp;
    getline(cin, temp);
    string S;
    getline(cin,S);
    // cout << S << '\n';
    // push_back(S,'a');
    // cout << S.substr(3,6);

    // string arr[Q];
    for(int i = 0; i < Q; i++){
        // cout << '\n';
        
        string command;
        cin >> command;
        // cout << command << '\n';
        if (command == "pop_back"){
            pop_back(S);
        }
        else if(command == "front"){
            front(S);
        }
        else if(command == "back"){
            back(S);
        }
        else if(command == "sort"){
            int l, r;
            cin >> l >> r;
            // cout << l << ' ' << r;
            if (l > r){
                swap(l, r);
            }
            sort_sub(S, l - 1, r);
        }
        else if(command == "reverse"){
            int l, r;
            cin >> l >> r;
            if (l > r){
                swap(l, r);
            }
            reverse_sub(S, l - 1, r);
        }
        else if(command == "print"){
            int pos;
            cin >> pos;
            print(S, pos - 1);
        }
        else if(command == "substr"){
            int l, r;
            cin >> l >> r;
            // cout << l << ' ' << r;
            if (l > r){
                swap(l, r);
            }
            print_sub(S, l - 1, r);
        }
        else if(command == "push_back"){
            char x;
            cin >> x;
            push_back(S, x);
        }
    }
}
