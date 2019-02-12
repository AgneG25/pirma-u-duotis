#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(){

    int N;
    string name;
    string greeting;

    cout << "Koks jusu vardas: ";
    cin >> name;
    cout << "Iveskite remelio dydi (nuo 1 iki 10): ";
    cin >> N;

    if(name.back() == 's') 
        greeting = "Sveikas, " + name + "!";
    else 
        greeting = "Sveika, " + name + "!";

    int len = greeting.length();

    for(int i = 0; i < N*2 + 2 + len; i++) 
        cout << "*";
    cout << endl;

    for (int i = 0; i < N; i++){
        cout << "*";
        for(int j = 0; j < N*2 + len; j++) cout << " ";
        cout << "*" << endl;
    }

    cout << "*";
    for(int j = 0; j < N; j++) cout << " ";
    cout << greeting;
    for(int j = 0; j < N; j++) cout << " ";
    cout << "*" << endl;

    for (int i = 0; i < N; i++){
        cout << "*";
        for(int j = 0; j < N*2 + len; j++) cout << " ";
        cout << "*" << endl;
    }

    for(int i = 0; i < N*2 + 2 + len; i++) 
        cout << "*";
    cout << endl;
    
    return 0;
}