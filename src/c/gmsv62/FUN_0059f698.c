/* FUN_0059f698 - 0x0059f698 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0059fa6b) */
/* WARNING: Removing unreachable block (ram,0x0059fa9a) */

void FUN_0059f698(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int unaff_EBP;
  int *piStack_c4;
  int *piStack_c0;
  int *local_bc;
  
  FUN_00879bb8();
  local_bc = (int *)0x0;
  piStack_c0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_c4;
  FUN_00679e4e(&piStack_c4,0x5cf);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x98;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x28;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_c4 = (int *)0x59f6f4;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (iVar1 != 0) {
    local_bc = (int *)(unaff_EBP + -0x48);
    piStack_c0 = (int *)0x59f70a;
    local_bc = (int *)FUN_00404b30();
    if (((int)local_bc < 0) && (local_bc != (int *)0x80004002)) {
      piStack_c0 = (int *)0x59f71b;
      FUN_00878dfb();
    }
  }
  local_bc = (int *)(unaff_EBP + -0x98);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_c0 = (int *)0x59f72b;
  piVar2 = (int *)FUN_00402bc3();
  piVar3 = local_bc;
  if ((int)piVar2 < 0) {
    piStack_c0 = (int *)0x59f736;
    local_bc = piVar2;
    FUN_00878dfb();
    piVar3 = extraout_ECX_00;
  }
  local_bc = (int *)0x0;
  piStack_c0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_c4;
  piStack_c4 = piVar3;
  FUN_00679e4e(&piStack_c4,0x5d0);
  iVar1 = unaff_EBP + -0xa8;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_c4 = (int *)0x59f770;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar1 != 0) {
    local_bc = (int *)(unaff_EBP + -0x40);
    piStack_c0 = (int *)0x59f786;
    local_bc = (int *)FUN_00404b30();
    if (((int)local_bc < 0) && (local_bc != (int *)0x80004002)) {
      piStack_c0 = (int *)0x59f797;
      FUN_00878dfb();
    }
  }
  local_bc = (int *)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_c0 = (int *)0x59f7a7;
  piVar2 = (int *)FUN_00402bc3();
  piVar3 = local_bc;
  if ((int)piVar2 < 0) {
    piStack_c0 = (int *)0x59f7b2;
    local_bc = piVar2;
    FUN_00878dfb();
    piVar3 = extraout_ECX_01;
  }
  local_bc = (int *)0x0;
  piStack_c0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_c4;
  piStack_c4 = piVar3;
  FUN_00679e4e(&piStack_c4,0x3b4);
  iVar1 = unaff_EBP + -0x88;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_c4 = (int *)0x59f7ec;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar1 != 0) {
    local_bc = (int *)(unaff_EBP + -0x44);
    piStack_c0 = (int *)0x59f802;
    local_bc = (int *)FUN_00404b30();
    if (((int)local_bc < 0) && (local_bc != (int *)0x80004002)) {
      piStack_c0 = (int *)0x59f813;
      FUN_00878dfb();
    }
  }
  local_bc = (int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_c0 = (int *)0x59f823;
  local_bc = (int *)FUN_00402bc3();
  if ((int)local_bc < 0) {
    piStack_c0 = (int *)0x59f82e;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x28);
  piStack_c0 = *(int **)(unaff_EBP + -0x28);
  *(int ***)(unaff_EBP + -0x14) = &local_bc;
  local_bc = piVar3;
  if (piStack_c0 != (int *)0x0) {
    piStack_c4 = (int *)0x59f846;
    (**(code **)(*piStack_c0 + 4))();
    piVar3 = extraout_ECX_02;
  }
  piStack_c4 = (int *)(unaff_EBP + -0x34);
  *(int ***)(unaff_EBP + -0x3c) = &piStack_c0;
  piStack_c0 = piVar3;
  FUN_00424dbc();
  *(int ***)(unaff_EBP + -0x18) = &piStack_c4;
  FUN_00424dbc(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0048b994();
  FUN_0085fe71();
  local_bc = (int *)0x59f87e;
  FUN_0059fcc1();
  local_bc = (int *)0x59f885;
  FUN_005a0637();
  local_bc = (int *)0x59f88c;
  FUN_005a2315();
  local_bc = (int *)0x59f893;
  FUN_005a4d7e();
  local_bc = (int *)0x59f89a;
  FUN_005a768c();
  local_bc = (int *)0x0;
  piStack_c0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_c4;
  FUN_00679e4e(&piStack_c4,0x758);
  iVar1 = unaff_EBP + -0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_c4 = (int *)0x59f8d4;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar1 != 0) {
    local_bc = (int *)(unaff_EBP + -0x3c);
    piStack_c0 = (int *)0x59f8ea;
    local_bc = (int *)FUN_00404b30();
    if (((int)local_bc < 0) && (local_bc != (int *)0x80004002)) {
      piStack_c0 = (int *)0x59f8fb;
      FUN_00878dfb();
    }
  }
  local_bc = (int *)(unaff_EBP + -0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_c0 = (int *)0x59f90b;
  piVar2 = (int *)FUN_00402bc3();
  piVar3 = local_bc;
  if ((int)piVar2 < 0) {
    piStack_c0 = (int *)0x59f916;
    local_bc = piVar2;
    FUN_00878dfb();
    piVar3 = extraout_ECX_03;
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while( true ) {
      local_bc = (int *)0x59f92a;
      FUN_0087a1b0();
      piStack_c0 = *(int **)(unaff_EBP + -0x18);
      piStack_c4 = (int *)0x59f935;
      local_bc = (int *)&stack0xffffff48;
      piStack_c0 = (int *)FUN_00412335();
      *(int ***)(unaff_EBP + -0x24) = &local_bc;
      piStack_c4 = (int *)0x59f943;
      FUN_00402e8e();
      piStack_c0 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_c4 = (int *)0x59f953;
      FUN_0040263d();
      piStack_c4 = (int *)0x59f95a;
      local_bc = (int *)FUN_004048a4();
      piStack_c0 = (int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_c4 = (int *)0x59f968;
      local_bc = (int *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_c0 = (int *)0x59f977;
      FUN_00417232();
      local_bc = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (local_bc != (int *)0x0) {
        piStack_c0 = (int *)0x59f988;
        (**(code **)(*local_bc + 8))();
      }
      local_bc = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_c0 = (int *)0x59f995;
      piVar2 = (int *)FUN_00402bc3();
      piVar3 = local_bc;
      if ((int)piVar2 < 0) {
        piStack_c0 = (int *)0x59f9a0;
        local_bc = piVar2;
        FUN_00878dfb();
        piVar3 = extraout_ECX_04;
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) break;
      local_bc = (int *)&DAT_0097812c;
      *(int ***)(unaff_EBP + -0x24) = &piStack_c0;
      piStack_c4 = (int *)0x5ed;
      piStack_c0 = piVar3;
      FUN_00679e4e(&piStack_c0);
      piStack_c4 = (int *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_0040263d();
      piStack_c0 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_c4 = (int *)0x59f9e2;
      piStack_c0 = (int *)FUN_004343c5();
      local_bc = (int *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      piStack_c4 = (int *)0x59f9f2;
      FUN_004184ca();
      local_bc = (int *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      piStack_c0 = (int *)0x59f9ff;
      piVar3 = (int *)FUN_00402bc3();
      piStack_c0 = local_bc;
      if ((int)piVar3 < 0) {
        piStack_c0 = (int *)0x59fa0a;
        local_bc = piVar3;
        FUN_00878dfb();
        piStack_c0 = extraout_ECX_05;
      }
      local_bc = (int *)0x0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_c0;
      piStack_c4 = (int *)0x920;
      FUN_00679e4e(&piStack_c0);
      piStack_c4 = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_0040263d();
      piStack_c0 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      piStack_c4 = (int *)0x59fa3f;
      piVar3 = (int *)FUN_00412550();
      piStack_c4 = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      local_bc = (int *)FUN_00402bc3();
      if ((int)local_bc < 0) {
        piStack_c0 = (int *)0x59fa5b;
        FUN_00878dfb();
      }
      piStack_c0 = DAT_00980b4c;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        piStack_c0 = *(int **)(unaff_EBP + -0x20);
      }
      local_bc = (int *)&DAT_00965a50;
      piStack_c4 = (int *)0x59fa7c;
      iVar1 = FUN_0087b08f();
      if (iVar1 == 0) {
        piStack_c0 = (int *)0x59fa88;
        local_bc = piVar3;
        FUN_005f3a71();
      }
      else {
        local_bc = (int *)&DAT_00965a4c;
        piStack_c0 = DAT_00980b4c;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          piStack_c0 = *(int **)(unaff_EBP + -0x20);
        }
        piStack_c4 = (int *)0x59faab;
        iVar1 = FUN_0087b08f();
        if (iVar1 == 0) {
          piStack_c0 = (int *)0x59fab7;
          local_bc = piVar3;
          FUN_005d90ec();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      local_bc = (int *)0x59fac4;
      FUN_00402676();
      local_bc = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (local_bc != (int *)0x0) {
        piStack_c0 = (int *)0x59fad5;
        (**(code **)(*local_bc + 8))();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
  }
  local_bc = (int *)0x0;
  piStack_c0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x24) = &piStack_c4;
  piStack_c4 = piVar3;
  FUN_00679e4e(&piStack_c4,0xb5f);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  piStack_c4 = (int *)0x59fb18;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar1 != 0) {
    local_bc = (int *)(unaff_EBP + -0x14);
    piStack_c0 = (int *)0x59fb2e;
    local_bc = (int *)FUN_00404b30();
    if (((int)local_bc < 0) && (local_bc != (int *)0x80004002)) {
      piStack_c0 = (int *)0x59fb3f;
      FUN_00878dfb();
    }
  }
  local_bc = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  piStack_c0 = (int *)0x59fb4c;
  local_bc = (int *)FUN_00402bc3();
  if ((int)local_bc < 0) {
    piStack_c0 = (int *)0x59fb57;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while( true ) {
      local_bc = (int *)0x59fb6b;
      FUN_0087a1b0();
      piStack_c0 = *(int **)(unaff_EBP + -0x10);
      piStack_c4 = (int *)0x59fb76;
      local_bc = (int *)&stack0xffffff48;
      piStack_c0 = (int *)FUN_00412335();
      *(int ***)(unaff_EBP + -0x24) = &local_bc;
      piStack_c4 = (int *)0x59fb84;
      FUN_00402e8e();
      piStack_c0 = (int *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      piStack_c4 = (int *)0x59fb94;
      FUN_0040263d();
      piStack_c4 = (int *)0x59fb9b;
      local_bc = (int *)FUN_004048a4();
      piStack_c0 = (int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      piStack_c4 = (int *)0x59fba9;
      local_bc = (int *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_c0 = (int *)0x59fbb8;
      FUN_00417232();
      local_bc = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      if (local_bc != (int *)0x0) {
        piStack_c0 = (int *)0x59fbc9;
        (**(code **)(*local_bc + 8))();
      }
      local_bc = (int *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_c0 = (int *)0x59fbd6;
      piVar3 = (int *)FUN_00402bc3();
      piStack_c0 = local_bc;
      if ((int)piVar3 < 0) {
        piStack_c0 = (int *)0x59fbe1;
        local_bc = piVar3;
        FUN_00878dfb();
        piStack_c0 = extraout_ECX_06;
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) break;
      local_bc = (int *)0x0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_c0;
      piStack_c4 = (int *)0x920;
      FUN_00679e4e(&piStack_c0);
      piStack_c4 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_0040263d();
      piStack_c0 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      piStack_c4 = (int *)0x59fc1b;
      piVar3 = (int *)FUN_00412550();
      piStack_c4 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      local_bc = (int *)FUN_00402bc3();
      if ((int)local_bc < 0) {
        piStack_c0 = (int *)0x59fc37;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)0x59fc3d;
      local_bc = piVar3;
      FUN_00638bd2();
      local_bc = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      if (local_bc != (int *)0x0) {
        piStack_c0 = (int *)0x59fc4f;
        (**(code **)(*local_bc + 8))();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    }
  }
  local_bc = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (local_bc != (int *)0x0) {
    piStack_c0 = (int *)0x59fc68;
    (**(code **)(*local_bc + 8))();
  }
  local_bc = *(int **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (local_bc != (int *)0x0) {
    piStack_c0 = (int *)0x59fc79;
    (**(code **)(*local_bc + 8))();
  }
  local_bc = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (local_bc != (int *)0x0) {
    piStack_c0 = (int *)0x59fc8a;
    (**(code **)(*local_bc + 8))();
  }
  local_bc = *(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (local_bc != (int *)0x0) {
    piStack_c0 = (int *)0x59fc9b;
    (**(code **)(*local_bc + 8))();
  }
  local_bc = *(int **)(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_bc != (int *)0x0) {
    piStack_c0 = (int *)0x59fcac;
    (**(code **)(*local_bc + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


