/* FUN_007d6c55 - 0x007d6c55 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007d6c55(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined1 *puStack_48;
  undefined *puStack_44;
  int *local_40;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_40 = (int *)0x7d6c7f;
  FUN_0087a1b0();
  local_40 = (int *)0x0;
  puStack_44 = (undefined *)0x0;
  puStack_48 = &stack0xffffffc4;
  uVar1 = FUN_00412335(*(undefined4 *)(unaff_EBP + 0x10));
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_48;
  FUN_004033a1(uVar1);
  iVar2 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_48 = (undefined1 *)0x7d6cba;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  if (iVar2 != 0) {
    local_40 = (int *)(unaff_EBP + -0x18);
    puStack_44 = (undefined *)0x7d6cd0;
    local_40 = (int *)FUN_00404b30();
    if (((int)local_40 < 0) && (local_40 != (int *)0x80004002)) {
      puStack_44 = (undefined *)0x7d6ce1;
      FUN_00878dfb();
    }
  }
  local_40 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_44 = (undefined *)0x7d6cee;
  local_40 = (int *)FUN_00402bc3();
  if ((int)local_40 < 0) {
    puStack_44 = (undefined *)0x7d6cf9;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    local_40 = (int *)(unaff_EBP + -0x10);
    *puVar3 = 0;
    puStack_44 = (undefined *)0x7d6d0e;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
  }
  else {
    local_40 = *(int **)(unaff_EBP + 0x14);
    *(int ***)(unaff_EBP + -0x1c) = &local_40;
    puStack_44 = (undefined *)0x7d6d23;
    FUN_00408b49();
    puStack_44 = (undefined *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_48 = (undefined1 *)0x7d6d33;
    FUN_0040263d();
    puStack_48 = (undefined1 *)0x7d6d3a;
    FUN_004048a4();
    puStack_44 = *(undefined **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(short *)(unaff_EBP + -0x2c) != 8) {
      puStack_44 = &DAT_0097812c;
    }
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    local_40 = (int *)0xffffffff;
    *puVar3 = 0;
    puStack_48 = (undefined1 *)0x7d6d5c;
    FUN_00454081();
    local_40 = (int *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_44 = (undefined *)0x7d6d6c;
    local_40 = (int *)FUN_00402bc3();
    if ((int)local_40 < 0) {
      puStack_44 = (undefined *)0x7d6d77;
      FUN_00878dfb();
    }
  }
  local_40 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (local_40 != (int *)0x0) {
    puStack_44 = (undefined *)0x7d6d88;
    (**(code **)(*local_40 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  local_40 = (int *)0x7d6d94;
  FUN_00414ebb();
  local_40 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (local_40 != (int *)0x0) {
    puStack_44 = (undefined *)0x7d6da4;
    (**(code **)(*local_40 + 8))();
  }
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    local_40 = (int *)0x7d6db0;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


