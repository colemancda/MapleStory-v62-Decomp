/* FUN_5000a932 - 0x5000a932 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5000a932(undefined4 *param_1)

{
  HMODULE pHVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)&PTR_s_Kernel32_dll_50018408 - (int)param_1;
  iVar2 = 9;
  do {
    pHVar1 = LoadLibraryA(*(LPCSTR *)(iVar3 + (int)param_1));
    *param_1 = pHVar1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


