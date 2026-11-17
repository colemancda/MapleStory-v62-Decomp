/* FUN_0064174a - 0x0064174a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0064174a(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  
  FUN_00879bb8();
  iStack_30 = unaff_EBP + -0x10;
  uStack_34 = 0x641768;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_30 = 0x641775;
  uVar1 = FUN_0042452b();
  iStack_30 = 0x641780;
  uVar2 = FUN_0042452b();
  iStack_30 = 0x69c;
  *(uint *)(unaff_EBP + 0x10) = uVar2 & 0xff;
  uStack_34 = 0x641795;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    iStack_30 = 0;
  }
  else {
    iStack_30 = 0x6417a7;
    iStack_30 = FUN_007e62e9();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_34 = 0x6417b9;
  iVar3 = FUN_005154ad();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 4);
  iStack_30 = 0x6417c7;
  FUN_004c26c4();
  iStack_30 = 0;
  uStack_34 = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450368(unaff_EBP + -0x10);
  uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004c2677(0,uVar5);
  FUN_007eddac(uVar4,uVar5);
  iStack_30 = *(undefined4 *)(unaff_EBP + 0x10);
  uStack_38 = 0x6417ff;
  uStack_34 = uVar1 & 0xff;
  FUN_007edf11();
  iStack_30 = 0x641807;
  FUN_007e6e3c();
  iStack_30 = 0x64180f;
  iVar3 = FUN_004bc6a2();
  iStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0x38;
  FUN_0060142b();
  iStack_30 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_34 = 0x64182a;
  FUN_00457cda();
  if (iVar3 == 0x2001) {
    iStack_30 = 1;
  }
  else {
    iStack_30 = (iVar3 == 0x2000) - 1;
  }
  uStack_34 = 0x64184c;
  FUN_00457cda();
  iStack_30 = unaff_EBP + -0x2c;
  uStack_34 = 0x64185b;
  FUN_004751b2();
  iStack_30 = 0x641862;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_30 = 0x64186e;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_30 = 0x641879;
  FUN_004c26e1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_30 = 0x641885;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


