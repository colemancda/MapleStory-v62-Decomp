/* FUN_0082812c - 0x0082812c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0082812c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*DAT_0097b4c0)(param_2);
  iVar2 = (*DAT_0097b3fc)(0x42,iVar1 + 1);
  if (iVar2 != 0) {
    iVar3 = (*DAT_0097b404)(iVar2);
    if (iVar3 == 0) {
      (*DAT_0097b400)(iVar2);
    }
    else {
      (*DAT_0097b4b8)(iVar3,param_2);
      *(undefined1 *)(iVar1 + iVar3) = 0;
      (*DAT_0097b408)(iVar2);
      iVar1 = (*DAT_0097b5fc)(*(undefined4 *)(param_1 + 4));
      if (iVar1 != 0) {
        (*DAT_0097b5f8)();
        (*DAT_0097b5f4)(1,iVar2);
        (*DAT_0097b5f0)();
      }
    }
  }
  return;
}


