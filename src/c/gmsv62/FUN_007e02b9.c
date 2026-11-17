/* FUN_007e02b9 - 0x007e02b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007e02b9(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00879bb8();
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0xa4) + 0x48);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 == 0) {
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0073d725(unaff_EBP + -0x14);
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar1 + -4);
    }
    for (uVar6 = iVar4 - 3; (iVar1 != 0 && (uVar6 < *(uint *)(iVar1 + -4))); uVar6 = uVar6 + 1) {
      piVar2 = (int *)FUN_004653c5(unaff_EBP + -0x18,&DAT_00964314);
      iVar1 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar1 + -4);
      }
      FUN_0045efbb(iVar1,uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      iVar1 = *(int *)(unaff_EBP + -0x14);
    }
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0045f10c();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


