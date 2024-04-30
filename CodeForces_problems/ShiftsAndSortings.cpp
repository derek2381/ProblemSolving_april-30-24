// problem link
// https://codeforces.com/contest/1969/problem/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        long long int count = 0, res = 0;

        for(char i : str){
            if(i == '1'){
                count++;
            }else if(i == '0' && count > 0){
                res += (count + 1);
            }
        }

        cout << res << endl;
    }
}
