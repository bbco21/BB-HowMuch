//////////////////
/*  BB-How Much */
//////////////////

// Creator:      Levente Bajnoczi
// Date:         2023.05.01
// Div.:         BB-Core
// Project Name: BB-HowMuch
// Project Code: BBH-001
//
// Desc:
/*   My only desire is having fun, so don't expect anything from this project :) */

#include <iostream>
#include <string>

using namespace std;



void displayHelpMessage() {
        cout << "This is the Help Page for BB-HowMuch" << endl;
}


int main(int argc, char* argv[]) {
    //cout<<"Hello World!"<<endl;


    /*
    cout<<argc<<" argumentumot adtal meg."<<endl<<endl;
    for (int i=0; i < argc; ++i)
        cout<<argv[i]<<endl;
    */

    

    double bytes;
    string shortHelp;
    string longHelp;
    shortHelp = "-h";
    longHelp = "--help";
    try
    {
        if (argc == 2 && argv[1] == shortHelp) {
            displayHelpMessage();
            return 0;
        }
        if (argc == 2 && argv[1] == longHelp) {
            displayHelpMessage();
            return 0;
        }
        if (argc == 2) {
            bytes = stod(argv[1]);
        }
        else
        {
            cout <<    "Wrong arguments. Please only give the required arguments"
            << endl << "You can find them in the documentation at cmdco.hu" << endl;
            return 0;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 0;
    }
    
    double KB;
    double MB;
    double GB;
    KB = bytes / 1024;
    MB = KB / 1024;
    GB = MB / 1024;

    cout <<     "Bytes:     " << bytes << endl;
    if (KB >= 0.1) {
        cout << "KiloBytes: " << KB << endl;
    }
    if (MB >= 0.1) {
        cout << "MegaBytes: " << MB << endl;
    }
    if (GB >= 0.1) {
        cout << "GigaBytes: " << GB << endl;
    }

    return 0;
}
