/* FUN_0052493b - 0x0052493b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052493b(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *extraout_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_EBP;
  uint uVar13;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x30) = extraout_ECX;
  *(int **)(unaff_EBP + -0x3c) = extraout_ECX + 4;
  *(int **)(unaff_EBP + -0x40) = extraout_ECX + 4;
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar8 = extraout_ECX + 1;
  *(int **)(unaff_EBP + -0x38) = piVar8;
  FUN_00524ec7();
  piVar1 = extraout_ECX + 2;
  FUN_00524ec7();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  piVar5 = extraout_ECX;
  while ((iVar9 = *piVar5, iVar9 != 0 && (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar9 + -4)))) {
    puVar4 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + iVar9);
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar4;
    puVar3 = (undefined4 *)FUN_00524ee9(0xffffffff);
    *puVar3 = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -0x2c) = puVar4[2];
    puVar3 = (undefined4 *)FUN_00524ee9(0xffffffff);
    *puVar3 = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -0x2c) = puVar4[1];
    puVar3 = (undefined4 *)FUN_00524ee9(0xffffffff);
    *puVar3 = *(undefined4 *)(unaff_EBP + -0x2c);
    uVar6 = puVar4[3];
    puVar4 = (undefined4 *)FUN_00524ee9(0xffffffff);
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x10;
    *puVar4 = uVar6;
    piVar5 = *(int **)(unaff_EBP + -0x30);
  }
  FUN_0052481b(piVar8);
  FUN_0052481b(piVar1);
  iVar9 = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  while ((iVar10 = *piVar5, iVar10 != 0 && (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar10 + -4))))
  {
    iVar10 = *(int *)(unaff_EBP + -0x24) + iVar10;
    iVar9 = *piVar1;
    *(int *)(unaff_EBP + -0x18) = iVar10;
    iVar12 = 0;
    if (iVar9 != 0) {
      iVar12 = *(int *)(iVar9 + -4);
    }
    piVar5 = (int *)FUN_00525b6f(iVar9,iVar9 + iVar12 * 4,iVar10 + 4,0);
    iVar9 = *piVar1;
    iVar10 = 0;
    if (iVar9 != 0) {
      iVar10 = *(int *)(iVar9 + -4);
    }
    uVar6 = FUN_00525b6f(iVar9,iVar9 + iVar10 * 4,*(int *)(unaff_EBP + -0x18) + 0xc,0);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
    iVar9 = *piVar8;
    iVar10 = 0;
    if (iVar9 != 0) {
      iVar10 = *(int *)(iVar9 + -4);
    }
    uVar6 = FUN_00525b6f(iVar9,iVar9 + iVar10 * 4,*(undefined4 *)(unaff_EBP + -0x18),0);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    iVar9 = *piVar8;
    iVar10 = 0;
    if (iVar9 != 0) {
      iVar10 = *(int *)(iVar9 + -4);
    }
    iVar12 = *(int *)(unaff_EBP + -0x18) + 8;
    *(int *)(unaff_EBP + -0x34) = iVar12;
    piVar7 = (int *)FUN_00525b6f(iVar9,iVar9 + iVar10 * 4,iVar12,0);
    if ((((*piVar5 == *(int *)(*(int *)(unaff_EBP + -0x18) + 4)) &&
         (**(int **)(unaff_EBP + -0x2c) == *(int *)(*(int *)(unaff_EBP + -0x18) + 0xc))) &&
        (**(int **)(unaff_EBP + -0x28) == **(int **)(unaff_EBP + -0x18))) &&
       (*piVar7 == **(int **)(unaff_EBP + -0x34))) {
      iVar9 = *piVar1;
      iVar12 = *(int *)(unaff_EBP + -0x28) - *piVar8 >> 2;
      iVar10 = (int)piVar7 - *piVar8 >> 2;
      *(int *)(unaff_EBP + -0x34) = iVar12;
      *(int *)(unaff_EBP + -0x4c) = iVar12;
      *(int *)(unaff_EBP + -0x28) = iVar10;
      *(int *)(unaff_EBP + -0x50) = (int)piVar5 - iVar9 >> 2;
      *(int *)(unaff_EBP + -0x48) = iVar10;
      *(undefined1 *)(unaff_EBP + -0x44) = 1;
      puVar4 = (undefined4 *)FUN_0052518e(0xffffffff);
      iVar9 = *(int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -0x54) = 0;
      *puVar4 = *(undefined4 *)(unaff_EBP + -0x50);
      puVar4[1] = *(undefined4 *)(unaff_EBP + -0x4c);
      puVar4[2] = *(undefined4 *)(unaff_EBP + -0x48);
      puVar4[3] = *(undefined4 *)(unaff_EBP + -0x44);
      *(int *)(unaff_EBP + -0x60) = iVar9 - *piVar1 >> 2;
      *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x28);
      puVar4 = (undefined4 *)FUN_0052518e(0xffffffff);
      *puVar4 = *(undefined4 *)(unaff_EBP + -0x60);
      puVar4[1] = *(undefined4 *)(unaff_EBP + -0x5c);
      puVar4[2] = *(undefined4 *)(unaff_EBP + -0x58);
      puVar4[3] = *(undefined4 *)(unaff_EBP + -0x54);
      piVar8 = *(int **)(unaff_EBP + -0x38);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x10;
    iVar9 = *(int *)(unaff_EBP + -0x20);
    piVar5 = *(int **)(unaff_EBP + -0x30);
  }
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(iVar9 + -4);
  }
  FUN_00525bae(iVar9,iVar10 * 0x10 + iVar9,0);
  uVar6 = 0;
  if (*piVar1 != 0) {
    uVar6 = *(undefined4 *)(*piVar1 + -4);
  }
  FUN_00525039(uVar6,1,unaff_EBP + -0xd);
  for (uVar13 = 0; (iVar9 = piVar5[3], iVar9 != 0 && (uVar13 < *(uint *)(iVar9 + -4)));
      uVar13 = uVar13 + 1) {
    uVar6 = 0;
    if (*piVar8 != 0) {
      uVar6 = *(undefined4 *)(*piVar8 + -4);
    }
    FUN_0052521d(uVar6,1,unaff_EBP + -0xd);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar9 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar6 = 0;
  if (iVar9 != 0) {
    uVar6 = *(undefined4 *)(iVar9 + -4);
  }
  FUN_00524f59(uVar6,1,unaff_EBP + -0xd);
  iVar9 = 0;
  for (uVar13 = 0;
      (iVar10 = *(int *)(unaff_EBP + -0x1c), iVar10 != 0 && (uVar13 < *(uint *)(iVar10 + -4)));
      uVar13 = uVar13 + 1) {
    *(undefined4 *)(iVar10 + uVar13 * 4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar12 = *(int *)(unaff_EBP + -0x20), iVar12 != 0 &&
         (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar12 + -4)))) {
    iVar11 = *(int *)(iVar12 + 4 + iVar9);
    piVar8 = (int *)(iVar12 + iVar9);
    if (iVar11 < piVar8[2]) {
      do {
        piVar1 = (int *)(iVar10 + iVar11 * 4);
        if ((char)piVar8[3] == '\0') {
          *piVar1 = *piVar1 + -1;
        }
        else {
          *piVar1 = *piVar1 + 1;
        }
        iVar10 = *(int *)(unaff_EBP + -0x1c);
        iVar11 = iVar11 + 1;
      } while (iVar11 < piVar8[2]);
    }
    iVar12 = *piVar8;
    iVar11 = piVar5[3];
    for (uVar13 = 0;
        (iVar2 = *(int *)(iVar11 + iVar12 * 4), iVar2 != 0 && (uVar13 < *(uint *)(iVar2 + -4)));
        uVar13 = uVar13 + 1) {
      *(bool *)(iVar2 + uVar13) = 0 < *(int *)(iVar10 + uVar13 * 4);
      iVar10 = *(int *)(unaff_EBP + -0x1c);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    iVar9 = iVar9 + 0x10;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00524ec7();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0052516c();
  puVar4 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (puVar4 != (undefined4 *)0x0) {
    piVar8 = puVar4 + 1;
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      *puVar4 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


