/* ptr_0080c053 - 0x0080c053 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0080c053(int param_1,UINT param_2,WPARAM param_3,int param_4,int param_5)

{
  int iVar1;
  HWND pHVar2;
  
  if (*(int *)(param_1 + 0x5dc) == 0) {
    iVar1 = FUN_00816342();
    if (iVar1 != 0) {
      pHVar2 = GetWindow(*(HWND *)(param_1 + 0x594),5);
      pHVar2 = GetWindow(pHVar2,5);
      pHVar2 = GetWindow(pHVar2,5);
      if (pHVar2 != (HWND)0x0) {
        SendMessageA(pHVar2,param_2,param_3,
                     param_4 - *(int *)(param_1 + 0x5b8) & 0xffffU ^
                     (param_5 - *(int *)(param_1 + 0x5b0)) * 0x10000);
      }
      GetFocus();
    }
  }
  return;
}


