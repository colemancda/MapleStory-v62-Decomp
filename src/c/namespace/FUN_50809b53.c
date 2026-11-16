/* FUN_50809b53 - 0x50809b53 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50809b53(undefined4 *param_1)

{
  HMODULE pHVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)&PTR_s_Kernel32_dll_5081d378 - (int)param_1;
  iVar2 = 9;
  do {
    pHVar1 = LoadLibraryA(*(LPCSTR *)(iVar3 + (int)param_1));
    *param_1 = pHVar1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


