
bool check(string s){
	int n = s.length();
	stack res;
	for(int i=0; i<n ; i++){
	if(s[i] == '{' || s[i] == '[' || s[i] == '('){
		res.push(s[i]);
	}
	
	char x;

	//now all closing are done, is res empty now, wrong

	switch(s[i]){
		case ']' :
			x = res.top;
			res.pop();
			if (x == '{' || x == '(')
				return false;
			break;
		case '}' :
			x = res.top;
			res.pop();
			if (x == '[' || x == '(')
				return false;
			break;
		case ')' :
			x = res.top;
			res.pop();
			if (x == '{' || x == '[')
				return false;
			break;
	}
	}
	return (s.empty());		// is there is some opening char reamining, its not balanced then

}