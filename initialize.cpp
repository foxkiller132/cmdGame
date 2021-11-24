#include "initialize.h"
#include <fstream>
#include <iostream>
using namespace std;

Initialize::Initialize(){
}

Initialize::~Initialize(){
}

void Initialize::OnOpen(char screen[100][50]){
    system("cls");

    fstream mFile("data.txt");
    if(mFile) {
        cout << "Data File Found, Initializing.";

        for (int y = 0; y < 50; y++) {
            for (int x = 0; x < 100; x++) {
                mFile >> screen[x][y];
            }
        }
        mFile.close();
    }
    else {
        cout << "Performing First Time Setup\n";
        mFile.close();
        fstream newFile("data.txt");
        newFile.open("data.txt", ios::out);


        for (int y = 0; y < 50; y++) {
            for (int x = 0; x < 100; x++) {
                newFile << "o ";
            }
            newFile << "\n";
        }
        newFile.close();
        ifstream existFile;
        existFile.open("data.txt");

        for (int y = 0; y < 50; y++) {
            for (int x = 0; x < 100; x++) {
                existFile >> screen[x][y];
            }
        }
        existFile.close();
    }

    system("cls");
}
