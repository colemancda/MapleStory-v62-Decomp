/* FUN_00871280 - 0x00871280 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00871280(DWORD param_1)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = param_1;
  BVar1 = VirtualProtect(*(LPVOID *)(param_1 + 0x1c),*(SIZE_T *)(param_1 + 0xc),2,&local_4);
  *(BOOL *)(param_1 + 0x14) = BVar1;
  return;
}


