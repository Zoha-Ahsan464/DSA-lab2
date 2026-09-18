#include <iostream>
using namespace std;
int main(){
    //dynamically allocating memory to string
    string* s = new string;
    cout << "Enter the string to reverse it: \n";
    //taking string input
    getline(cin, *s);
    cout << "\nReversed string: \n";
    for (int i=s->size()-1; i>=0; i--){
        cout << (*s)[i];
    }
    delete s;
    return 0;
}