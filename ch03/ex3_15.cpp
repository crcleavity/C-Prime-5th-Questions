#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<string> v2;
    string i;
    while(cin >> i){
        v2.push_back(i);
    }
    cout<<v2[3]<<endl;
    return 0;
}