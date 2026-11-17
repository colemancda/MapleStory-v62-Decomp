/* FUN_0080c1c2 - 0x0080c1c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0080c1c2(int param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0x5e0) == 0) {
    FUN_00815de0();
    EnableWindow(*(HWND *)(param_1 + 0x598),1);
    pHVar1 = GetWindow(*(HWND *)(param_1 + 0x598),5);
    pHVar1 = GetWindow(pHVar1,5);
    pHVar1 = GetWindow(pHVar1,5);
    if (pHVar1 != (HWND)0x0) {
      EnableWindow(pHVar1,1);
    }
  }
  return;
}


