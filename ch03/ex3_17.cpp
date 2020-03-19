#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<string> words;
    string s;
    while (cin >> s)
    {
        words.push_back(s);
    }
    for (auto &str : words){
        for (auto &c : str)
        {
            c = toupper(c);
        }
    }

    for (auto i : words)
    {
        cout << i << endl;
    }
    return 0;
}