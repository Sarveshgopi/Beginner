// CPP program to find the least frequent element 
// in an array. 
#include <bits/stdc++.h> 
using namespace std; 

int leastFrequent(int arr[], int n) 
{ 
	// Insert all elements in hash. 
	unordered_map<int, int> hash; 
	for (int i = 0; i < n; i++) 
		hash[arr[i]]++; 

	// find the min frequency 
	int min_count = n+1, res = -1; 
	for (auto i : hash) { 
		if (min_count >= i.second) { 
			res = i.first; 
			min_count = i.second; 
		} 
	} 

	return res; 
} 

// driver program 
int main() 
{ 
	int arr[] = {1, 3, 2, 1, 2, 2, 3, 1}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << leastFrequent(arr, n); 
	return 0; 
} 
