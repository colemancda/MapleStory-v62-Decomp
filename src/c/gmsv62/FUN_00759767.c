/* FUN_00759767 - 0x00759767 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00759767(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  int unaff_EBP;
  bool bVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if ((puVar1 == (undefined4 *)0x0) || (puVar1[1] == 0)) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(puVar1[1] + 0x28);
  }
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
LAB_007597c8:
    *(undefined4 *)(unaff_EBP + 0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = puVar1[2];
    if (puVar1[1] == 0) goto LAB_007597c8;
    *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(puVar1[1] + 0x20);
  }
  bVar8 = *(int *)(unaff_EBP + 0x1c) == 0;
  if (bVar8) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    puVar2 = &DAT_008f1060;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x20) = puVar1[5];
    puVar2 = puVar1 + 6;
  }
  uVar7 = puVar2[1];
  *(undefined4 *)(unaff_EBP + -0x40) = *puVar2;
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar7;
  if (bVar8) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    puVar2 = (undefined4 *)(unaff_EBP + -0x30);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x1c) = puVar1[8];
    puVar2 = puVar1 + 9;
  }
  iVar3 = puVar2[1];
  *(int *)(unaff_EBP + -0x34) = iVar3;
  if (iVar3 != 0) {
    uStack_48 = 0x75982c;
    InterlockedIncrement((LONG *)(iVar3 + 4));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(byte *)(unaff_EBP + -0x28) & 1) != 0) && (*(int *)(unaff_EBP + -0x2c) != 0)) {
    uStack_48 = 0x759843;
    FUN_0048ba7b();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  piVar9 = *(int **)(unaff_EBP + 0x10);
  iVar3 = FUN_0045e2eb();
  *(int *)(unaff_EBP + 0x10) = iVar3;
  uVar7 = 1000000;
  iVar3 = iVar3 / 1000000;
  if (iVar3 == 1) {
    iVar3 = 1;
    goto LAB_00759893;
  }
  if (1 < iVar3) {
    if (iVar3 < 5) {
      iVar3 = 2;
      goto LAB_00759893;
    }
    if (iVar3 == 5) {
      uVar7 = 10000;
      iVar3 = 3 - (uint)(*(int *)(unaff_EBP + 0x10) / 10000 != 500);
      goto LAB_00759893;
    }
  }
  iVar3 = 0;
LAB_00759893:
  if (iVar3 == 1) {
    *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_4c;
    uStack_4c = uVar7;
    uStack_48 = uVar7;
    FUN_0052e0fe(unaff_EBP + -0x38);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = unaff_EBP + -0x40;
    uVar15 = *(undefined4 *)(unaff_EBP + -0x20);
    uVar14 = *(undefined4 *)(unaff_EBP + 0x18);
    uVar13 = *(undefined4 *)(unaff_EBP + 0x14);
    uVar12 = *(undefined4 *)(unaff_EBP + -0x10);
    uVar11 = *(undefined4 *)(unaff_EBP + -0x14);
    uVar10 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar5 = FUN_006b40e7(piVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,iVar3,uVar7);
    FUN_0074eacf(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar5,uVar10,uVar11
                 ,uVar12,uVar13,uVar14,uVar15,iVar3,uVar7);
  }
  else if (iVar3 == 2) {
    *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_4c;
    uStack_4c = uVar7;
    uStack_48 = uVar7;
    FUN_0052e0fe(unaff_EBP + -0x38);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = unaff_EBP + -0x40;
    uVar15 = *(undefined4 *)(unaff_EBP + -0x20);
    uVar14 = *(undefined4 *)(unaff_EBP + 0x18);
    uVar13 = *(undefined4 *)(unaff_EBP + 0x14);
    uVar12 = *(undefined4 *)(unaff_EBP + -0x10);
    iVar4 = FUN_007599a5(piVar9,uVar12,uVar13,uVar14,uVar15,iVar3,uVar7);
    iVar4 = iVar4 + 0x40;
    uVar11 = *(undefined4 *)(unaff_EBP + -0x14);
    uVar10 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar5 = (**(code **)(*piVar9 + 4))(uVar10,uVar11,iVar4);
    piVar9 = piVar9 + 8;
    uVar6 = thunk_FUN_0045e2eb(piVar9,uVar5);
    FUN_007529b7(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar6,piVar9,uVar5,
                 uVar10,uVar11,iVar4,uVar12,uVar13,uVar14,uVar15,iVar3,uVar7);
  }
  else if (iVar3 == 3) {
    if (puVar1 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = puVar1[3];
    }
    uStack_48 = *(undefined4 *)(unaff_EBP + 0x14);
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x10);
    FUN_007522d5(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),piVar9,uVar7,0,
                 *(undefined4 *)(unaff_EBP + -0x14));
  }
  else {
    FUN_0074d6fb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    uStack_48 = 0x759994;
    FUN_0048ba7b();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


