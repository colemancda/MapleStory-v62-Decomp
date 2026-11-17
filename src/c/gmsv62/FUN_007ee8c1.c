/* FUN_007ee8c1 - 0x007ee8c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_007ee8c1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iStack_1c = 0x69c;
  puStack_20 = (undefined1 *)0x7ee8e0;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_1c = 0x7ee8f3;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
  iStack_1c = 0x7ee91a;
  FUN_004c26c4();
  iStack_1c = 0;
  puStack_20 = (undefined1 *)0x1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_24;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22(&uStack_24,0x324);
  uVar4 = 0;
  uVar3 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(3,0);
  FUN_007eddac(uVar3,uVar4);
  iStack_1c = 0;
  puStack_20 = (undefined1 *)0x0;
  uStack_24 = 0xc;
  FUN_007edfe1(&DAT_00978474,4);
  iStack_1c = 0x7ee969;
  FUN_007e6e3c();
  iStack_1c = 0x7ee971;
  iVar1 = FUN_004bc6a2();
  if (iVar1 != 1) {
    iStack_1c = 0xffffffff;
    puStack_20 = &DAT_00978474;
    uStack_24 = 0x7ee9a8;
    FUN_00414edd();
  }
  else {
    iStack_1c = unaff_EBP + -0x10;
    puStack_20 = (undefined1 *)0x7ee981;
    iStack_1c = FUN_00641b6c();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_20 = (undefined1 *)0x7ee98e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_1c = 0x7ee999;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_1c = 0x7ee9b4;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1 == 1;
}


