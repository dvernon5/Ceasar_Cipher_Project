#include <iostream>
#include <string>
#include <map>
using namespace std;

const int leftShift = 3;
const int numberInAlphabets = 26;

map<char, int> charToIntMapping = {
    {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4},
    {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
    {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14},
    {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
    {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, {'Z', 25}
};

map<int, char> intToCharMapping = {
    {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4},
    {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
    {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14},
    {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
    {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, {'Z', 25}
};

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
