/* FUN_007725fc - 0x007725fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007725fc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  uStack_14 = 0x69c;
  puStack_18 = (undefined1 *)0x772619;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_14 = 0x77262c;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
  uStack_14 = 0x772653;
  FUN_004c26c4();
  uStack_14 = 0;
  puStack_18 = (undefined1 *)0x1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_1c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22(&uStack_1c,0x2e8);
  uVar4 = 0;
  uVar3 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(3,0);
  FUN_007eddac(uVar3,uVar4);
  uStack_14 = 0;
  puStack_18 = (undefined1 *)0x0;
  uStack_1c = 0xc;
  FUN_007edfe1(&DAT_00978474,4);
  uStack_14 = 0x7726a4;
  FUN_007e6e3c();
  uStack_14 = 0x7726ac;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    puStack_18 = (undefined1 *)&uStack_14;
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_14;
    uStack_1c = 0x7726c0;
    FUN_004c2677();
    uStack_1c = 0x7726c7;
    FUN_00641b6c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_18 = (undefined1 *)0x7726d0;
    FUN_00429303();
    puStack_18 = (undefined1 *)0x7726d7;
    FUN_004ea68f();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_14 = 0x7726e3;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


