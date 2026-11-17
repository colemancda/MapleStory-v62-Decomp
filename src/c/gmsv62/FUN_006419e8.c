/* FUN_006419e8 - 0x006419e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006419e8(void)

{
  short sVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  iStack_34 = unaff_EBP + -0x10;
  puStack_38 = (undefined1 *)0x641a08;
  FUN_0045cdbc();
  iStack_34 = unaff_EBP + 0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_38 = (undefined1 *)0x641a18;
  FUN_0045cdbc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_34 = 0x641a23;
  sVar1 = FUN_00424561();
  *(int *)(unaff_EBP + -0x14) = (int)sVar1;
  iStack_34 = 0x641a30;
  sVar1 = FUN_00424561();
  iStack_34 = 0x69c;
  puStack_38 = (undefined1 *)0x641a42;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    iStack_34 = 0;
  }
  else {
    iStack_34 = 0x641a54;
    iStack_34 = FUN_007e62e9();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_38 = (undefined1 *)0x641a67;
  iVar2 = FUN_005154ad();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 4);
  iStack_34 = 0x641a75;
  FUN_004c26c4();
  iStack_34 = 0;
  puStack_38 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x18) = &iStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450368(unaff_EBP + -0x10);
  uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar3 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004c2677(3,uVar4);
  FUN_007eddac(uVar3,uVar4);
  iStack_34 = 0;
  puStack_38 = (undefined1 *)0x0;
  iStack_3c = (int)sVar1;
  FUN_007edfe1(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + -0x14));
  iStack_34 = 0x641abb;
  FUN_007e6e3c();
  iStack_34 = 0x641ac3;
  iVar2 = FUN_004bc6a2();
  iStack_34 = 0;
  puStack_38 = (undefined1 *)0x0;
  iStack_3c = 0x38;
  FUN_0060142b();
  iStack_34 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_38 = (undefined1 *)0x641adf;
  FUN_00457cda();
  if (iVar2 == 1) {
    puStack_38 = (undefined1 *)0x641aed;
    iStack_34 = iVar2;
    FUN_00457cda();
    puStack_38 = (undefined1 *)&iStack_34;
    *(int **)(unaff_EBP + 0xc) = &iStack_34;
    iStack_3c = 0x641afc;
    FUN_004c2677();
    iStack_3c = 0x641b03;
    FUN_00641b6c();
    puStack_38 = (undefined1 *)0x641b0b;
    FUN_00459cb5();
  }
  else {
    iStack_34 = 0;
    puStack_38 = (undefined1 *)0x641b16;
    FUN_00457cda();
  }
  iStack_34 = unaff_EBP + -0x30;
  puStack_38 = (undefined1 *)0x641b25;
  FUN_004751b2();
  iStack_34 = 0x641b2c;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_34 = 0x641b38;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_34 = 0x641b44;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_34 = 0x641b4f;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_34 = 0x641b5b;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


