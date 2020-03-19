#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    while (cin>>s1>>s2)
    {
        if (s1 == s2){
            cout<<"The two sentences are the same"<<endl;
        }
        else{
            cout<<"The larger sentence is "<<((s1 > s2)? s1:s2);
        }
    }
    return 0;
}