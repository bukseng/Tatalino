#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
using namespace std;

int main(){
	string magic_word = "tatalino ";
	vector<char> sagot;
	char c;
	int i = 0, n = magic_word.size();
	cout << "Tanong: ";
	while(1){
		c = _getch();
		if(c == ';') break;
		sagot.push_back(c);
		cout << magic_word[i];
		i++;
		if(i >= n) i = 0;
	}
	
	while(1){
		c = _getch();
		cout << c;
		if(c == '?') break;
	}
	
	cout << endl << "Pumindot ng kahit ano para makita ang sagot..." << endl;
	c =_getch();
	
	cout << "Sagot ni Tatalino: ";
	n = sagot.size();
	for(i = 0; i < n; i++){
		cout << sagot[i];
	}
	

}





