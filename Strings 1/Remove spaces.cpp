 void fun(string s){
 	int c=0;
 	for(int i=0;i< s.size(); i++){
 		if(s[i] != " ")
 			s[c++] = s[i];
 	}
 	s[c] = "\0";
 }


 int main(){

 	string s = " geeks   f   or   gee  ks";
 	fun(s);
 	cout << s;
 }

 //