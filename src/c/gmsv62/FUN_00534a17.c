/* FUN_00534a17 - 0x00534a17 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00534a17(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x3af);
  uVar5 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040381b(uVar5,unaff_EBP + -0x10,0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  *(undefined4 *)(extraout_ECX + 0x1c) = 0x10a;
  *(undefined4 *)(extraout_ECX + 0x20) = 0x10c;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00403191(&DAT_00980690);
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  uVar5 = *(undefined4 *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x1c);
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x2c))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x18),uVar5,
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar3 + 0x70))(piVar3,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar3 + 0x78))(piVar3,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x1c);
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x8c,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x4c,
               unaff_EBP + -0x3c,unaff_EBP + -0x5c,unaff_EBP + -0x6c,unaff_EBP + -0x7c);
  iVar4 = FUN_00402bc3(unaff_EBP + -0x8c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x90))
                    (piVar3,(800 - *(int *)(iVar2 + 0x1c)) / 2,(600 - *(int *)(iVar2 + 0x20)) / 2,
                     *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                     *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                     *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
  }
  FUN_004125d9();
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004abf25();
  }
  iVar2 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0048b9e9(uVar5);
  FUN_005354ab();
  FUN_00534e6a();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uVar5 = FUN_00679d86(unaff_EBP + -0x1c,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00419192(uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00402676();
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00450382(uVar5);
  (**(code **)(**(int **)(iVar2 + 0x8c) + 0x20))(iVar2,2,0xf3,0xc,0,unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


