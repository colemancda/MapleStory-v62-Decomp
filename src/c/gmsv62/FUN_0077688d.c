/* FUN_0077688d - 0x0077688d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0077688d(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 + -6;
  param_4 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x584) + 0x38) * 0x21 + -0x71 + param_4;
  iVar3 = param_2 * 0x80 + param_1 + 0x80;
  if ((*(int *)(param_2 * 0x80 + 0x60 + param_1) != 0) &&
     (iVar2 = (*DAT_0097b57c)(iVar3,iVar1,param_4), iVar2 != 0)) {
    param_3 = 1;
    do {
      iVar3 = iVar3 + 0x10;
      iVar2 = (*DAT_0097b57c)(iVar3,iVar1,param_4);
      if (iVar2 != 0) {
        FUN_00776924(param_2,param_3);
        FUN_0077f351();
        FUN_008161f1(0);
        return;
      }
      param_3 = param_3 + 1;
    } while (param_3 < 5);
  }
  return;
}


