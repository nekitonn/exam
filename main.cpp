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
        if (Input[i] == 'a'){
            if (Input[i + 1] != 'b')
                count_er++;
        }
}
