//To find the consonants in a give charachter array
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {

            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
                str[i] != 'o' && str[i] != 'u' &&
                str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
                str[i] != 'O' && str[i] != 'U') {

                count++;
            }
        }
    }

    cout << "Number of consonants = " << count;

    return 0;
}