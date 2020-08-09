

bool fun(string s){

	for(int i =0; i< (s.size())/2; i++){
		if (s[i] != s[n-i-1])
			return false;
	}
	return true;
}


int main(){
	string s;
	pal(s);
	return 0;

}