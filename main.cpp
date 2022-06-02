#include "def.h"

//this example if for changing valuse as a simple trainer for offline games!!
// this wont help u make esp this if for when your learning simple c++ & cheat development
// if u need help dm me Asmodeuš#6666 or join my discord server discord.gg/juul


using namespace std;
HWND hwnd = GetWindowA(NULL, "Game"); // change to game handle 


//add offsets here
// examples

inline int AmmoOffset = 0x345345; // your offsets
inline int HealthOffset = 0x45345;// your offsets

inline int NewAmmo = 199;// your offsets
inline int NewHealth = 24034;// your offsets

inline int Player = 0x3454;// your offsets

DWORD procId = GetProcId(L"Game.exe") // change for your game
int main()
{

    SetConsoleTitle("Basic Cheat Table Helper || discord.gg/juul");

    if(hwnd == NULL)
    {
        cout << "Could Not Find Game Window\n";
        Sleep(2500);
        Exit(0);
    }
    else{

        if(procId)
        {
            hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procId); 
            moduleBase = GetModuleBaseAddress(procId, "game.exe"); // change the exe name to the games exe name

            localplayer = moduleBase + 0x3Afds // change this to your offset for local player
        }
        else{
            cout << "Process Was Not Found\n";
            Sleep(2500);
            Exit(0);
        }

        cout << "Cheat Helper || Made By Asmodeuš#6666\n"; // your menu
        cout << "\n\n\n";// your menu
        cout << "Join For Cheats & Help https://discord.gg/juul\n";// your menu
        cout << "\n\n";// your menu
        cout << "[F1] Unlimited Ammo\n";// your menu
        cout << "[F2] Unlimited Health\n";// your menu
    

        if(GetAsynicKeyState(VK_F1) 0x1) // your options here
        {
            ReadProcessMemory(hProcess, (BYTE*)AmmoOffset, &AmmoOffset sizeof(AmmoOffset), 0);
            WriteProcessMemory(hProcess, (BYTE*)AmmoOffset, &NewAmmo sizeof(NewAmmo), 0);
            ReadProcessMemory(hProcess, (BYTE*)NewAmmo, &NewAmmo sizeof(NewAmmo), 0);
            return menu();
        }

        if(GetAsynicKeyState(VK_F2) 0x1)// your options here
        {
            ReadProcessMemory(hProcess, (BYTE*)HealthOffset, &HealthOffset sizeof(HealthOffset), 0); //reading the offset health to get it 
            WriteProcessMemory(hProcess, (BYTE*)HealthOffset, &NewHealth sizeof(NewHealth), 0); // changing the offset health to our new one aka NewHealth
            ReadProcessMemory(hProcess, (BYTE*)NewHealth, &NewHealth sizeof(NewHealth), 0); // reading our new health aka the NewHealth
            return menu();
        }
    } return 0;
}

