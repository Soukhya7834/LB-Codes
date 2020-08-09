
bool check(string s1, string s2){
	string temp = s1 + s1;

	if(s1.size() != s2.size())
		return false;

	return(temp.find(s2) !=  string::npos)
		//return false;
}


int main(){
	string s1, s2;
	if check(s1, s2)
		cout << "y";
	else
		cout << "n";

	return 0;

}