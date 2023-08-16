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

    return -1;  // Invalid character
}

int shiftedCharacter(char letter, int shift)
{
    return 'A' + (letter - 'A' + shift + numberInAlphabets) % numberInAlphabets;
}

string encryptMessage(string plainText)
{
    
}

string decryption(string& ciphertext)
{
    string deciphertext = "";
    
    for (int i = 0; i < ciphertext.size(); i++)
    {
        int characterInteger = characterToInteger(ciphertext[i]);
        
        if (characterInteger >= 0)
        {
            deciphertext.append(1, decryptedIntegerToCharacter(characterInteger));
        }
        else
        {
            deciphertext.append(1, ciphertext[i]);
        }
    }
    
    deciphertext[ciphertext.size()] = '\0';
    
    return deciphertext;
}

char encryptedIntegerToCharacter(int number)
{
    char letter = 0;
    
    if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 0)
    {
        letter = 'A';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 1)
    {
        letter = 'B';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 2)
    {
        letter = 'C';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 3)
    {
        letter = 'D';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 4)
    {
        letter = 'E';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 5)
    {
        letter = 'F';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 6)
    {
        letter = 'G';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 7)
    {
        letter = 'H';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 8)
    {
        letter = 'I';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 9)
    {
        letter = 'J';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 10)
    {
        letter = 'K';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 11)
    {
        letter = 'L';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 12)
    {
        letter = 'M';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 13)
    {
        letter = 'N';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 14)
    {
        letter = 'O';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 15)
    {
        letter = 'P';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 16)
    {
        letter = 'Q';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 17)
    {
        letter = 'R';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 18)
    {
        letter = 'S';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 19)
    {
        letter = 'T';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 20)
    {
        letter = 'U';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 21)
    {
        letter = 'V';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 22)
    {
        letter = 'W';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 23)
    {
        letter = 'X';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 24)
    {
        letter = 'Y';
    }
    else if (((number - leftShift + numberInAlphabets) % numberInAlphabets) == 25)
    {
        letter = 'Z';
    }
    
    return letter;
}

char decryptedIntegerToCharacter(int number)
{
    char letter = 0;

    if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 0)
    {
        letter = 'A';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 1)
    {
        letter = 'B';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 2)
    {
        letter = 'C';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 3)
    {
        letter = 'D';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 4)
    {
        letter = 'E';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 5)
    {
        letter = 'F';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 6)
    {
        letter = 'G';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 7)
    {
        letter = 'H';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 8)
    {
        letter = 'I';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 9)
    {
        letter = 'J';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 10)
    {
        letter = 'K';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 11)
    {
        letter = 'L';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 12)
    {
        letter = 'M';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 13)
    {
        letter = 'N';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 14)
    {
        letter = 'O';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 15)
    {
        letter = 'P';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 16)
    {
        letter = 'Q';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 17)
    {
        letter = 'R';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 18)
    {
        letter = 'S';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 19)
    {
        letter = 'T';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 20)
    {
        letter = 'U';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 21)
    {
        letter = 'V';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 22)
    {
        letter = 'W';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 23)
    {
        letter = 'X';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 24)
    {
        letter = 'Y';
    }
    else if (((number + leftShift + numberInAlphabets) % numberInAlphabets) == 25)
    {
        letter = 'Z';
    }

    return letter;
}

void displayDashLine()
{
    cout << "-----------------------------------------------------------------" << endl;
}
