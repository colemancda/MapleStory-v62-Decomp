/* FUN_00717adb - 0x00717adb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00717adb(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar5;
  int unaff_EBP;
  int iStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  
  FUN_00879bb8();
  puStack_84 = (undefined4 *)0x3;
  iStack_88 = 0xfffffffe;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_8c = 0x717afc;
  FUN_004031b7();
  puStack_84 = (undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_88 = 0x717b0c;
  piVar2 = (int *)FUN_004489f5();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    puStack_84 = (undefined4 *)0x80004003;
    iStack_88 = 0x717b20;
    FUN_00878dfb();
  }
  puStack_84 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_88 = unaff_EBP + -0x14;
  iStack_8c = 0x717b2f;
  FUN_0041141a();
  puStack_84 = (undefined4 *)0x717b37;
  FUN_004125e6();
  puStack_84 = (undefined4 *)0x717b3f;
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_84 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_88 = 0x717b4c;
  iVar3 = FUN_00402bc3();
  puVar5 = puStack_84;
  if (iVar3 < 0) {
    iStack_88 = 0x717b57;
    puStack_84 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar5 = (undefined4 *)extraout_ECX_00;
  }
  puStack_84 = (undefined4 *)0x0;
  iStack_88 = 0;
  *(int **)(unaff_EBP + -0x18) = &iStack_8c;
  *(undefined4 *)(extraout_ECX + 0x1c) = 0xf8;
  *(undefined4 *)(extraout_ECX + 0x20) = 0x10f;
  iStack_8c = (int)puVar5;
  FUN_00679e4e(&iStack_8c,0xddf);
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_84 = (undefined4 *)0x3af;
  iStack_88 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_8c = 0x717ba0;
  piVar2 = (int *)FUN_00679d86();
  iStack_8c = *piVar2;
  puStack_84 = (undefined4 *)0x0;
  iStack_88 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_84 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    iStack_88 = 0x717bc8;
    FUN_00403384();
  }
  puStack_84 = &DAT_00980690;
  iStack_88 = 0x717bd7;
  FUN_00403191();
  puStack_84 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_88 = 0x717be4;
  FUN_00403191();
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar2 == (int *)0x0) {
    puStack_84 = (undefined4 *)0x80004003;
    iStack_88 = 0x717bf9;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  uVar1 = *(undefined4 *)(extraout_ECX + 0x20);
  iStack_8c = *(int *)(unaff_EBP + -0x3c);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_84 = *(undefined4 **)(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x1c);
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x2c))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x18),uVar1,
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x40));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x80,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x40,
               unaff_EBP + -0x30,unaff_EBP + -0x50,unaff_EBP + -0x60,unaff_EBP + -0x70);
  iVar4 = FUN_00402bc3(unaff_EBP + -0x80);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x20);
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00424f2f((800 - *(int *)(iVar3 + 0x1c)) / 2,(600 - *(int *)(iVar3 + 0x20)) / 2,
               unaff_EBP + -0x70,unaff_EBP + -0x60);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


