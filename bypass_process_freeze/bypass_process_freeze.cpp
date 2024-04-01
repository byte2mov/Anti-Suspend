#include <iostream>
#include <Windows.h>
#include <thread>

class c_globals {
public:
    HANDLE hThread; // thread handle we create.
    int count = 128; // amount of times we suspend

    // class to store all our information.
}; static c_globals* globals = new c_globals();

int main() {
    
    globals->hThread = CreateThread(NULL, 0, 0, NULL, 0, NULL); // dummy thread to base detections from.

    DebugActiveProcessStop(GetCurrentProcessId()); // self explanatory 

    for (size_t i = 0; i < globals->count; ++i) {
        SuspendThread(globals->hThread); // max out the limit.
    }

    while (globals->hThread != reinterpret_cast<HANDLE>((DWORD)-1))
    {
        if (SuspendThread(globals->hThread) != (DWORD)-1) {
            std::cout << "Anti Suspend Activated. \n" << std::endl;
            std::cin.get(); // here i chose to just stop everything, in a real case scenario you would send a notifaction or kill the program.
        }
        std::cout << "we are good. \n"; // here you do nothing. || real case scenario this should be threaded.
    }

    CloseHandle(globals->hThread);
}
