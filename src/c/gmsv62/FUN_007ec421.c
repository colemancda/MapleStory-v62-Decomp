/* FUN_007ec421 - 0x007ec421 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ec421(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  undefined1 *puStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *local_64;
  
  FUN_00879bb8();
  local_64 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_68;
  uStack_6c = 0x7ec44a;
  FUN_007eea50();
  uStack_6c = 0x7ec451;
  FUN_007ec3b7();
  local_64 = (int *)0x7ec45e;
  FUN_004497c2();
  local_64 = (int *)0x0;
  iStack_68 = 100;
  uStack_6c = 0xf5;
  uStack_70 = 0xcf;
  uStack_74 = 1;
  puStack_7c = (undefined1 *)&iStack_78;
  *(int **)(unaff_EBP + -0x20) = &iStack_78;
  iStack_78 = extraout_ECX_00;
  FUN_004489f5();
  puStack_7c = (undefined1 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_7c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_7c = extraout_ECX_01;
  FUN_0048bccf(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar1 = FUN_0044972c(2,1);
  uVar2 = FUN_007eea05(uVar1);
  FUN_00449780(uVar2);
  FUN_0043f082(uVar2,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_64 = (int *)0x7ec4cd;
  FUN_00412600();
  if (*(int *)(extraout_ECX + 0xe8) != 2) {
    local_64 = (int *)0x3;
    iStack_68 = 0;
    uStack_6c = 0x7ec4e5;
    FUN_004031b7();
    iVar4 = *(int *)(extraout_ECX + 0x100);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar4 == 0) {
      local_64 = (int *)0x80004003;
      iStack_68 = 0x7ec503;
      FUN_00878dfb();
    }
    local_64 = (int *)(unaff_EBP + -0x30);
    iStack_68 = unaff_EBP + -0x10;
    uStack_6c = 0x7ec512;
    FUN_00425067();
    local_64 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_68 = 0x7ec51f;
    local_64 = (int *)FUN_00402bc3();
    if ((int)local_64 < 0) {
      iStack_68 = 0x7ec52a;
      FUN_00878dfb();
    }
    local_64 = (int *)0x3;
    iStack_68 = 0xff;
    uStack_6c = 0x7ec539;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0xf8);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar3 == (int *)0x0) {
      local_64 = (int *)0x80004003;
      iStack_68 = 0x7ec553;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piVar3;
    uStack_74 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_70 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_68 = *(int *)(unaff_EBP + -0x38);
    local_64 = *(int **)(unaff_EBP + -0x34);
    iStack_78 = 0;
    puStack_7c = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar4 = (**(code **)(iVar4 + 0x80))(piVar3);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_0045a1d8(unaff_EBP + -0x18,
                 *(undefined4 *)(*(int *)(extraout_ECX + 0xe4) + *(int *)(extraout_ECX + 0xec) * 4))
    ;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_007d4a9a(unaff_EBP + -0x14,0);
    local_64 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_68 = 0x7ec5df;
    FUN_00403191();
    local_64 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_68 = 0x7ec5ec;
    FUN_00403191();
    local_64 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_68 = 0x7ec5f9;
    FUN_00403191();
    local_64 = (int *)(unaff_EBP + -0x60);
    iStack_68 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_6c = 0x7ec60d;
    uStack_6c = FUN_00449749();
    uStack_70 = 0x7ec616;
    uStack_74 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_70;
    iStack_78 = 0x7ec622;
    uStack_70 = extraout_ECX_02;
    FUN_00448a17();
    uStack_74 = 2;
    iStack_78 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_7c = (undefined1 *)0x7ec634;
    uVar1 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_7c;
    FUN_00448a17(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0044974c();
    uVar5 = FUN_00448ebb();
    iStack_78 = 0x57 - (uVar5 >> 1);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_7c = (undefined1 *)0x7ec667;
    FUN_004115d9();
    puStack_7c = (undefined1 *)0x7ec66e;
    FUN_00448e3a();
    local_64 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_68 = 0x7ec67b;
    local_64 = (int *)FUN_00402bc3();
    if ((int)local_64 < 0) {
      iStack_68 = 0x7ec686;
      FUN_00878dfb();
    }
    local_64 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_68 = 0x7ec693;
    local_64 = (int *)FUN_00402bc3();
    if ((int)local_64 < 0) {
      iStack_68 = 0x7ec69e;
      FUN_00878dfb();
    }
    local_64 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_68 = 0x7ec6ab;
    local_64 = (int *)FUN_00402bc3();
    if ((int)local_64 < 0) {
      iStack_68 = 0x7ec6b6;
      FUN_00878dfb();
    }
    local_64 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (local_64 != (int *)0x0) {
      iStack_68 = 0x7ec6c7;
      (**(code **)(*local_64 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    local_64 = (int *)0x7ec6d3;
    FUN_00414ebb();
    local_64 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (local_64 != (int *)0x0) {
      iStack_68 = 0x7ec6e4;
      (**(code **)(*local_64 + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    local_64 = (int *)0x0;
    iStack_68 = 0x7ec6f8;
    FUN_007eeab2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


