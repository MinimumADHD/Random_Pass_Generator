#include <iostream>
#include <string>
#include <random>
#include <fstream>

using namespace std;

static string alphabet = "ABCDEFGHILMNOPQRSTUVWXYZabcdefghilmnopqrstuvwxyz";
static string numberString = "0987654321";
static string specialChars = "_-!?";

int main() {
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> alphabetSizeRand(0, alphabet.size() - 1);
    uniform_int_distribution<int> numberSizeRand(0, numberString.size() - 1);
    uniform_int_distribution<int> specialSizeRand(0, specialChars.size() - 1);
    string FileName;
    string finalPassWord = "";
    cout << "Insert the website name!" << endl;
    getline(cin, FileName);

    for (int i = 0; i < 8; i++) {
        int randomIndex = alphabetSizeRand(generator);
        finalPassWord += alphabet.at(randomIndex);
    }
    int randomIndexNumber = numberSizeRand(generator);
    int randomIndexSpecial = specialSizeRand(generator);
    finalPassWord += specialChars.at(randomIndexSpecial);
    finalPassWord += numberString.at(randomIndexNumber);

    cout << "Your password for "<< FileName << " is: " << finalPassWord << endl;

    ofstream OutPutFile (FileName+".txt");

    OutPutFile << "PASSWORD FOR "<<FileName<<": "<<finalPassWord<<endl;

    OutPutFile.close();
}