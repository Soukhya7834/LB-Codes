//https://stackoverflow.com/questions/38922606/what-is-x-1-and-x-1



void comb(char s[]){

	int n = str.lenghth;			//if needed

	for(int i=0; i< s.length() ; i++){
		k = i, x=0;			//reset these 2 every new itrtn
		cout << s[x];
		x++;				//print firt char anyways

		for(int j=0; j< s.length()-1; i++){			//to print remaining 3 chars, but in diff orders
			if(k & 1){		j	//basically k%1, to get remainder
				cout << " ";	//check if you want to leave space
			}

			k = k >> 1; 		//basically k/1, to get quotient, changes k on every loop, to check forspaces in next iteration 

			cout << s[x];
			x++;
		}
		cout << endl;
	}
	return;
}