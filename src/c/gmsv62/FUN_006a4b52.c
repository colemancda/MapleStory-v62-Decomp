/* FUN_006a4b52 - 0x006a4b52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a4b52(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  
  FUN_00879bb8();
  iStack_8c = 0;
  iStack_90 = 0;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_94;
  FUN_00679e4e();
  FUN_008163ca();
  iStack_8c = 0x6a4b8e;
  FUN_006a4ff5();
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 1;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  iStack_8c = 0x4ed;
  iStack_90 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_94 = 0x6a4bb1;
  iStack_8c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_90 = 0x6a4bbe;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_8c = 0x6a4bc9;
  FUN_00402676();
  iStack_8c = 0x578;
  iStack_90 = 0x6a4bd8;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x30) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    iStack_8c = 0;
  }
  else {
    iStack_8c = 0x6a4bea;
    iStack_8c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_90 = 0x6a4bfa;
  FUN_00450382();
  iStack_8c = unaff_EBP + -0x48;
  iStack_90 = 0;
  uStack_94 = 0x18b;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x7c) + 4) + 0x1c))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x30) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
  puVar3 = (undefined4 *)FUN_004029b9();
  *(undefined4 **)(unaff_EBP + -0x18) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_LAB_008e84a0;
    iStack_cc = 0x6a4cbb;
    _memset(puVar3,0,0xc);
    puVar3 = *(undefined4 **)(unaff_EBP + -0x18);
    *puVar3 = &PTR_FUN_008e8ea8;
    puVar3[4] = 0x15e;
    puVar3[3] = 7;
  }
  *(undefined4 **)(unaff_EBP + -0x34) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar3 + 1);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191();
  iStack_cc = unaff_EBP + -0x58;
  *(int **)(unaff_EBP + -0x30) = &iStack_d0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_d0 = extraout_ECX_00;
  FUN_00679e4e(&iStack_d0,0xf47);
  iVar2 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    uVar4 = FUN_0040cf4d();
    if (uVar4 <= *(uint *)(unaff_EBP + -0x14)) break;
    iStack_cc = 0x6a4dfd;
    uVar5 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uVar5 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00449713();
    iStack_cc = *(int *)(unaff_EBP + -0x28);
    iStack_d0 = 0x6a4e27;
    FUN_00434e21();
    FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffff3c;
    iStack_cc = 0x6a4e3d;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_cc = 0x6a4e50;
    FUN_0040263d();
    iStack_cc = 0x6a4e57;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00414ebb();
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  iStack_d0 = unaff_EBP + -0x1c;
  *(int **)(unaff_EBP + -0x28) = &iStack_cc;
  FUN_00450368();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_d0 = 0x6a4efa;
  FUN_004503f5();
  iStack_d0 = 0x6a4f01;
  iVar2 = FUN_007e3c88();
  iStack_d0 = 0x74;
  *(int *)(extraout_ECX + 0x9c) = (iVar2 + -0x13d) / 7 + -0xf;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar2 == 0) {
    iStack_d0 = 0;
  }
  else {
    iStack_d0 = 0x6a4f33;
    iStack_d0 = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0048b9e9();
  iStack_d0 = 0;
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))(extraout_ECX,1000,1,5,0x180,0x2f,0x144);
  FUN_004ad003((*(int *)(extraout_ECX + 0x9c) < 1) + 1 + *(int *)(extraout_ECX + 0x9c));
  *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + 0x34) = 0x163;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(extraout_ECX + 0x74) = iVar2;
  *(undefined4 *)(extraout_ECX + 0xa4) = *(undefined4 *)(iVar2 + 0x4e4);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    FUN_004504e6(0);
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


