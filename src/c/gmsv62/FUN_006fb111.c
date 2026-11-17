/* FUN_006fb111 - 0x006fb111 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fb111(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  undefined4 *puStack_60;
  
  FUN_00879bb8();
  puStack_60 = (undefined4 *)0x0;
  iStack_64 = 0;
  puStack_70 = (undefined1 *)&iStack_68;
  *(int **)(unaff_EBP + -0x14) = &iStack_68;
  local_6c = 0x761;
  FUN_00679e4e();
  local_6c = 0x6fb146;
  FUN_008163ca();
  puStack_60 = &DAT_00980690;
  iStack_64 = 0x6fb154;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_60 = &DAT_00980690;
  iStack_64 = 0x6fb161;
  FUN_00403191();
  puStack_60 = (undefined4 *)0x0;
  iStack_64 = 0;
  iStack_68 = unaff_EBP + -0x4c;
  local_6c = unaff_EBP + -0x3c;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_70,0xc52);
  iVar3 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x6fb1aa;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  puStack_60 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_64 = 0x6fb1bc;
  puStack_60 = (undefined4 *)FUN_00404b30();
  if (((int)puStack_60 < 0) && (puStack_60 != (undefined4 *)0x80004002)) {
    iStack_64 = 0x6fb1cd;
    FUN_00878dfb();
  }
  puStack_60 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_64 = 0x6fb1da;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb1e5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_60 = (undefined4 *)(unaff_EBP + -0x3c);
  iStack_64 = 0x6fb1f2;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb1fd;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_60 = (undefined4 *)(unaff_EBP + -0x4c);
  iStack_64 = 0x6fb20a;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb215;
    FUN_00878dfb();
  }
  puStack_60 = &DAT_00980690;
  iStack_64 = 0x6fb21e;
  FUN_00403191();
  puStack_60 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_64 = 0x6fb22e;
  FUN_00403191();
  puStack_60 = (undefined4 *)0x0;
  iStack_64 = 0;
  iStack_68 = unaff_EBP + -0x3c;
  local_6c = unaff_EBP + -0x4c;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e(&puStack_70,0x766);
  iVar3 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_68 = 0x6fb277;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  puStack_60 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_64 = 0x6fb289;
  puStack_60 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_60 < 0) && (puStack_60 != (undefined4 *)0x80004002)) {
    iStack_64 = 0x6fb29a;
    FUN_00878dfb();
  }
  puStack_60 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x6fb2a7;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb2b2;
    FUN_00878dfb();
  }
  puStack_60 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_64 = 0x6fb2bf;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb2ca;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_60 = (undefined4 *)(unaff_EBP + -0x3c);
  iStack_64 = 0x6fb2d7;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb2e2;
    FUN_00878dfb();
  }
  puStack_60 = (undefined4 *)0x584;
  iStack_64 = unaff_EBP + -0x10;
  iStack_68 = 0x6fb2f2;
  piVar2 = (int *)FUN_00679d86();
  iStack_68 = *piVar2;
  iStack_64 = extraout_ECX + 0xb0;
  puStack_60 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  local_6c = 0x6fb30a;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_60 = (undefined4 *)0x6fb319;
  FUN_00402676();
  puStack_60 = (undefined4 *)0x584;
  iStack_64 = unaff_EBP + -0x10;
  iStack_68 = 0x6fb329;
  piVar2 = (int *)FUN_00679d86();
  iStack_68 = *piVar2;
  iStack_64 = extraout_ECX + 0xb4;
  puStack_60 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  local_6c = 0x6fb341;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_60 = (undefined4 *)0x6fb350;
  FUN_00402676();
  puStack_60 = (undefined4 *)0x585;
  iStack_64 = unaff_EBP + -0x10;
  iStack_68 = 0x6fb360;
  puStack_60 = (undefined4 *)FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 10;
  iStack_64 = 0x6fb370;
  FUN_0044f5f6();
  puStack_60 = (undefined4 *)(unaff_EBP + -0x4c);
  iStack_64 = 0xffffffff;
  iStack_68 = 0xc;
  *(int **)(unaff_EBP + -0x18) = &local_6c;
  puStack_70 = (undefined1 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e(&local_6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_70 = (undefined1 *)0x6fb39b;
  FUN_0044974c();
  puStack_70 = (undefined1 *)0x6fb3a2;
  FUN_004503f9();
  puStack_60 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_64 = 0x6fb3af;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb3ba;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_60 = (undefined4 *)0x6fb3c6;
  FUN_00402fa6();
  puStack_60 = &DAT_00980690;
  iStack_64 = 0x6fb3cf;
  FUN_00403191();
  puStack_60 = (undefined4 *)(unaff_EBP + -0x4c);
  iStack_64 = 0xffffffff;
  iStack_68 = 0xc;
  *(int **)(unaff_EBP + -0x14) = &local_6c;
  puStack_70 = (undefined1 *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e(&local_6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_70 = (undefined1 *)0x6fb3fd;
  FUN_0044974c();
  puStack_70 = (undefined1 *)0x6fb404;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_60 = (undefined4 *)(unaff_EBP + -0x4c);
  iStack_64 = 0x6fb411;
  puStack_60 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_60 < 0) {
    iStack_64 = 0x6fb41e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puStack_60 = (undefined4 *)0x9d1;
  iStack_64 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iStack_68 = 0x6fb441;
  puStack_60 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_64 = 0x6fb44e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_60 = (undefined4 *)0x6fb45a;
  FUN_00402676();
  puStack_60 = (undefined4 *)0x578;
  iStack_64 = 0x6fb46b;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar3 == 0) {
    puStack_60 = (undefined4 *)0x0;
  }
  else {
    puStack_60 = (undefined4 *)0x6fb47d;
    puStack_60 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_64 = 0x6fb48e;
  FUN_00450382();
  puStack_60 = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_64 = 1;
  iStack_68 = 6;
  local_6c = 0x11d;
  puStack_70 = (undefined1 *)0x7d1;
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))(extraout_ECX);
  uVar1 = FUN_006fb663(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00705b42(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00705e5b(0);
  }
  FUN_006fbf59();
  FUN_006fc80c();
  iVar3 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0048b9e9(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 0x20))(extraout_ECX,2000,1,3,0x11b,0x6b,0x97,0);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x98) + 0x34) = 0x111;
  FUN_006fcbdc();
  puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  piVar2 = (int *)*puVar4;
  *(undefined2 *)(unaff_EBP + -0x3c) = 0xd;
  *(int **)(unaff_EBP + -0x34) = piVar2;
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  (**(code **)(iVar3 + 4))(piVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x14);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xb4))(piVar2,0xffffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_006fcc37();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


