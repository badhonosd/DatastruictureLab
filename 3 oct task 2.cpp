#include <iostream>
using namespace std;


string encode(string s, int j)
 {

    int len = s.length();
    for (int i = j; i < len; i++) {
        if (isalpha(s[i])) {
            s[i] += 3;
        }
    }

    return s;
}


string decode(string s)


 {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) {
            s[i] -= 3;
        }


    }

    return s;


}

int main()


{


    string s, encoded, decoded;
    int j;


    cout << "Enter a string: ";
    getline(cin, s);


    cout << "Enter an integer j: ";
    cin >> j;

    encoded = encode(s, j);
    cout << "Encoded String: " << encoded << endl;


    decoded = decode(encoded);
    cout << "Decoded String: " << decoded << endl;


    return 0;
}
