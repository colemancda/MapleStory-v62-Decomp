/* FUN_00641d12 - 0x00641d12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00641d12(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  iStack_34 = unaff_EBP + 0x10;
  uStack_38 = 0x641d32;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_34 = 0x641d3e;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  iStack_34 = 0x641d48;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_34 = 0x641d52;
  uVar1 = FUN_0042459a();
  iStack_34 = 0x69c;
  uStack_38 = 0x641d63;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iStack_34 = 0;
  }
  else {
    iStack_34 = 0x641d75;
    iStack_34 = FUN_007e62e9();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_38 = 0x641d87;
  iVar2 = FUN_005154ad();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 4);
  iStack_34 = 0x641d95;
  FUN_004c26c4();
  iStack_34 = 0;
  uStack_38 = 0;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450368(unaff_EBP + 0x10);
  uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar3 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004c2677(2,uVar4);
  FUN_007eddac(uVar3,uVar4);
  iStack_34 = 0;
  uStack_38 = 10;
  uStack_3c = 0;
  FUN_007edf4a(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),uVar1);
  iStack_34 = 0x641ddd;
  FUN_007e6e3c();
  iStack_34 = 0x641de5;
  iVar2 = FUN_004bc6a2();
  iStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0x38;
  FUN_0060142b();
  iStack_34 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_38 = 0x641e01;
  FUN_00457cda();
  if (iVar2 == 1) {
    uStack_38 = 0x641e0f;
    iStack_34 = iVar2;
    FUN_00457cda();
    iStack_34 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xbc);
    uStack_38 = 0x641e20;
    FUN_00457d37();
  }
  else {
    iStack_34 = 0;
    uStack_38 = 0x641e2b;
    FUN_00457cda();
  }
  iStack_34 = unaff_EBP + -0x30;
  uStack_38 = 0x641e3a;
  FUN_004751b2();
  iStack_34 = 0x641e41;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_34 = 0x641e4d;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_34 = 0x641e58;
  FUN_004c26e1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_34 = 0x641e64;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


