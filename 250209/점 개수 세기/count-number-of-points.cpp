#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int N, Q; 

int main()
{
	
	cin >> N >> Q; 
	vector<int> arr(N); 
	for (int i = 0; i < N; i++) {
		cin >> arr[i]; 
	}

	sort(arr.begin(), arr.end()); 

	for (int q = 0; q < Q; q++) {
		int a, b; 
		cin >> a >> b; 
		cout << upper_bound(arr.begin(), arr.end(), b) - lower_bound(arr.begin(), arr.end(), a); 
		cout << endl; 
	}

	return 0; 
}
