/* FUN_00641896 - 0x00641896 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00641896(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  iStack_2c = unaff_EBP + -0x10;
  uStack_30 = 0x6418b4;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_2c = 0x69c;
  uStack_30 = 0x6418c7;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iStack_2c = 0;
  }
  else {
    iStack_2c = 0x6418d9;
    iStack_2c = FUN_007e62e9();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_30 = 0x6418ec;
  iVar2 = FUN_005154ad();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 4);
  iStack_2c = 0x6418fa;
  FUN_004c26c4();
  iVar2 = *(int *)(unaff_EBP + 0x18);
  uStack_30 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 **)(unaff_EBP + 0x10) = &uStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_2c = iVar2;
  FUN_00450368(unaff_EBP + -0x10);
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar4 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004c2677(1,uVar3);
  FUN_007eddac(uVar4,uVar3);
  iStack_2c = 0x641934;
  FUN_007edf40();
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  *(int *)(*(int *)(unaff_EBP + -0x14) + 0x698) = iVar1;
  iStack_2c = 0x641948;
  FUN_007e6e3c();
  iStack_2c = 0x641950;
  uVar3 = FUN_004bc6a2();
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0x38;
  *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
  FUN_0060142b();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    iStack_2c = (-(uint)(iVar2 != 0) & 0xb) + 1;
  }
  else {
    iStack_2c = 0xd;
  }
  uStack_30 = 0x64197f;
  FUN_00457cda();
  if (*(int *)(unaff_EBP + 0x10) == 6) {
    iStack_2c = 1;
  }
  else {
    iStack_2c = (*(int *)(unaff_EBP + 0x10) == 7) - 1;
  }
  uStack_30 = 0x64199d;
  FUN_00457cda();
  iStack_2c = unaff_EBP + -0x28;
  uStack_30 = 0x6419ac;
  FUN_004751b2();
  iStack_2c = 0x6419b3;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_2c = 0x6419bf;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_2c = 0x6419cb;
  FUN_004c26e1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_2c = 0x6419d7;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


