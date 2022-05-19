#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void test(string str){
    string word = "";
    vector<string> l;
    for(auto x : str){
        if ( x==' '){
            cout << word << endl;
            word = "";
        } else {
            word = word + x;
        }
        l.push_back(word);
    }
    //cout << l;

}

int main() {
   string s("I hate broccoli");
   test(s);
}