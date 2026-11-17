/* FUN_006d43be - 0x006d43be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d43be(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 uVar4;
  int iStack_9c;
  int iStack_98;
  undefined4 *puStack_94;
  
  FUN_00879bb8();
  puStack_94 = (undefined4 *)0x3;
  iStack_98 = 0xfffffffe;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_9c = 0x6d43e2;
  FUN_004031b7();
  puStack_94 = (undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_98 = 0x6d43f2;
  piVar1 = (int *)FUN_004489f5();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    puStack_94 = (undefined4 *)0x80004003;
    iStack_98 = 0x6d4406;
    FUN_00878dfb();
  }
  puStack_94 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_98 = unaff_EBP + -0x18;
  iStack_9c = 0x6d4415;
  FUN_0041141a();
  puStack_94 = (undefined4 *)0x6d441d;
  FUN_004125e6();
  puStack_94 = (undefined4 *)0x6d4425;
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_94 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_98 = 0x6d4432;
  iVar2 = FUN_00402bc3();
  puVar3 = puStack_94;
  if (iVar2 < 0) {
    iStack_98 = 0x6d443d;
    puStack_94 = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_00;
  }
  iVar2 = *(int *)(extraout_ECX + 100);
  if (iVar2 == 0) {
    *(int **)(unaff_EBP + -0x14) = &iStack_9c;
    *(undefined4 *)(extraout_ECX + 0x1c) = 0x127;
    *(undefined4 *)(extraout_ECX + 0x20) = 0x16c;
    uVar4 = 0x749;
  }
  else if (iVar2 == 1) {
    *(int **)(unaff_EBP + -0x14) = &iStack_9c;
    *(undefined4 *)(extraout_ECX + 0x1c) = 0x188;
    *(undefined4 *)(extraout_ECX + 0x20) = 0xf0;
    uVar4 = 0x74a;
  }
  else {
    if (iVar2 != 2) goto LAB_006d44b3;
    *(int **)(unaff_EBP + -0x14) = &iStack_9c;
    *(undefined4 *)(extraout_ECX + 0x1c) = 0xb8;
    *(undefined4 *)(extraout_ECX + 0x20) = 0x16;
    uVar4 = 0x74b;
  }
  puStack_94 = (undefined4 *)0x0;
  iStack_98 = 0;
  iStack_9c = (int)puVar3;
  FUN_00679e4e(&iStack_9c,uVar4);
  FUN_008163ca();
LAB_006d44b3:
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_94 = (undefined4 *)0x3af;
  iStack_98 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_9c = 0x6d44cd;
  piVar1 = (int *)FUN_00679d86();
  iStack_9c = *piVar1;
  puStack_94 = (undefined4 *)0x0;
  iStack_98 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_94 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    iStack_98 = 0x6d44f5;
    FUN_00403384();
  }
  puStack_94 = &DAT_00980690;
  iStack_98 = 0x6d4504;
  FUN_00403191();
  puStack_94 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_98 = 0x6d4511;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 == (int *)0x0) {
    puStack_94 = (undefined4 *)0x80004003;
    iStack_98 = 0x6d4526;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  uVar4 = *(undefined4 *)(extraout_ECX + 0x20);
  iStack_9c = *(int *)(unaff_EBP + -0x3c);
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_94 = *(undefined4 **)(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x1c);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x2c))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x14),uVar4,
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x40));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x70))(piVar1,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x78))(piVar1,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
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
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piVar1 = (int *)FUN_004489f5(unaff_EBP + -0x20);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x90,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x40,
               unaff_EBP + -0x80,unaff_EBP + -0x50,unaff_EBP + -0x60,unaff_EBP + -0x70);
  iVar2 = FUN_00402bc3(unaff_EBP + -0x90);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x80);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = 0;
  do {
    FUN_006d4152(iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


