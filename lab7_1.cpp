#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
    cout << "Input text: ";
	cin >> text;
	string f1 = func1(text);
	string f2 = func2(f1);
	string f3 = func2(text);
    cout << "Reversed text: " << f1 << endl;
	if(f2 != f3){
    cout << "Palindrome: No";
	}
	else{
	cout << "Palindrome: Yes";	
	}
    return 0;
}
