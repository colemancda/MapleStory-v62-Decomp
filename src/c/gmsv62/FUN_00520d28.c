/* FUN_00520d28 - 0x00520d28 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00520d28(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0xd4) = 0;
  iStack_78 = 0x584;
  iStack_7c = unaff_EBP + -0x10;
  uStack_80 = 0x520d56;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_80 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_78 = 0;
  iStack_7c = extraout_ECX + 0xcc;
  uStack_84 = 0x520d6b;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_78 = 0x520d7a;
  FUN_00402676();
  iStack_78 = 0x585;
  iStack_7c = unaff_EBP + -0x10;
  uStack_80 = 0x520d8a;
  iStack_78 = FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_7c = 0x520d9a;
  FUN_0044f5f6();
  iStack_78 = unaff_EBP + -0x34;
  iStack_7c = 0xffffff00;
  uStack_80 = 0xc;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_84;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&uStack_84,10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0044974c();
  FUN_004503f9();
  iStack_78 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_7c = 0x520dd8;
  iStack_78 = FUN_00402bc3();
  if (iStack_78 < 0) {
    iStack_7c = 0x520de5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_78 = 0x520df1;
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_78 = 0xca5;
  iStack_7c = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  uStack_80 = 0x520e18;
  iStack_78 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_7c = 0x520e25;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_78 = 0x520e31;
  FUN_00402676();
  iStack_78 = 0x578;
  iStack_7c = 0x520e41;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    iStack_78 = 0;
  }
  else {
    iStack_78 = 0x520e53;
    iStack_78 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_7c = 0x520e64;
  iVar3 = FUN_00450382();
  iStack_78 = unaff_EBP + -0x24;
  iStack_7c = 0;
  uStack_80 = 0x120;
  uStack_84 = 0x52;
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,1);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x78) + 4) + 0x24))(0);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0xca6);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,2,0x85,0x120,0,unaff_EBP + -0x24);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x24))(0);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0xca7);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,1000,0x25,0xac,0,unaff_EBP + -0x24);
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3ec,0x25,0xe4,0,unaff_EBP + -0x24);
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3ea,0x82,0xac,0,unaff_EBP + -0x24);
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3ee,0x82,0xe4,0,unaff_EBP + -0x24);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0xca8);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3e9,0x50,0xac,0,unaff_EBP + -0x24);
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3ed,0x50,0xe4,0,unaff_EBP + -0x24);
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3eb,0xad,0xac,0,unaff_EBP + -0x24);
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3ef,0xad,0xe4,0,unaff_EBP + -0x24);
  piVar5 = (int *)(extraout_ECX + 0xb8);
  *(undefined4 *)(unaff_EBP + -0x10) = 2;
  do {
    (**(code **)(*(int *)(piVar5[-8] + 4) + 0x24))(0);
    (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(0);
    (**(code **)(*(int *)(piVar5[-4] + 4) + 0x24))(0);
    (**(code **)(*(int *)(piVar5[-0xc] + 4) + 0x24))(0);
    piVar5 = piVar5 + 2;
    piVar1 = (int *)(unaff_EBP + -0x10);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  FUN_0048f37f();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xff999999;
  iVar3 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00495bdd(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 200) + 0x20))
            (extraout_ECX,0x3f0,2,0x24,0xfc,0x58,0x12,unaff_EBP + -0x74);
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xca9);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_0049e176(uVar4,0);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xcaa);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0049e176(uVar4,1);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xcab);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0049e176(uVar4,2);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xcac);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0049e176(uVar4,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xcad);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0049e176(uVar4,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 200) + 4) + 0x24))(0);
  *(undefined4 *)(extraout_ECX + 0xdc) = 1000;
  *(undefined4 *)(extraout_ECX + 0xe0) = 0;
  FUN_005213e8();
  FUN_0052212b();
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


