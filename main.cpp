﻿#include<iostream>

using namespace std;

int main(){
	int i, j;
	cout << "구구단:\n";
	for (i = 1; i < 9; i++) {
		for (j = 1; j < 9; j++) {
			cout << i << "*" << j << "=" << i * j << '\t';
		}
		cout << endl;
	}

	return 0;
}

