/* FUN_5100239a - 0x5100239a in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_5100239a(undefined4 *param_1)

{
  HMODULE pHVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)&PTR_s_Kernel32_dll_510080e8 - (int)param_1;
  iVar2 = 9;
  do {
    pHVar1 = LoadLibraryA(*(LPCSTR *)(iVar3 + (int)param_1));
    *param_1 = pHVar1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


