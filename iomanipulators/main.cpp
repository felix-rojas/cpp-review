/* Playing with IO manipulators */

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    double a = 10.000000000002;

    cout << "Using showpoint on double: " << showpoint << a << endl;
    cout << endl;
    cout << "Using noshowpoint on same double: " << noshowpoint << a << endl;
    cout << endl;
    cout << "Using scientific on same double: " << scientific << a << endl;
    cout << endl;

    // silly headers
    cout << "Using setfill('-') and setw(50) on same double: " << endl; 
    cout << setfill('-') << setw(80) << a << endl;
}