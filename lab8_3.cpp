#include<iostream>
using namespace std;

char before(char x)
{
	char before ;
	if (x >= 'A' and x<='Z')
	{
		if(x == 'A')
		{
		before = 'Z';
		}
		else{
			before = x -1;
		}
	}
	else {
		before = '0';
	}
	return before;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
