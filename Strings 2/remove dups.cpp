
char bool(string s){
	unordered_map<char, int> m;
	int index = 0;
	for(int i=0;i< n; i++){
		if(m[s[i]] == 0){
			m[s[i]] = 1;
			s[index++] = s[i];
		}

		else
			m[s[i]]++;
	}
	return s; 
}

int main(){
	string s;
	remove( s);
	return 0;
}