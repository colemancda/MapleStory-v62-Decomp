/* FUN_004744d2 - 0x004744d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004744d2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00474d57(1);
  iVar2 = (*DAT_0097b49c)();
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != -1) {
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (*DAT_0097b388)(iVar3);
    }
    if ((iVar3 == 0) || (iVar1 == 0)) {
      iVar1 = 0;
      if (iVar2 == 0) {
        iVar2 = (*DAT_0097b49c)();
      }
    }
    else {
      iVar1 = 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  (*DAT_0097b4a0)(iVar2);
  return iVar1;
}


