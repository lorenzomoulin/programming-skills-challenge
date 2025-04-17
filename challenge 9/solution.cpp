#include <iostream>

using namespace std;

int length(char *str) {
    int i = 0;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}

void reverse_with_xor(char *s, int start, int end) {
    while(start < end) {
        s[start] = s[start] ^ s[end];
        s[end] = s[start] ^ s[end];
        s[start] = s[start] ^ s[end];
        start++;
        end--;
    }
}

int main () {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    reverse_with_xor(str, 0, length(str)-1);
    cout << "Reverse string: " << str << endl;
    return 0;
}