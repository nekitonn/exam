#include <iostream>
#include <string>
using namespace std;


int main() {
    string Input;
    cout << "Type a word: ";
    cin >> Input;
    int count_Letter_e(string Input);
    int count_e = 0;
    int count_er = 0;
    for (int i = 0; Input[i] != '\0'; i++)
        if (Input[i] == 'e'){
            if (Input[i + 1] != 'r')
                count_er++;
        }
    for (int i = 0; Input[i] != '\0'; i++)
        if (Input[i] == 'e') count_e++;

    cout <<"Number of a without r: " <<count_er <<endl;
    cout <<"Number of e: " << count_e;
    return 0;
}
