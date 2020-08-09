


void fun (string s){
	
	stack<char> st;

	for(int i=0;i< n; i++){
		if(s[i] != " ")
			st.push(s[i]);
		else
			while(!st.empty()){
				cout << st.top();
				st.pop();
			}
			cout << " ";
		}

		while (st.empty() == false) { 		//last word
        cout << st.top(); 
        st.pop(); 
    } 

//or
		string words;
		strngstream iss(s);
		while(iss >> words){
			reverse(words.begin(), words.end());		
	}

	
}
int main(){

	string s;
	fun(s);
	return 0;
}