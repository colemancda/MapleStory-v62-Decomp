/* FUN_0076f974 - 0x0076f974 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0076f974(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_2 = param_2 + -6;
  param_3 = param_4 * 0x21 + -0x35 + param_3;
  iVar2 = 0;
  for (uVar3 = 0; (iVar1 = *(int *)(param_1 + 0x28), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
      uVar3 = uVar3 + 1) {
    iVar1 = (*DAT_0097b57c)(iVar2 + 0x1c + iVar1,param_2,param_3);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      iVar1 = uVar3 * 0x50;
      goto LAB_0076fa37;
    }
    iVar2 = iVar2 + 0x50;
  }
  iVar2 = 0;
  for (uVar3 = 0; (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
      uVar3 = uVar3 + 1) {
    iVar1 = (*DAT_0097b57c)(iVar2 + 0x1c + iVar1,param_2,param_3);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x30);
      iVar1 = uVar3 * 0x50;
      goto LAB_0076fa37;
    }
    iVar2 = iVar2 + 0x50;
  }
  uVar3 = 0;
  iVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar3)) {
      return 0;
    }
    iVar1 = (*DAT_0097b57c)(iVar2 + 0x1c + iVar1,param_2,param_3);
    if (iVar1 != 0) break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x50;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar1 = uVar3 * 0x50;
LAB_0076fa37:
  return *(undefined4 *)(iVar1 + iVar2);
}


