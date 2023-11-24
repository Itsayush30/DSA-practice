#include <bits/stdc++.h> 
using namespace std; 
class k { 
	// Access specifier 
public: 
	// Data Members 
	string kname; 
	// Member Functions() 
	void printname() { cout << "Geekname is:" << kname; } 
}; 
int main() 
{ 
	// Declare an object of class geeks 
	Geeks obj1; 
	// accessing data member 
	obj1.kname = "Abhi"; 
	// accessing member function 
	obj1.printname(); 
	return 0; 
}
