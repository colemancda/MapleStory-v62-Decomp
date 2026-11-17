/* FUN_00564909 - 0x00564909 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00564909(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar9;
  undefined4 uVar10;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  iVar5 = *(int *)(extraout_ECX + 0x13c);
  *(int *)(unaff_EBP + -0x14) = iVar5;
  if (iVar4 < 0) {
    iVar4 = iVar5 + 1;
    iVar5 = iVar4 / 5;
    iVar4 = iVar4 % 5;
  }
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(int *)(extraout_ECX + 0x13c) = iVar4;
  if (iVar1 == iVar4) goto LAB_00564c61;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(DAT_00973cd8 + 0x18);
  iVar4 = FUN_0087a90a(*(int *)(unaff_EBP + -0x14) - iVar4);
  iVar5 = iVar4 * 300 + 500;
  iVar4 = *(int *)(unaff_EBP + -0x1c) + iVar5;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(extraout_ECX + 0x140) = iVar4;
  if (*(int *)(extraout_ECX + 0x13c) == 1) {
    uVar10 = 0x11;
  }
  else if (*(int *)(extraout_ECX + 0x13c) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  FUN_00579c5c(uVar10);
  FUN_008161f1(0);
  if (*(int *)(extraout_ECX + 0x1a0) != 0) {
    FUN_004de7d7(0);
  }
  iVar4 = *(int *)(extraout_ECX + 0x13c);
  if (iVar4 == 0) {
    *(undefined4 *)(extraout_ECX + 0x144) = 0;
    if (*(int *)(extraout_ECX + 0x1a8) != 0) {
      FUN_004de7d7(0);
    }
    goto LAB_00564b44;
  }
  if (iVar4 == 1) {
    *(undefined4 *)(extraout_ECX + 0x160) = 0xffffffff;
    FUN_0056aa6e(6,unaff_EBP + 0xb);
    FUN_0056aae5(6,unaff_EBP + -0xd);
    FUN_0056aa6e(0x3c,unaff_EBP + -0xe);
    FUN_0056aae5(0x3c,unaff_EBP + -0xf);
    if (*(int *)(extraout_ECX + 0x1a8) != 0) {
      FUN_004de7d7(0);
    }
    if (*(int *)(extraout_ECX + 0x150) == 1) {
      if ((DAT_0097942c != 0) && (FUN_00815de9(), DAT_0097942c != 0)) {
        (*(code *)**(undefined4 **)(DAT_0097942c + 8))(1);
      }
      iVar4 = FUN_004029b9(0x150);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar4 != 0) {
        FUN_0058db4a(extraout_ECX);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0060142b(4,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_004751b2(unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
    iVar1 = DAT_0097942c;
    if (*(int *)(unaff_EBP + -0x14) == 4) {
      FUN_00568c7a();
      iVar1 = DAT_0097942c;
    }
joined_r0x00564b12:
    if ((DAT_00978364 != 0) && (iVar1 != 0)) {
      uVar6 = -(uint)(iVar1 != 0) & iVar1 + 4U;
LAB_005649f2:
      FUN_00817f6e(uVar6);
    }
  }
  else {
    iVar1 = DAT_0097941c;
    if (iVar4 == 2) goto joined_r0x00564b12;
    if (iVar4 != 3) {
      if (iVar4 == 4) {
        *(undefined4 *)(*(int *)(extraout_ECX + 0x198) + 0xc0) = 0;
        goto LAB_00564b44;
      }
      uVar6 = -(uint)(extraout_ECX != 0) & extraout_ECX + 4U;
      goto LAB_005649f2;
    }
  }
LAB_00564b44:
  uVar7 = FUN_00569760(*(undefined4 *)(unaff_EBP + -0x14));
  uVar10 = *(undefined4 *)(extraout_ECX + 0x13c);
  *(undefined4 *)(unaff_EBP + 8) = uVar7;
  uVar10 = FUN_00569760(uVar10);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar10;
  if (*(int *)(unaff_EBP + -0x14) == 4) {
    uVar10 = FUN_00569760(1);
    *(undefined4 *)(unaff_EBP + 8) = uVar10;
  }
  if (*(int *)(extraout_ECX + 0x13c) == 4) {
    uVar10 = FUN_00569760(1);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar10;
  }
  uVar3 = _DAT_008ebc78;
  *(undefined8 *)(unaff_EBP + -0x84) = _DAT_008ebc78;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(double *)(unaff_EBP + -0x7c) = (double)*(int *)(unaff_EBP + 8);
  *(undefined8 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  bVar9 = DAT_0097c1ac == 0;
  *(int *)(unaff_EBP + -0x14) =
       (((*(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + 8)) * 7000) / iVar5) / 2;
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(extraout_ECX + 0x140);
  *(double *)(unaff_EBP + -0x6c) = (double)*(int *)(unaff_EBP + -0x14);
  *(undefined8 *)(unaff_EBP + -0x54) = uVar3;
  *(double *)(unaff_EBP + -0x4c) = (double)*(int *)(unaff_EBP + -0x18);
  *(undefined8 *)(unaff_EBP + -0x44) = 0;
  *(undefined8 *)(unaff_EBP + -0x3c) = 0;
  if (bVar9) {
    FUN_00878dfb(0x80004003);
  }
  puVar8 = (undefined4 *)FUN_00429328(unaff_EBP + 8);
  uVar10 = *puVar8;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0042e348(uVar10,2,unaff_EBP + -0x8c);
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  puVar8 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x4d8);
  uVar10 = *puVar8;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_007d3cdd(uVar10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_00402676();
LAB_00564c61:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


