/* FUN_0057de08 - 0x0057de08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057de08(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 *puStack_90;
  
  FUN_00879bb8();
  puStack_90 = &DAT_00980690;
  uStack_94 = 0x57de2b;
  FUN_00403191();
  puStack_90 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_94 = 0x57de39;
  FUN_00403191();
  puStack_90 = (undefined4 *)0x0;
  uStack_94 = 0;
  iStack_98 = unaff_EBP + -0x44;
  iStack_9c = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_a0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_a0,0xba5);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_98 = 0x57de85;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  puStack_90 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_94 = 0x57de97;
  puStack_90 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_90 < 0) && (puStack_90 != (undefined4 *)0x80004002)) {
    uStack_94 = 0x57dea8;
    FUN_00878dfb();
  }
  puStack_90 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_94 = 0x57deb5;
  puStack_90 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_90 < 0) {
    uStack_94 = 0x57dec0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_90 = (undefined4 *)(unaff_EBP + -0x34);
  uStack_94 = 0x57decd;
  puStack_90 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_90 < 0) {
    uStack_94 = 0x57ded8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_90 = (undefined4 *)(unaff_EBP + -0x44);
  uStack_94 = 0x57dee5;
  puStack_90 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_90 < 0) {
    uStack_94 = 0x57def0;
    FUN_00878dfb();
  }
  puStack_90 = (undefined4 *)0x57defb;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xff000000;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puStack_90 = (undefined4 *)0xf4;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_94 = 0x57df2d;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    puStack_90 = (undefined4 *)0x0;
  }
  else {
    puStack_90 = (undefined4 *)0x57df3f;
    puStack_90 = (undefined4 *)FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_94 = 0x57df53;
  FUN_00495bdd();
  puStack_90 = (undefined4 *)(extraout_ECX + 0xec);
  uStack_94 = 0x14;
  iStack_98 = 0x55;
  iStack_9c = 0x62;
  uStack_a0 = 0x9b;
  (**(code **)(**(int **)(extraout_ECX + 0x130) + 0x20))(extraout_ECX,0x1f44,0);
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x3a0);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0049e176(uVar1,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x3a1);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0049e176(uVar1,1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0xba7);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x1f42,0xbe,0x96,1,unaff_EBP + -0x24);
  uVar1 = FUN_00679d86(unaff_EBP + -0x14,0xba8);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x1f43,0x106,0x96,1,unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


