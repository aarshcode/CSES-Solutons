#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ct = 1;
    int max = 1;
    for (int i = 1; i < s.length(); i++){
        if (s[i] == s[i - 1]){
            ct++;
            if (max < ct){
                max = ct;
            }
        }
        else{
            ct = 1;
        }
    }
    cout << max << endl;
    return 0;
}
