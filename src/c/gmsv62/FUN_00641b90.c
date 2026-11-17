/* FUN_00641b90 - 0x00641b90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00641b90(void)

{
  short sVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  iStack_34 = unaff_EBP + -0x10;
  puStack_38 = (undefined1 *)0x641bb0;
  FUN_0045cdbc();
  iStack_34 = unaff_EBP + 0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_38 = (undefined1 *)0x641bc0;
  FUN_0045cdbc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_34 = 0x641bcb;
  sVar1 = FUN_00424561();
  *(int *)(unaff_EBP + -0x14) = (int)sVar1;
  iStack_34 = 0x641bd8;
  sVar1 = FUN_00424561();
  iStack_34 = 0x69c;
  puStack_38 = (undefined1 *)0x641bea;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    iStack_34 = 0;
  }
  else {
    iStack_34 = 0x641bfc;
    iStack_34 = FUN_007e62e9();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_38 = (undefined1 *)0x641c0f;
  iVar2 = FUN_005154ad();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 4);
  iStack_34 = 0x641c1d;
  FUN_004c26c4();
  iStack_34 = 0;
  puStack_38 = (undefined1 *)0x0;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450368(unaff_EBP + -0x10);
  uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar3 = 8;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004c2677(8,uVar4);
  FUN_007eddac(uVar3,uVar4);
  puStack_38 = *(undefined1 **)(unaff_EBP + -0x14);
  uStack_3c = *(undefined4 *)(unaff_EBP + 0x10);
  iStack_34 = (int)sVar1;
  FUN_007ee027();
  iStack_34 = 0x641c61;
  FUN_007e6e3c();
  iStack_34 = 0x641c69;
  iVar2 = FUN_004bc6a2();
  iStack_34 = 0;
  puStack_38 = (undefined1 *)0x0;
  uStack_3c = 0x38;
  FUN_0060142b();
  iStack_34 = 0xe;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_38 = (undefined1 *)0x641c85;
  FUN_00457cda();
  if (iVar2 == 1) {
    puStack_38 = (undefined1 *)0x641c93;
    iStack_34 = iVar2;
    FUN_00457cda();
    puStack_38 = (undefined1 *)&iStack_34;
    *(int **)(unaff_EBP + 0xc) = &iStack_34;
    uStack_3c = 0x641ca2;
    FUN_004c2677();
    uStack_3c = 0x641ca9;
    FUN_00641b6c();
    puStack_38 = (undefined1 *)0x641cb1;
    FUN_00459cb5();
  }
  else {
    iStack_34 = 0;
    puStack_38 = (undefined1 *)0x641cbc;
    FUN_00457cda();
  }
  iStack_34 = unaff_EBP + -0x30;
  puStack_38 = (undefined1 *)0x641ccb;
  FUN_004751b2();
  iStack_34 = 0x641cd2;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_34 = 0x641cde;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_34 = 0x641cea;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_34 = 0x641cf5;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_34 = 0x641d01;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


