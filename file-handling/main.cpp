/* Playing with IO manipulators & file manipulation */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* read a line from input file and one from console
   concatenate them to output file
   argv[1] input file name
   argv[2] output file name
   argc is number of elements
*/

int main(int argc, char* argv[]) 
{
    // validate use, else show how
    if (argc < 3) {
        cerr << "Usage test_file <input_file> <output_file>\n";
        return 1;
    }

    // def input file stream
    ifstream ins(argv[1]);
    if(!ins) {
        cerr << "Failed to open " << argv[1] << " for input\n";
        return 1;
    }

    // def output file stream
    ofstream outs(argv[2]);
    if(!ins) {
        cerr << "Failed to open " << argv[1] << " for out<put\n";
        return 1;
    }

    // read the words and write them to output
    string first, second;
    while (ins >> first){
        cout << "Type a word to follow " << first << ": ";
        cin >> second;
        outs << first << ", " << second << endl;
    }

    // close files
    ins.close();
    outs.close();
    return 0;
}