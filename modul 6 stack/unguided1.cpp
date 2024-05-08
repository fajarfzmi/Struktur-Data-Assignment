// fajar farizqi azmi
// 2311102192
// if-11-e
#include <iostream>
#include <stack>
#include <string>
#include <locale>

using namespace std;


string removeNonAlphanumeric(string str) {
    string result = "";
    for (char c : str) {
        if (isalnum(c)) {
            result += tolower(c); 
        }
    }
    return result;
}


bool isPalindrome(string str) {
    stack<char> charStack;
    int length = str.length();

   
    for (int i = 0; i < length / 2; i++) {
        charStack.push(str[i]);
    }

    
    for (int i = (length + 1) / 2; i < length; i++) {
        if (charStack.top() != str[i]) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    
    string cleanedInput = removeNonAlphanumeric(input);

    if (isPalindrome(cleanedInput)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

 return 0;
}