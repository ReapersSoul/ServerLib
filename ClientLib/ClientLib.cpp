// ClientLib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../WinNetlib/Multi/Multi_NetworkHandlerClient.h"

Multi_NetworkHandlerClient NH;

void recv(NamedSOCKET* ns) {
    while (ns->connected) {
        std::string i = "slut";
        NH.SendDataT<std::string>(i, ns);

        NH.RecvDataT<std::string>(&i, ns);
        printf("<%s>: %s", ns->name.c_str(), i.c_str());
    }
}

int main()
{
    NH.RecvFunct = &recv;
    NH.SetName("client");
    if (NH.DefaultInitConnect()) {
        
    }
    Sleep(3000);
    system("pause");
    NH.~Multi_NetworkHandlerClient();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
