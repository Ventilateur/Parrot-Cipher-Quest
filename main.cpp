#include <iostream>

using namespace std;

int main()
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ. :/"; // [\]^
    int la = alphabet.length();
    string cipher = "GIMWRJXBDXPRTLCEZ]CFSBIDEQCANCFGSEEFAQOCSSUKRPQAQ^OKSOET";
    string key    = "BEBOPBEBOPBEBOPBEBOPBEBOPBEBOPBEBOPBEBOPBEBOPBEBOPBEBOPB";
    // key = 0x4245424F50 --> Hex ASCII code for B(42)E(45)B(42)O(4F)P(50) --> BEBOP
    string msg = "";

    for (unsigned int i = 0; i < cipher.length(); i++) {
        msg += alphabet[(cipher[i] - key[i] + (cipher[i] > key[i] ? 0 : la)) % la];
    }
    cout << msg << endl;
}
