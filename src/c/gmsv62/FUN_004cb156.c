/* FUN_004cb156 - 0x004cb156 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004cb156(void)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar8;
  int unaff_EBP;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piStack_114;
  undefined4 *local_110;
  
  FUN_00879bb8();
  local_110 = (undefined4 *)0x4cb173;
  cVar1 = FUN_0042452b();
  local_110 = (undefined4 *)0x4cb17e;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_110 = (undefined4 *)(unaff_EBP + -0x14);
  piStack_114 = (int *)(unaff_EBP + -0x30);
  iVar4 = FUN_004cd6be();
  if (iVar4 == 0) {
LAB_004cb1d1:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_110 = (undefined4 *)0x4cb1dd;
    FUN_004cd4f2();
    goto LAB_004cb751;
  }
  if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x05')) {
    iVar4 = *(int *)(unaff_EBP + -0x10);
    local_110 = (undefined4 *)0x4cb1ed;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(iVar4 + 0x58) = uVar3;
    piVar8 = extraout_ECX_00;
  }
  else {
    piVar8 = extraout_ECX;
    if (cVar1 == '\x04') {
      iVar4 = *(int *)(unaff_EBP + -0x10);
      local_110 = (undefined4 *)0x4cb1be;
      sVar2 = FUN_00424561();
      local_110 = (undefined4 *)0x4cb1c6;
      iVar5 = FUN_007d1e08();
      *(int *)(iVar4 + 0x44) = sVar2 + iVar5;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x48) = 4;
      goto LAB_004cb1d1;
    }
  }
  local_110 = *(undefined4 **)(unaff_EBP + -0x10);
  *(int ***)(unaff_EBP + -0x28) = &piStack_114;
  piStack_114 = piVar8;
  FUN_004cd4d5();
  FUN_004ca2e0();
  if (cVar1 == '\0') {
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3c);
    local_110 = (undefined4 *)0x4cb39b;
    FUN_00434bee();
    local_110 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_114 = (int *)0x4cb3ad;
    FUN_00403191();
    local_110 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_114 = (int *)0x4cb3ba;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_110 = (undefined4 *)0x4cb3cb;
    uVar3 = FUN_0045e2eb();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      local_110 = (undefined4 *)0x80004003;
      piStack_114 = (int *)0x4cb3dd;
      FUN_00878dfb();
    }
    piVar8 = *(int **)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x24) = piVar8;
    local_110 = (undefined4 *)0x4cb3eb;
    uVar3 = FUN_0045e2eb();
    piStack_114 = *(int **)(unaff_EBP + -0x6c);
    local_110 = *(undefined4 **)(unaff_EBP + -0x68);
    iVar4 = (**(code **)(*piVar8 + 0x90))
                      (*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),uVar3,
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb();
    }
    piVar8 = *(int **)(unaff_EBP + -0x18);
    iVar4 = (**(code **)(*piVar8 + 0x80))(piVar8,0);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar8,&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x38);
    FUN_00424ed4();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004031b7(0,3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00425067(unaff_EBP + -0x1c,unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar4 = FUN_00402bc3(unaff_EBP + -0xb4);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(0xfffffffe,3);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x28,unaff_EBP + -0x94);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x94);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_004031b7(0,3);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_004031b7(0xffffffff,3);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_004031b7(1000,3);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x10c,*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0x54,
                 unaff_EBP + -100,unaff_EBP + -0x84,unaff_EBP + -0xa4,unaff_EBP + -0xc4);
    iVar4 = FUN_00402bc3(unaff_EBP + -0x10c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar4 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x84);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar4 = FUN_00402bc3(unaff_EBP + -0xa4);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar4 = FUN_00402bc3(unaff_EBP + -0xc4);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar8 = *(int **)(unaff_EBP + 8);
    iVar4 = (**(code **)(*piVar8 + 0x110))
                      (piVar8,0,*(undefined4 *)(unaff_EBP + -0xe4),
                       *(undefined4 *)(unaff_EBP + -0xe0),*(undefined4 *)(unaff_EBP + -0xdc),
                       *(undefined4 *)(unaff_EBP + -0xd8),*(undefined4 *)(unaff_EBP + -0xd4),
                       *(undefined4 *)(unaff_EBP + -0xd0),*(undefined4 *)(unaff_EBP + -0xcc),
                       *(undefined4 *)(unaff_EBP + -200));
    if (iVar4 < 0) {
      local_110 = (undefined4 *)&DAT_00963df8;
      piStack_114 = piVar8;
      FUN_00878e09(iVar4);
    }
    local_110 = (undefined4 *)(unaff_EBP + -0xe4);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_114 = (int *)0x4cb6df;
    local_110 = (undefined4 *)FUN_00402bc3();
    if ((int)local_110 < 0) {
      piStack_114 = (int *)0x4cb6ea;
      FUN_00878dfb();
    }
    local_110 = (undefined4 *)(unaff_EBP + -0xd4);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_114 = (int *)0x4cb6fa;
    local_110 = (undefined4 *)FUN_00402bc3();
    if ((int)local_110 < 0) {
      piStack_114 = (int *)0x4cb705;
      FUN_00878dfb();
    }
    local_110 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined4 ***)(unaff_EBP + -0x20) = &local_110;
    piStack_114 = (int *)0x4cb715;
    FUN_00424ed4();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_114 = (int *)0x4cb71e;
    FUN_00424e82();
    piStack_114 = (int *)0x4cb725;
    FUN_00427af9();
    local_110 = (undefined4 *)0x4cb72d;
    FUN_004125e6();
    local_110 = (undefined4 *)0x4cb735;
    FUN_00412600();
    local_110 = (undefined4 *)0x4cb73d;
    FUN_004125d9();
  }
  else {
    if (cVar1 == '\x02') {
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x58) == *(int *)(DAT_00978368 + 0x2088)) {
        local_110 = (undefined4 *)0x4e1;
        piStack_114 = (int *)(unaff_EBP + -0x2c);
        puVar6 = (undefined4 *)FUN_00679d86();
        piStack_114 = (int *)*puVar6;
        local_110 = (undefined4 *)0x64;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_007d4073();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          local_110 = (undefined4 *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
          piStack_114 = (int *)0x4cb361;
          FUN_00403384();
        }
      }
      local_110 = (undefined4 *)0xffffffff;
      piStack_114 = (int *)0x4cb36c;
      iVar4 = FUN_004cd2eb();
      *(int ***)(unaff_EBP + 8) = &piStack_114;
      FUN_0041160e(iVar4 + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = unaff_EBP + -0xec;
LAB_004cb299:
      FUN_004cd2eb(iVar4);
      puVar6 = (undefined4 *)FUN_004cd2a8(iVar4);
      uVar3 = puVar6[1];
      uVar11 = *puVar6;
      uVar10 = 0;
      iVar4 = FUN_004cd2eb(0,uVar11,uVar3);
      uVar9 = *(undefined4 *)(iVar4 + 0x58);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x05') goto LAB_004cb73f;
        if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x58) == *(int *)(DAT_00978368 + 0x2088)) {
          local_110 = (undefined4 *)0x4e1;
          piStack_114 = (int *)(unaff_EBP + -0x34);
          puVar6 = (undefined4 *)FUN_00679d86();
          piStack_114 = (int *)*puVar6;
          local_110 = (undefined4 *)0x64;
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          FUN_007d4073();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          local_110 = (undefined4 *)0x4cb26c;
          FUN_00402676();
        }
        local_110 = (undefined4 *)0x4cb274;
        uVar7 = FUN_0042452b();
        local_110 = (undefined4 *)(uVar7 & 0xff);
        piStack_114 = (int *)0x4cb280;
        iVar4 = FUN_004cd2eb();
        *(int ***)(unaff_EBP + 8) = &piStack_114;
        FUN_0041160e(iVar4 + 0x38);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar4 = unaff_EBP + -0xfc;
        goto LAB_004cb299;
      }
      local_110 = (undefined4 *)0xffffffff;
      piStack_114 = (int *)0x4cb2d8;
      iVar4 = FUN_004cd2eb();
      *(int ***)(unaff_EBP + 8) = &piStack_114;
      FUN_0041160e(iVar4 + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = unaff_EBP + -0xf4;
      FUN_004cd2eb(iVar4);
      puVar6 = (undefined4 *)FUN_004cd2a8(iVar4);
      uVar3 = puVar6[1];
      uVar11 = *puVar6;
      iVar4 = FUN_004cd2eb(uVar11,uVar3);
      uVar10 = *(undefined4 *)(iVar4 + 0x58);
      uVar9 = 0;
    }
    FUN_00424e82(uVar9,uVar10);
    FUN_00427e4d(uVar9,uVar10,uVar11,uVar3);
  }
LAB_004cb73f:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_110 = (undefined4 *)0x0;
    piStack_114 = (int *)0x4cb751;
    FUN_004cd5da();
  }
LAB_004cb751:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


