#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ch;
    cin >> ch;
    int i = 0;
    do {
        if (ch[i] == ch[i + 1]) {
            ch.erase(i, 2);
            i = 0;
        }
        else {
            i++;
        }


    } while (i < ch.length());
    cout << ch;

    return 0;

}

