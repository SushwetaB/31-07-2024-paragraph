#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    istringstream ss(paragraph);
    map<string, int> wordFrequency;

    string word;
    while (ss >> word) {
        for (char& c : word) {
            c = tolower(c);
        }
        wordFrequency[word]++;
    }
    cout << "\nWord Frequencies:\n";
    for (const auto& entry : wordFrequency) {
        cout << entry.first << ": " << entry.second << endl;
    }
    return 0;
}

