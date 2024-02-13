// Encryption & Decryption of a Text File using XOR Cipher

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

// the class encdec contains two member functions
// which are encrypt and decrypt
class encdec {
	private:
		// File name that will be encrypted
		string file = "file.txt";
		char c;
		// the private key
		char key;

	public:
		void encrypt();
		void decrypt();
};