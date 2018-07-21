//============================================================================
// Name        : C++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

constexpr int aaa(){
	return 10;
}

int main() {
	const int i = aaa();
	cout << i << " hi" << endl; // prints !!!Hello World!!!
	return 0;
}
