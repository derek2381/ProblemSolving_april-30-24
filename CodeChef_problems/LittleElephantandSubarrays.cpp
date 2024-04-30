// problem link
// https://www.codechef.com/problems/SUBMIN?tab=statement

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> arr(n);
	map<int, int> mp;
	for(int i = 0; i <n;i++){
	    cin >> arr[i];
	    mp[arr[i]]++;
	}

	int min_val;
	for(int i = 0;i < n-1;i++){
	    min_val = arr[i];
	    for(int j = i+1;j < n;j++){
	        min_val = min(min_val, arr[j]);
	        mp[min_val]++;
	    }
	}

	int q;
	cin >> q;
	while(q--){
	    int k;
	    cin >> k;
	    cout << mp[k] << endl;
	}
	return 0;
}
