#include<bits/stdc++.h>
using namespace std;

void sub(char[] in, char[]out, int i, int j ){

	if (in[i] =='\0') {
		out[j] = '\0';
		cout << out << endl;
		return ;
	}
	
	out[j] = in[i];
	sub(in, out, i+1, j+1);

	out[j] = '\0';
	sub(in, out, i+1, j);
}

int main(){
	char in[] = "abc";
	char op[];

	sub(in, out, 0, 0);

	return 0;
}


//Pgm to print subsequences