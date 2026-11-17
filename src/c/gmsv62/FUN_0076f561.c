/* FUN_0076f561 - 0x0076f561 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076f561(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  FUN_00879bb8();
  iStack_14 = 0x69c;
  uStack_18 = 0x76f57e;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_14 = 0x76f591;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
  iStack_14 = 0x76f5b8;
  FUN_004c26c4();
  iStack_14 = 0;
  uStack_18 = 1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_1c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22(&uStack_1c,0x2d0);
  uVar4 = 0;
  uVar3 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(3,0);
  FUN_007eddac(uVar3,uVar4);
  iStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0xc;
  FUN_007edfe1(&DAT_00978474,4);
  iStack_14 = 0x76f609;
  FUN_007e6e3c();
  iStack_14 = 0x76f611;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    iStack_14 = unaff_EBP + -0x10;
    uStack_18 = 0x76f622;
    iStack_14 = FUN_00641b6c();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_18 = 0x76f62c;
    FUN_00429303();
    uStack_18 = 0x76f633;
    FUN_004e9ed9();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_14 = 0x76f63f;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_14 = 0x76f64b;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


