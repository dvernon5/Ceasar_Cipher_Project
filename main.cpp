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

string encryption(string& plainText)
{
    string ciphertext = "";
    
    for (int i = 0; i < plainText.size(); i++)
    {
        int characterInteger = characterToInteger(plainText[i]);
        
        if (characterInteger >= 0)
        {
            ciphertext.append(1,encryptedIntegerToCharacter(characterInteger));
        }
        else
        {
            ciphertext.append(1,plainText[i]);
        }
    }
    
    ciphertext[plainText.size()] = '\0';
    
    return ciphertext;
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

int characterToInteger(char letter)
{
    switch (letter)
    {
        case 'A':
            letter = 0;
            break;
            
        case 'B':
            letter = 1;
            break;
            
        case 'C':
            letter = 2;
            break;
            
        case 'D':
            letter = 3;
            break;
            
        case 'E':
            letter = 4;
            break;
            
        case 'F':
            letter = 5;
            break;
            
        case 'G':
            letter = 6;
            break;
            
        case 'H':
            letter = 7;
            break;
            
        case 'I':
            letter = 8;
            break;
            
        case 'J':
            letter = 9;
            break;
            
        case 'K':
            letter = 10;
            break;
            
        case 'L':
            letter = 11;
            break;
            
        case 'M':
            letter = 12;
            break;
            
        case 'N':
            letter = 13;
            break;
            
        case 'O':
            letter = 14;
            break;
            
        case 'P':
            letter = 15;
            break;
            
        case 'Q':
            letter = 16;
            break;
            
        case 'R':
            letter = 17;
            break;
            
        case 'S':
            letter = 18;
            break;
            
        case 'T':
            letter = 19;
            break;
            
        case 'U':
            letter = 20;
            break;
            
        case 'V':
            letter = 21;
            break;
            
        case 'W':
            letter = 22;
            break;
            
        case 'X':
            letter = 23;
            break;
            
        case 'Y':
            letter = 24;
            break;
            
        case 'Z':
            letter = 25;
            break;
            
        default:
            letter = -1;
            break;
    }
    
    return letter;
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
