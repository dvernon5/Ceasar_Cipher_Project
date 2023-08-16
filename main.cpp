#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;

const int leftshift = 3;
const int numbersOfAlphabet = 26;

map<char,int> characterToIntegerMapping = {
    {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4},
    {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
    {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14},
    {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
    {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, {'Z', 25}
};

map<int,char> integerToCharacterMapping = {
    {0, 'A'}, {1, 'B'}, {2, 'C'}, {3, 'D'}, {4, 'E'},
    {5, 'F'}, {6, 'G'}, {7, 'H'}, {8, 'I'}, {9, 'J'},
    {10, 'K'}, {11, 'L'}, {12, 'M'}, {13, 'N'}, {14, 'O'},
    {15, 'P'}, {16, 'Q'}, {17, 'R'}, {18, 'S'}, {19, 'T'},
    {20, 'U'}, {21, 'V'}, {22, 'W'}, {23, 'X'}, {24, 'Y'}, {25, 'Z'}
};

int characterToInteger(char letter);
char shiftedCharacter(char letter, int leftShift);
string encryptMessage(string plainText);
string decryptMessage(string plainText);
void displayDashLine();

int main(int argc, char* argv[])
{
    displayDashLine();
        string plainText;
        cout << "Enter a Sentence: ";
        getline(cin, plainText);
        cout << "\nOriginal message is: " << plainText << endl;
        displayDashLine();

        string ciphertext = encryptMessage(plainText);
        cout << "Encrypted message is: " << ciphertext << endl;
        displayDashLine();

        string deciphertext = decryptMessage(ciphertext);
        cout << "Decrypted message is: " << deciphertext << endl;
        displayDashLine();
    
    return 0;
}

int characterToInteger(char letter)
{
    auto itr = characterToIntegerMapping.find(letter);
    if (itr != characterToIntegerMapping.end())
    {
        return itr->second;
    }
    
    return -1;  // Letter is not found
}

char shiftedCharacter(char letter, int leftShift)
{
    int characterInteger = characterToInteger(letter);
    if (characterInteger >= 0)
    {
        return integerToCharacterMapping[(characterInteger + leftShift + numbersOfAlphabet) % numbersOfAlphabet];
    }
    
    return letter;
}

string encryptMessage(string plainText)
{
    string ciphertext = "";
    
    for (auto letter : plainText)
    {
        ciphertext += shiftedCharacter(letter, -leftshift);
    }
    
    return ciphertext;
}

string decryptMessage(string plainText)
{
    string deciphertext = "";
    
    for (auto letter : plainText)
    {
        deciphertext += shiftedCharacter(letter, leftshift);
    }
    
    return deciphertext;
}

void displayDashLine()
{
    cout << "--------------------------------" << endl;
}
