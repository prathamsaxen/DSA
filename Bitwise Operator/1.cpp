#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Press \n1-> AND\n2-> OR\n3->NOT\n4->XOR" << endl;
    cin >> choice;
    int num1, num2;
    cout << "ENTER NUMBER 1 and NUMBER 2 :" << endl;
    cin >> num1 >> num2;
    if (choice == 1)
    {
        cout << "A & B :" << (num1 & num2) << endl;
    }
    else if (choice == 2)
    {
        cout << "A | B :" << (num1 | num2) << endl;
    }
    else if (choice == 3)
    {
        cout << "~A : " << ~num1 << endl;
        cout << "~B : " << ~num2 << endl;
    }
    else if (choice == 4)
    {
        cout << "A ^ B :" << (num1 ^ num2) << endl;
    }
    else
    {
        cout << "Selected Choice is not valid" << endl;
    }
    return 0;
}


// NOT OPERATOR ->
// 4 -> 100
// ~4 -> 1111111....11011
// PRint this ->
//  - (for the first bit is one)
// Now twos complement for the rest bits
// 000000....00100 (Ones)
//              +1
// 0000....0000101 (Twos Complement)
// -5
// 5-> 000000.....00000101
// ~5 -> 111111111...1111010
// Ones -> 000000....0000101
// Ṭwos -> ..............110