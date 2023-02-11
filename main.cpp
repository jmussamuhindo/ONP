#include <vector>
#include <iostream>
#include <map>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stack>
using namespace std;

int roundup(int a, int b){
    if(a%b == 0){
        return a/b;
    }
    else return (a/b)+1;
}
//rounddown = a/b;
bool notprime(int n){
    bool trigger = true;
    if(n == 1){
        return true;
    }
    else if(n == 2){
        return false;
    }
    for(int i = 2; i < (n/2)+1; i++){
        if(n % i == 0){
            trigger = false;
            break;
        }
    }
    if(trigger == true){
        return false;
    }
    else{
        return true;
    }
}

void solve(){
    string s, ans;
    cin >> s;
    stack<char> st;
    for(char c: s){
        if(c == ')'){
            ans+=st.top();
            st.pop();
        }
        else if(c >= 97 && c <= 122){
            ans+=c;
        }
        else if(c != '('){
            st.push(c);
        }
    }
    cout << ans << "\n";
}

int main(){
    int t, n;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}