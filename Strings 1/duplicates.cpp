#include<bits/stdc++.h>
using namespace std;

bool fun(string s){

	sort(s.begin(), s.end());

	for(int i=1; i< s.size(); i++){
		if(s[i] == s[i-1])
			return true;
	}
	return false;
}

int main(){
	
	string s = "geeks";

	if(fun(s))
		cout << "dup";
	else
		cout << " no dop";

	return 0;
}