// problem link
// https://www.codechef.com/problems/SDSTRING

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string str;
	    cin >> str;
	    int count0 = 0, count1 = 0;

	    for(char i : str){
	        if(i == '0'){
	           count0++;
	        }else{
	            count1++;
	        }
	    }

	    if(str.length()%2 == 1 || count0 == 0 || count1 == 0){
	        cout << -1 << endl;
	    }else{
	        int val = abs(count1 - count0)/2;
	        cout << val << endl;
	    }


	}
	return 0;
}
