#include "encdec.h"

// Definition of encryption function
void encdec::encrypt()
{
	// Prompt the user to input the encryption key
	cout << "Please input your encryption key (a character): ";
    cin >> key;

	// Input stream & Output stream
	fstream fin, fout;

	// Input file: the filename specified in the class definition
	// Output file: encrypt.txt
	fin.open(file, fstream::in);
	fout.open("encrypt.txt", fstream::out);

	// Read the original file till the end of file
	while (fin >> noskipws >> c) {
		// Perfore XOR encryption
		int temp = (c ^ key);

		// Show the encrypted ciphertext
		fout << (char)temp;
	}

	// Close both files
	fin.close();
	fout.close();
}

// Definition of decryption function
void encdec::decrypt()
{
	// Prompt the user to input the decryption key
	cout << "Please input your decryption key (a character): ";
	cin >> key;

	// Input stream & Output stream
	fstream fin, fout;

	// Input file: encrypt.txt
	// Output file: decrypt.txt
	fin.open("encrypt.txt", fstream::in);
	fout.open("decrypt.txt", fstream::out);

	// Read the original file till the end of file
	while (fin >> noskipws >> c) {
		// Perforem XOR decryption
		int temp = (c ^ key);

		// Show the decrypted plaintext
		fout << (char)temp;
	}

	// Close both files
	fin.close();
	fout.close();
}