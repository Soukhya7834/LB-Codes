// C++ program to find the index 
// of an element in a vector 

#include <bits/stdc++.h> 
using namespace std; 

void searchNo(vector<int> nums, int k){
	sort(nums.begin(), nums.end());
	int count =0;
	int index=0;
	int n = nums.size();

	auto it = find(nums.begin(), nums.end(), k);
	if (it != nums.end()) { 
        // calculating the index of k
      
    index = distance(nums.begin(), it); 
    cout <<"i = " << index << endl;
	}

       // for(unsigned int i =index; i< nums.size() ;i++){
       //	count ++; }
        
    count = n - (index + 1);
    

    cout << count;
}
// Driver Code 
int main() 
{ 
	// Vector 
	vector<int> v = { 1, 45, 54, 71, 
					76, 17 }; 
	// Value whose index 
	// needs to be found 
	int K = 54; 
	searchNo(v, K); 
	return 0; 
} 
