/* FUN_00772b34 - 0x00772b34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00772b34(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 + -6;
  iVar2 = (uint)(param_2 == 0) * 0x7c;
  param_4 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x584) + 0x38) * 0x21 + -0x71 + param_4;
  iVar3 = iVar2 + param_1 + 0x84;
  if ((*(int *)(iVar2 + 100 + param_1) != 0) &&
     (iVar2 = (*DAT_0097b57c)(iVar3,iVar1,param_4), iVar2 != 0)) {
    param_3 = 1;
    do {
      iVar3 = iVar3 + 0x10;
      iVar2 = (*DAT_0097b57c)(iVar3,iVar1,param_4);
      if (iVar2 != 0) {
        FUN_00772bd0(param_2,param_3);
        FUN_0077f304();
        FUN_008161f1(0);
        return;
      }
      param_3 = param_3 + 1;
    } while (param_3 < 5);
  }
  return;
}


