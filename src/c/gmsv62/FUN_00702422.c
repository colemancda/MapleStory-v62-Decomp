/* FUN_00702422 - 0x00702422 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00702422(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f06c8;
  extraout_ECX[-1] = &PTR_FUN_008f067c;
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0678;
  piVar3 = (int *)extraout_ECX[0x17f];
  *(undefined4 *)(unaff_EBP + -4) = 0x15;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + extraout_ECX[0x180];
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 != 0) {
        iVar5 = *piVar3;
        goto LAB_0070247d;
      }
    }
  }
  iVar5 = 0;
LAB_0070247d:
  *(int *)(unaff_EBP + -0x10) = iVar5;
  while (iVar5 != 0) {
    uVar6 = 0;
    puVar4 = (undefined4 *)FUN_0070636c(unaff_EBP + -0x10,unaff_EBP + -0x1c);
    uVar2 = *puVar4;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    iVar5 = FUN_00702658(uVar2);
    if (iVar5 == 0) {
      for (; (iVar5 = extraout_ECX[0x15c], iVar5 != 0 && (uVar6 < *(uint *)(iVar5 + -4)));
          uVar6 = uVar6 + 1) {
        if (*(int *)(iVar5 + uVar6 * 4) == *(int *)(unaff_EBP + -0x14)) {
          FUN_007032b3(uVar6);
        }
      }
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_004f1a88();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_004f1a88();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  extraout_ECX[0x17e] = &PTR_FUN_008f0054;
  FUN_006df0c9();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  extraout_ECX[0x177] = &PTR_FUN_008f0700;
  FUN_0070628c();
  piVar3 = (int *)extraout_ECX[0x176];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x175];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087a0b8(extraout_ECX + 0x169,8,5,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00450463();
  piVar3 = (int *)extraout_ECX[0x164];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x163];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x162];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x161];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x160];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x15f];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x15e];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  DAT_0097bdc4 = 0;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


