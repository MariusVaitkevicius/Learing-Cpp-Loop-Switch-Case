#include <iostream>

using namespace std;

void show_menu() {
   cout << endl;
   cout << "1 - 1 command" << endl;     // we present the choices
   cout << "2 - 2 command" << endl;
   cout << "Q, q - quit" << endl;
   cout << endl;
}

void command1() {
   cout << "command 1 is executed";    // choice 1 (case '1': command1())
   cout << endl;
}

void command2() {
   cout << "command 2 is executed";    //  choice 2 (case '2': command2())
   cout << endl;
}

int main() {
    char x;
    while(1) {
        show_menu();
        cin >> x;
        switch(x) {
        case '1': command1(); break;
        case '2': command2(); break;
        case 'Q':                        // when we want to quit
        case 'q':                        // "Q, q - quit"
            return 0;
            default: cout << "Bad command";  // if we type it wrong, then we get an answer "Bad command"
                     cout << endl;
        }
    }
    return 0;
}
