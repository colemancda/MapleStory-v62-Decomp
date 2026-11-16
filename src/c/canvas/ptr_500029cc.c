/* ptr_500029cc - 0x500029cc in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 ptr_500029cc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar4 = FUN_500023f6();
  *(uint **)(unaff_EBP + -0x14) = puVar4;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  puVar6 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar4 != (uint *)0x0) {
    puVar6 = (undefined4 *)FUN_50002a91(puVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar6 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
    puVar6[4] = uVar1;
    iVar5 = (**(code **)*puVar6)(puVar6,uVar3,uVar2);
    *(int *)(unaff_EBP + -0x10) = iVar5;
    if (iVar5 != 0) {
      FUN_50002ab9();
      FUN_5000257e(&DAT_50081f98,puVar6);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


