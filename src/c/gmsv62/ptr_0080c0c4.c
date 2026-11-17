/* ptr_0080c0c4 - 0x0080c0c4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_0080c0c4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  HWND pHVar3;
  
  if (*(int *)(param_1 + 0x5dc) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x594);
    if (param_2 == 0) {
      EnableWindow((HWND)*puVar1,0);
      pHVar3 = GetWindow((HWND)*puVar1,5);
      pHVar3 = GetWindow(pHVar3,5);
      pHVar3 = GetWindow(pHVar3,5);
      if (pHVar3 != (HWND)0x0) {
        EnableWindow(pHVar3,0);
      }
      (*DAT_0097b55c)(*(undefined4 *)(DAT_00973cd8 + 4));
    }
    else {
      EnableWindow((HWND)*puVar1,1);
      pHVar3 = GetWindow((HWND)*puVar1,5);
      pHVar3 = GetWindow(pHVar3,5);
      pHVar3 = GetWindow(pHVar3,5);
      if (pHVar3 != (HWND)0x0) {
        EnableWindow(pHVar3,1);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


