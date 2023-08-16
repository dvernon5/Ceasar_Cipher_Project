#include<iostream>
#include<string>
using namespace std;

const int leftShift = 3;
const int numberInAlphabets = 26;

int characterToInteger(char letter);

int shiftedCharacter(char letter, int shift);

string encryptMessage(string plainText);

string decrypMessage(string ciphertext);

void displayDashLine();

int main(void)
{
    displayDashLine();
    string plainText;
    cout << "Enter a Sentence: ";
    getline(cin, plainText);
    cout << "\nOriginal message is: " << plainText << endl;
    displayDashLine();
    
    // Encrypting the original message. Substituting each letter 3 places to the left. For example D becomes A. 
    string ciphertext = encryption(plainText);
    cout << "Encrypted message is: " << ciphertext << endl;
    displayDashLine();
    
    // Decrypting the encrypted message back to the original message. 
    string deciphertext = decryption(ciphertext);
    cout << "Decrypted message is: " << deciphertext << endl;
    displayDashLine();

    return 0;
}

int characterToInteger(char letter)
{
     if (letter >= 'A' && letter <= 'Z') 
     {
        return letter - 'A';
     }
    return -1; // Invalid character
}

char shiftedCharacter(char letter, int shift) 
{
    return 'A' + (letter - 'A' + shift + numberInAlphabets) % numberInAlphabets;
}

string encryptMessage(string plainText) {
    string ciphertext = "";
    for (char c : plainText) 
    {
        int characterInteger = characterToInteger(c);
        if (characterInteger >= 0) 
        {
            ciphertext += shiftedCharacter(c, -leftShift);
        } else 
        {
            ciphertext += c;
        }
    }
    
    return ciphertext;
}

string decryptMessage(string ciphertext) 
{
    string deciphertext = "";
    for (char c : ciphertext) 
    {
        int characterInteger = characterToInteger(c);
        if (characterInteger >= 0) 
        {
            deciphertext += shiftedCharacter(c, leftShift);
        } else 
        {
            deciphertext += c;
        }
    }
    
    return deciphertext;
}

void displayDashLine()
{
    cout << "-----------------------------------------------------------------" << endl;
}
