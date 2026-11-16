/* ptr_50403b49 - 0x50403b49 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50403b49(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x324);
    uVar1 = (*DAT_50438e0c)();
    *(undefined4 *)(param_1 + 0x324) = uVar1;
    if (*(int *)(param_1 + 0x32c) != 0) {
      *(undefined4 *)(param_1 + 0x314) = 0;
      *(undefined4 *)(param_1 + 0x318) = 0;
      *(undefined4 *)(param_1 + 0x31c) = 0;
      *(undefined4 *)(param_1 + 800) = 0;
      *(undefined4 *)(param_1 + 0x32c) = 0;
    }
    if (*(int *)(param_1 + 0x334) != 0) {
      iVar3 = *(int *)(param_1 + 0x324);
      *(undefined4 *)(param_1 + 0x334) = 0;
    }
    if (*(int *)(param_1 + 0x330) == 0) {
      uVar2 = FUN_50403be8((void *)(param_1 + 0x274),*(int *)(param_1 + 0x324) - iVar3);
    }
    else {
      uVar2 = *(int *)(param_1 + 0x324) - iVar3;
    }
    *param_2 = *(int *)(param_1 + 0x328) + uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


