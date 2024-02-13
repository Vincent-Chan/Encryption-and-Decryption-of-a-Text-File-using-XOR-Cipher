// Encryption & Decryption of a Text File using XOR Cipher

// g++ -o main *.cpp
// ./main

#include "encdec.h"

using namespace std;

// Main program
int main()
{
	encdec enc;
	char c;
	cout << "\n";
	cout << "Please enter your choice : \n";
	cout << "1. encryption \n";
	cout << "2. decryption \n";
	cin >> c;
	cin.ignore();

	switch (c) {
	case '1': {
		enc.encrypt();
		cout << "\nPlease check encrypt.txt\n";
		break;
	}
	case '2': {
		enc.decrypt();
		cout << "\nPlease check decrypt.txt\n";
		break;
	}
	default:
		cout << "\nInvalid choice\n";
	}
}
