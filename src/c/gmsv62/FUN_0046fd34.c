/* FUN_0046fd34 - 0x0046fd34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0046fd34(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (*(int *)(unaff_EBP + 0x10) == -1) {
    iVar5 = *extraout_ECX;
    iVar3 = *(int *)(unaff_EBP + 0xc);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_004184ca(iVar5 + iVar3 * 2,0xffffffff);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar5 = *(int *)(unaff_EBP + 0xc);
    iVar4 = *(int *)(unaff_EBP + 0x10) - iVar5;
    iVar3 = (iVar5 * 0x7fffffff + *(int *)(unaff_EBP + 0x10)) * 2;
    iVar5 = *extraout_ECX + iVar5 * 2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar1 = FUN_0041903e(iVar4,0);
    FUN_00879c20(uVar1,iVar5,iVar3);
    FUN_004190dc(iVar4);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00419192(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


