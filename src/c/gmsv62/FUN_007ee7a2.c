/* FUN_007ee7a2 - 0x007ee7a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007ee7a2(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  if (DAT_00973abc != 0) {
    iStack_18 = 0x7ee7c2;
    FUN_00867060();
  }
  iStack_18 = 0x69c;
  uStack_1c = 0x7ee7d1;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_18 = 0x7ee7e2;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
  iStack_18 = 0x7ee809;
  FUN_004c26c4();
  iStack_18 = 0;
  uStack_1c = 1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_20;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22(&uStack_20,0x327);
  uVar6 = 0;
  uVar5 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(3,0);
  FUN_007eddac(uVar5,uVar6);
  iStack_18 = 0;
  uStack_1c = 1;
  uStack_20 = 8;
  FUN_007edfe1(&DAT_00978474,8);
  iStack_18 = 0x7ee857;
  FUN_007e6e3c();
  iStack_18 = 0x7ee85f;
  uVar5 = FUN_004bc6a2();
  bVar4 = DAT_00973abc != 0;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  if (bVar4) {
    iStack_18 = 0x7ee871;
    FUN_00867190();
  }
  if (*(int *)(unaff_EBP + -0x10) == 1) {
    iStack_18 = unaff_EBP + -0x10;
    uStack_1c = 0x7ee893;
    puVar3 = (undefined4 *)FUN_00641b6c();
    iStack_18 = *puVar3;
    uStack_1c = 0x7ee89a;
    uVar5 = FUN_0087b6ab();
    iStack_18 = 0x7ee8a5;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_18 = 0x7ee8b1;
    FUN_004c26e1();
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_18 = 0x7ee882;
    FUN_004c26e1();
    uVar5 = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


