#include "def.h"

void PatchEx(BYTE* dst, BYTE* src, unsigned int size, HANDLE hProcess);
void NopEx(BYTE* dst, unsigned int size, HANDLE hProcess);
DWORD GetProcId(const wchar_t* procName);
uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName);
uintptr_t FindDMAddy(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int>);