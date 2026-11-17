/* FUN_006493a6 - 0x006493a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006493a6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  uStack_18 = 0x69c;
  uStack_1c = 0x6493c4;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  uVar3 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_18 = 0x6493d7;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
  uStack_18 = 0x6493fe;
  FUN_004c26c4();
  uStack_18 = 0;
  uStack_1c = 1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_20;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0045f0f3(*(undefined4 *)(unaff_EBP + 8),0xffffffff);
  uVar5 = 0;
  uVar4 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(2,0);
  FUN_007eddac(uVar4,uVar5);
  uStack_18 = 0;
  uStack_1c = 10;
  uStack_20 = 0;
  FUN_007edf4a(*(undefined4 *)(unaff_EBP + 0xc),1,*(undefined4 *)(unaff_EBP + 0x10));
  uStack_18 = 0x649446;
  FUN_007e6e3c();
  uStack_18 = 0x64944e;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xbc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_18 = 0x649467;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


