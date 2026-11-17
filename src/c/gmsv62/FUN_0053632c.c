/* FUN_0053632c - 0x0053632c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0053632c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0xb4);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0053570c(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_005379fe();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    puVar4 = (undefined4 *)FUN_0045b90e(unaff_EBP + 0xc);
    uVar5 = FUN_0087b6ab(*puVar4);
    **(undefined4 **)(unaff_EBP + 0x10) = uVar5;
    FUN_00414ebb();
    puVar4 = (undefined4 *)FUN_0045b90e(unaff_EBP + 0xc);
    uVar5 = FUN_0087b6ab(*puVar4);
    **(undefined4 **)(unaff_EBP + 0x14) = uVar5;
    FUN_00414ebb();
    **(undefined1 **)(unaff_EBP + 0x1c) = 1;
    uVar5 = FUN_0045b90e(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414f8b(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00537a1b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


