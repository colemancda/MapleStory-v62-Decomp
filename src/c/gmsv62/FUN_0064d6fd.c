/* FUN_0064d6fd - 0x0064d6fd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0064d6fd(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar3;
  int *extraout_ECX_01;
  int *piVar4;
  int unaff_EBP;
  undefined4 *puStack_a8;
  int *local_a4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  FUN_006544fe();
  local_a4 = (int *)0x0;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_a8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_a8,0x3b4);
  iVar1 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_a8 = (undefined4 *)0x64d76a;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar1 != 0) {
    local_a4 = (int *)0x64d780;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      local_a4 = (int *)0x64d793;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  local_a4 = (int *)0x64d7aa;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    local_a4 = (int *)0x64d7b5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  puStack_a8 = (undefined4 *)(unaff_EBP + -0x34);
  local_a4 = (int *)&DAT_00968950;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00434e21();
  puStack_a8 = (undefined4 *)&stack0xffffff60;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff60;
  local_a4 = (int *)0x85e;
  FUN_00679e4e();
  puStack_a8 = (undefined4 *)(unaff_EBP + -0x34);
  *(int ***)(unaff_EBP + -0x3c) = &local_a4;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450368();
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_a8;
  FUN_00424dbc(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_007d6dc4(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  local_a4 = (int *)0x64d823;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  puStack_a8 = *(undefined4 **)(unaff_EBP + -0x1c);
  local_a4 = (int *)0x0;
  *puStack_a8 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_a8;
  FUN_00679e4e(&puStack_a8,0x85c);
  iVar1 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_a8 = (undefined4 *)0x64d86e;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    local_a4 = (int *)0x64d884;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      local_a4 = (int *)0x64d892;
      FUN_00878dfb();
    }
  }
  puVar3 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  local_a4 = (int *)0x64d89f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    local_a4 = (int *)0x64d8aa;
    FUN_00878dfb();
    puVar3 = extraout_ECX_00;
  }
  local_a4 = (int *)0x0;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_a8;
  puStack_a8 = puVar3;
  FUN_00679e4e(&puStack_a8,0x916);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_a8 = (undefined4 *)0x64d8e1;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  local_a4 = (int *)0x64d8f3;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    local_a4 = (int *)0x64d901;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  local_a4 = (int *)0x64d90e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    local_a4 = (int *)0x64d919;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    local_a4 = (int *)0x64d929;
    FUN_00878dfb();
  }
  local_a4 = (int *)0x64d935;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  local_a4 = (int *)0x64d942;
  FUN_004035f5();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    local_a4 = (int *)0x64d953;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  local_a4 = (int *)0x64d95d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x38) == 0) {
      local_a4 = (int *)0x64d96f;
      FUN_00878dfb();
    }
    local_a4 = (int *)(unaff_EBP + -0x6c);
    puStack_a8 = (undefined4 *)0x1;
    iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x38) + 0xc))(*(int **)(unaff_EBP + -0x38));
    if (iVar1 != 0) {
      local_a4 = (int *)(unaff_EBP + 8);
      puStack_a8 = (undefined4 *)0x64db4a;
      FUN_00654af1();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      local_a4 = (int *)0x64db57;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        local_a4 = (int *)0x64db62;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
        local_a4 = (int *)0x64db73;
        (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        local_a4 = (int *)0x64db84;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        local_a4 = (int *)0x64dba1;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        local_a4 = (int *)0x64dbb3;
        FUN_00654661();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        local_a4 = (int *)0x64dbc6;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
        local_a4 = (int *)0x64dbd7;
        (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return 1;
    }
    local_a4 = (int *)(unaff_EBP + -0x24);
    puStack_a8 = (undefined4 *)0x64d997;
    FUN_00405a23();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    local_a4 = (int *)0x64d9b0;
    iVar1 = FUN_0087a208();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    if (iVar1 / 10000 != *(int *)(unaff_EBP + 8)) {
      local_a4 = (int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x10) = 0x80004005;
                    /* WARNING: Subroutine does not return */
      puStack_a8 = (undefined4 *)0x64db22;
      __CxxThrowException_8();
    }
    local_a4 = (int *)0x0;
    puStack_a8 = (undefined4 *)0x2710;
    *(undefined4 ***)(unaff_EBP + -0x40) = &puStack_a8;
    FUN_004059fd(unaff_EBP + -0x24);
    iVar1 = unaff_EBP + -0x9c;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_0040263d(iVar1);
    FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_a8 = (undefined4 *)0x64d9fb;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar1 != 0) {
      local_a4 = (int *)0x64da11;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        local_a4 = (int *)0x64da22;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    local_a4 = (int *)0x64da32;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      local_a4 = (int *)0x64da3d;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + 0x10);
    local_a4 = *(int **)(unaff_EBP + 0x10);
    *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff60;
    if (local_a4 != (int *)0x0) {
      puStack_a8 = (undefined4 *)0x64da55;
      (**(code **)(*local_a4 + 4))();
      piVar4 = extraout_ECX_01;
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(int ***)(unaff_EBP + -0x40) = &local_a4;
    local_a4 = piVar4;
    FUN_00424dbc();
    puStack_a8 = *(undefined4 **)(unaff_EBP + -0x14);
    FUN_0064dbeb(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (*(int *)(unaff_EBP + -0x44) == 0) break;
    local_a4 = (int *)0x64da8d;
    iVar1 = FUN_0065487e();
    FUN_006544cb();
    FUN_006544e8();
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_EBP + -0x44);
    local_a4 = (int *)(unaff_EBP + -0x14);
    puStack_a8 = (undefined4 *)0x64dab7;
    FUN_006549b3();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      local_a4 = (int *)0x64dac9;
      FUN_00654632();
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      local_a4 = (int *)0x64dadd;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    local_a4 = (int *)0x64daf9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      local_a4 = (int *)0x64db08;
      FUN_00878dfb();
    }
  }
  local_a4 = (int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = 0x80004005;
                    /* WARNING: Subroutine does not return */
  puStack_a8 = (undefined4 *)0x64db37;
  __CxxThrowException_8();
}


