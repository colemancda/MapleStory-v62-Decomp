/* FUN_00533470 - 0x00533470 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00533470(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0xac);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005326f5(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_005379cb();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_004bc6a2();
  *(int *)(unaff_EBP + 0xc) = iVar1;
  if (iVar1 == 1) {
    puVar4 = (undefined4 *)FUN_0045b90e(unaff_EBP + 0x10);
    uVar5 = FUN_0087b6ab(*puVar4);
    FUN_00414ebb();
    puVar4 = (undefined4 *)FUN_0045b90e(unaff_EBP + 0x10);
    uVar6 = FUN_0087b6ab(*puVar4);
    FUN_00414ebb();
    **(undefined4 **)(unaff_EBP + 0x14) = uVar6;
    **(undefined4 **)(unaff_EBP + 0x18) = uVar5;
    **(undefined1 **)(unaff_EBP + 0x1c) = 7;
    **(undefined1 **)(unaff_EBP + 0x20) = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005379e8();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0xc);
}


