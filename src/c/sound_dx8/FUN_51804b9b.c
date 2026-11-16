/* FUN_51804b9b - 0x51804b9b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51804b9b(undefined4 *param_1)

{
  HMODULE pHVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)&PTR_s_Kernel32_dll_5181e3b8 - (int)param_1;
  iVar2 = 9;
  do {
    pHVar1 = LoadLibraryA(*(LPCSTR *)(iVar3 + (int)param_1));
    *param_1 = pHVar1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


