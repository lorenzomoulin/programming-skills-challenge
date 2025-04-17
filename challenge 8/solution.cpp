#include <iostream>

using namespace std;

int length(char *str) {
    int i = 0;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}

int main () {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Length of the string: " << length(str) << endl;
    return 0;
}