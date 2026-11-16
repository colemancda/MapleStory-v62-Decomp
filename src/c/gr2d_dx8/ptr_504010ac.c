/* ptr_504010ac - 0x504010ac in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_504010ac(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar4 = FUN_504015ff();
  *(uint **)(unaff_EBP + -0x14) = puVar4;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  puVar6 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar4 != (uint *)0x0) {
    puVar6 = (undefined4 *)FUN_5040114d(puVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar6 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6[4] = uVar1;
    iVar5 = (**(code **)*puVar6)(puVar6,uVar3,uVar2);
    *(int *)(unaff_EBP + -0x10) = iVar5;
    if (iVar5 != 0) {
      FUN_50401175();
      FUN_5040170b(&DAT_50438f50,puVar6);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


