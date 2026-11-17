/* FUN_004ac37e - 0x004ac37e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 * FUN_004ac37e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 *puStack_6c;
  
  FUN_00879bb8();
  puStack_6c = (undefined4 *)(extraout_ECX + 0x70);
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_70 = 0x4ac3a2;
  FUN_00419192();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  switch(*(undefined4 *)(unaff_EBP + 0xc)) {
  case 0:
    puStack_6c = (undefined4 *)0x5b0;
    iStack_70 = unaff_EBP + 0xc;
    iStack_74 = 0x4ac3ce;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac3eb;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 1:
    puStack_6c = (undefined4 *)0x5b1;
    iStack_70 = unaff_EBP + -0x14;
    iStack_74 = 0x4ac40a;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac427;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 2:
    puStack_6c = (undefined4 *)0x5b2;
    iStack_70 = unaff_EBP + -0x18;
    iStack_74 = 0x4ac446;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac463;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 3:
    puStack_6c = (undefined4 *)0x5b3;
    iStack_70 = unaff_EBP + -0x1c;
    iStack_74 = 0x4ac482;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 4899999;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 4:
    puStack_6c = (undefined4 *)0x5b4;
    iStack_70 = unaff_EBP + -0x20;
    iStack_74 = 0x4ac4be;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac4db;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 5:
    puStack_6c = (undefined4 *)0x5b5;
    iStack_70 = unaff_EBP + -0x24;
    iStack_74 = 0x4ac4fa;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac517;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 6:
    puStack_6c = (undefined4 *)0x5b6;
    iStack_70 = unaff_EBP + -0x28;
    iStack_74 = 0x4ac536;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac553;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 7:
    puStack_6c = (undefined4 *)0x5b7;
    iStack_70 = unaff_EBP + -0x2c;
    iStack_74 = 0x4ac572;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac58f;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 8:
    puStack_6c = (undefined4 *)0x5b8;
    iStack_70 = unaff_EBP + -0x30;
    iStack_74 = 0x4ac5ab;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac5c8;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 9:
    puStack_6c = (undefined4 *)0x5b9;
    iStack_70 = unaff_EBP + -0x34;
    iStack_74 = 0x4ac5e4;
    piVar2 = (int *)FUN_00679d86();
    iStack_70 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iStack_70 == 0) {
      puStack_6c = (undefined4 *)0x0;
    }
    else {
      puStack_6c = (undefined4 *)(*(uint *)(iStack_70 + -4) >> 1);
    }
    iStack_74 = 0x4ac601;
    FUN_0046febf();
    iVar4 = *(int *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  default:
    goto switchD_004ac3b4_default;
  }
  if (iVar4 != 0) {
    puStack_6c = (undefined4 *)(iVar4 + -0xc);
    iStack_70 = 0x4ac615;
    FUN_00403384();
  }
switchD_004ac3b4_default:
  puStack_6c = &DAT_00980690;
  iStack_70 = 0x4ac624;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_70 = 0x4ac631;
  FUN_00403191();
  puStack_6c = (undefined4 *)0x0;
  iStack_70 = 0;
  iStack_74 = unaff_EBP + -0x58;
  iStack_78 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_7c = 0x4ac647;
  uVar3 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x34) = &uStack_7c;
  FUN_004033a1(uVar3);
  iVar4 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_74 = 0x4ac679;
  iVar4 = FUN_004032b4();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 0xc) = iVar4;
  *puVar1 = 0;
  if (iVar4 != 0) {
    puStack_6c = (undefined4 *)(unaff_EBP + 0xc);
    iStack_70 = 0x4ac690;
    puStack_6c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_6c < 0) && (puStack_6c != (undefined4 *)0x80004002)) {
      iStack_70 = 0x4ac6a1;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  puStack_6c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_70 = 0x4ac6b1;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    iStack_70 = 0x4ac6bc;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_70 = 0x4ac6c9;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    iStack_70 = 0x4ac6d4;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_70 = 0x4ac6e1;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    iStack_70 = 0x4ac6ec;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_6c = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_70 = 0x4ac6ff;
    FUN_00403384();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


