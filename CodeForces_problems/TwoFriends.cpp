// problem link
// https://codeforces.com/problemset/problem/1969/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int temp;
        for(int i = 0;i < n;i++){
            cin >> temp;
            arr[i] = temp - 1;
        }

        int res = 3;

        for(int i = 0;i < n;i++){
            if(arr[arr[i]] == i){
                res = 2;
            }
        }

        cout << res << endl;


    }
}
