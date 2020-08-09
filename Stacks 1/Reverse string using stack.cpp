
void reverse(string s){
	stack res; 
	vector<char> p;

	for(int i=0;i< s.length(); i++){
		res.push(s[i]);
	}

	for(int i=0;i< s.length(); i++){
		s[i] = res.top();
		res.pop();
	}

}


// OR https://www.techiedelight.com/reverse-a-string-using-stack-data-structure /

#include <iostream>
#include <algorithm>
using namespace std;

// Reverse a string using implicit stack (recursion) in C++
// Note that the string is passed by reference
void reverse(string &str, int &i, int j)
{
	// base case: j reaches string length
	if (j == str.length())
		return;

	reverse(str, i, j + 1);

	// swap characters at i'th and j'th index
	if (i <= j) {
		swap(str[i], str[j]);

		// advance i by one position,
		// j index will be taken care by recursion
		i++;
	}
}

// Wrapper function
void reverse(string &str)
{
	int i = 0;
	reverse(str, i, 0);
}

int main()
{
	string str = "Reverse me";

	reverse(str);
	cout << str;

	return 0;
}