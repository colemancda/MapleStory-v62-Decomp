/* FUN_5040b72b - 0x5040b72b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040b72b(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  FUN_5042a430();
  iVar9 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar9 != 0) {
    if (iVar9 < 0) {
      iVar9 = -iVar9;
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      *(int *)(unaff_EBP + 8) = iVar9;
    }
    puVar5 = *(undefined4 **)(extraout_ECX + 0xd4);
    if (puVar5 == (undefined4 *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      puVar5 = (undefined4 *)(unaff_EBP + -0x14);
    }
    piVar8 = (int *)*puVar5;
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
       (piVar4 = *(int **)(unaff_EBP + -0x14), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    FUN_5040b6cf(piVar8,(undefined4 *)(unaff_EBP + -0x2c),(undefined4 *)(unaff_EBP + -0x24));
    iVar7 = 0;
    if (*(int *)(extraout_ECX + 0x40) == 0) {
      FUN_5042a358(0x80004003);
    }
    FUN_5040d1a0(*(void **)(extraout_ECX + 0x40),(void *)(unaff_EBP + -0x4c));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar6 = FUN_504062ba();
    *(int *)(unaff_EBP + -0x14) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar6 != 0) {
      iVar6 = FUN_5040ccad((void *)(unaff_EBP + -0x10),(int *)(unaff_EBP + -0x14));
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        FUN_5042a358(iVar6);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar6 = FUN_5040278b((short *)(unaff_EBP + -0x4c));
    if (iVar6 < 0) {
      FUN_5042a358(iVar6);
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      if (*(int *)(extraout_ECX + 0x48) != 0) {
        iVar7 = ((*(int *)(unaff_EBP + -0x24) * 2 - *(int *)(unaff_EBP + -0x2c)) * (100 - iVar9)) /
                100;
      }
      FUN_504057b7((short *)(unaff_EBP + -0x3c));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_5042a358(0x80004003);
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      iVar6 = *piVar8;
      puVar5 = *(undefined4 **)(unaff_EBP + 0xc);
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      *(int **)(unaff_EBP + -0x18) = piVar8;
      iVar9 = (**(code **)(iVar6 + 0x90))
                        (piVar8,(iVar7 - ((iVar9 + -100) * *(int *)(unaff_EBP + -0x2c)) / 200) -
                                *(int *)(unaff_EBP + -0x24),
                         -(((iVar9 + -100) * *(int *)(unaff_EBP + -0x28)) / 200) -
                         *(int *)(unaff_EBP + -0x20),uVar1,uVar2,uVar3,puVar5[3],
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
      if (iVar9 < 0) {
        FUN_5042a366(iVar9,*(int **)(unaff_EBP + -0x18),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar9 = FUN_5040278b((short *)(unaff_EBP + -0x3c));
      if (iVar9 < 0) {
        FUN_5042a358(iVar9);
      }
      iVar9 = *(int *)(unaff_EBP + -0x1c);
    }
    else {
      FUN_504057b7((short *)(unaff_EBP + -0x3c));
      piVar8 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar8 == (int *)0x0) {
        FUN_5042a358(0x80004003);
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      *(int **)(unaff_EBP + -0x1c) = piVar8;
      puVar5 = *(undefined4 **)(unaff_EBP + 0xc);
      iVar9 = (**(code **)(*piVar8 + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x10),
                         (*(int *)(unaff_EBP + -0x24) * iVar9) / -100,
                         (*(int *)(unaff_EBP + -0x20) * iVar9) / -100,*puVar5,puVar5[1],puVar5[2],
                         puVar5[3],*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30));
      if (iVar9 < 0) {
        FUN_5042a366(iVar9,*(int **)(unaff_EBP + -0x1c),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar7 = FUN_5040278b((short *)(unaff_EBP + -0x3c));
      iVar9 = extraout_ECX;
      if (iVar7 < 0) {
        FUN_5042a358(iVar7);
      }
    }
    Ordinal_8(unaff_EBP + -0x3c);
    iVar7 = FUN_504057dd((short *)(unaff_EBP + -0x3c),(short *)&DAT_50439040);
    if (iVar7 < 0) {
      FUN_5042a358(iVar7);
    }
    iVar7 = *(int *)(iVar9 + 0x40);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar7 == 0) {
      FUN_5042a358(0x80004003);
    }
    piVar8 = *(int **)(iVar9 + 0x40);
    puVar5 = *(undefined4 **)(unaff_EBP + 0xc);
    iVar9 = (**(code **)(*piVar8 + 0x90))
                      (piVar8,(*(int *)(unaff_EBP + -0x2c) * *(int *)(unaff_EBP + 8)) / 100,
                       (*(int *)(unaff_EBP + -0x28) * *(int *)(unaff_EBP + 8)) / 100,*puVar5,
                       puVar5[1],puVar5[2],puVar5[3],*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30));
    if (iVar9 < 0) {
      FUN_5042a366(iVar9,piVar8,&DAT_50435298);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar9 = FUN_5040278b((short *)(unaff_EBP + -0x3c));
    if (iVar9 < 0) {
      FUN_5042a358(iVar9);
    }
    piVar8 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


