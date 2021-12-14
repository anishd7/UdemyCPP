#include <iostream>
using namespace std;

int main1()
{
    string input;
    cin >> input;
    char curr = input[0];
    int l = 1;
    for (int i = 1; i < (int)input.size(); ++i) {
        if (input[i - 1] != input[i]) {
            cout << curr << l << "_";
            curr = input[i];
            l = 1;
        }
        else {
            ++l;
        }
    }
    // instead of having the below line as special handling for the last group case,
    // you can instead add an extra special character (like '$') to the input string.
    // that way you can maintain the same logic in the loop to handle all cases and you wont need this extra line.
    cout << curr << l << endl;
    return 0;
}