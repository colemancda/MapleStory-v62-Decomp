/* FUN_0076baf2 - 0x0076baf2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076baf2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  FUN_00879bb8();
  local_18 = 0x69c;
  uStack_1c = 0x76bb0f;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_18 = 0x76bb22;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar2 != 0) & uVar2 - 8;
  local_18 = 0x76bb49;
  FUN_004c26c4();
  local_18 = 0;
  uStack_1c = 1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_20;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22(&uStack_20,0x2cf);
  uVar4 = 0;
  uVar3 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(3,0);
  FUN_007eddac(uVar3,uVar4);
  local_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0xc;
  FUN_007edfe1(&DAT_00978474,4);
  local_18 = 0x76bb9a;
  FUN_007e6e3c();
  local_18 = 0x76bba2;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    local_18 = unaff_EBP + -0x10;
    uStack_1c = 0x76bbb3;
    FUN_004c2677();
    uStack_1c = 0x76bbba;
    FUN_00641b6c();
    local_18 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_1c = 0x76bbc6;
    uStack_1c = FUN_004f136e();
    *(int **)(unaff_EBP + -0x14) = &local_18;
    local_18 = 0;
    uStack_20 = 0x76bbd4;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_1c = 0x76bbdd;
    FUN_00429303();
    uStack_1c = 0x76bbe4;
    FUN_004eafcc();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_18 = 0x76bbf0;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_18 = 0x76bbfc;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


