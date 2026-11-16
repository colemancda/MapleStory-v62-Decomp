/* FUN_5040b2aa - 0x5040b2aa in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040b2aa(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int *piVar6;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar3 = *(undefined4 **)(extraout_ECX + 0xd4);
  *(int *)(unaff_EBP + -0x68) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    puVar3 = (undefined4 *)(unaff_EBP + -0x6c);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *puVar3;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
     (piVar6 = *(int **)(unaff_EBP + -0x6c), piVar6 != (int *)0x0)) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  Ordinal_8(unaff_EBP + -0x7c);
  iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x7c),(short *)&DAT_50439040);
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  iVar4 = *(int *)(extraout_ECX + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar6 = *(int **)(extraout_ECX + 0x40);
  iVar4 = (**(code **)(*piVar6 + 0x8c))
                    (piVar6,0,0,unaff_EBP + -0x2c,unaff_EBP + -0x28,unaff_EBP + -0x3c,
                     unaff_EBP + -0x38,0,0,*(undefined4 *)(unaff_EBP + -0x7c),
                     *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x74),
                     *(undefined4 *)(unaff_EBP + -0x70));
  if (iVar4 < 0) {
    FUN_5042a366(iVar4,piVar6,&DAT_50435298);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x7c));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  FUN_5040b6cf(*(int **)(unaff_EBP + 8),(undefined4 *)(unaff_EBP + -0x34),
               (undefined4 *)(unaff_EBP + -0x24));
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x2c) / 2;
  }
  else {
    iVar4 = (*(int *)(unaff_EBP + -0x24) * *(int *)(unaff_EBP + -0x2c)) /
            *(int *)(unaff_EBP + -0x34);
  }
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x28) / 2;
  }
  else {
    iVar4 = (*(int *)(unaff_EBP + -0x20) * *(int *)(unaff_EBP + -0x28)) /
            *(int *)(unaff_EBP + -0x30);
  }
  *(int *)(unaff_EBP + -0x18) = iVar4;
  FUN_5040b6cf(*(int **)(unaff_EBP + -0x14),(undefined4 *)(unaff_EBP + -0x5c),
               (undefined4 *)(unaff_EBP + -0x4c));
  iVar4 = *(int *)(unaff_EBP + -0x58);
  if ((*(int *)(unaff_EBP + -0x14) == 0) || (*(int *)(unaff_EBP + 8) != 0)) {
    iVar5 = *(int *)(unaff_EBP + -0x5c);
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      iVar5 = (iVar5 * *(int *)(unaff_EBP + -0x2c)) / *(int *)(unaff_EBP + -0x34);
    }
    *(int *)(unaff_EBP + -0x54) = iVar5;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      iVar5 = (iVar4 * *(int *)(unaff_EBP + -0x28)) / *(int *)(unaff_EBP + -0x30);
      goto LAB_5040b42a;
    }
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -0x2c);
    if (iVar5 == 0) {
      iVar5 = *(int *)(unaff_EBP + -0x5c);
    }
    *(int *)(unaff_EBP + -0x54) = iVar5;
    iVar5 = *(int *)(unaff_EBP + -0x28);
    if (iVar5 != 0) {
LAB_5040b42a:
      *(int *)(unaff_EBP + -0x50) = iVar5;
      goto LAB_5040b42d;
    }
  }
  *(int *)(unaff_EBP + -0x50) = iVar4;
LAB_5040b42d:
  if (*(int *)(unaff_EBP + -0x5c) == 0) {
    iVar5 = *(int *)(unaff_EBP + -0x54) / 2;
  }
  else {
    iVar5 = (*(int *)(unaff_EBP + -0x4c) * *(int *)(unaff_EBP + -0x54)) /
            *(int *)(unaff_EBP + -0x5c);
  }
  *(int *)(unaff_EBP + -0x44) = iVar5;
  if (iVar4 == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x50) / 2;
  }
  else {
    iVar4 = (*(int *)(unaff_EBP + -0x48) * *(int *)(unaff_EBP + -0x50)) / iVar4;
  }
  iVar1 = *(int *)(unaff_EBP + -0x68);
  iVar2 = *(int *)(iVar1 + 0x40);
  *(int *)(unaff_EBP + -0x40) = iVar4;
  *(int *)(unaff_EBP + -100) = (*(int *)(unaff_EBP + -0x3c) - iVar5) + *(int *)(unaff_EBP + -0x1c);
  *(int *)(unaff_EBP + -0x60) = (*(int *)(unaff_EBP + -0x38) - iVar4) + *(int *)(unaff_EBP + -0x18);
  if (iVar2 == 0) {
    FUN_5042a358(0x80004003);
  }
  FUN_5040d1a0(*(void **)(iVar1 + 0x40),(void *)(unaff_EBP + -0xac));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_504062ba();
  *(int *)(unaff_EBP + 8) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 != 0) {
    iVar4 = FUN_5040ccad((void *)(unaff_EBP + -0x10),(int *)(unaff_EBP + 8));
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      FUN_5042a358(iVar4);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0xac));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  Ordinal_8(unaff_EBP + -0x8c);
  iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x8c),(short *)&DAT_50439040);
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  Ordinal_8(unaff_EBP + -0x7c);
  iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x7c),(short *)&DAT_50439040);
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar6 == (int *)0x0) {
    FUN_5042a358(0x80004003);
    piVar6 = *(int **)(unaff_EBP + -0x10);
  }
  *(int **)(unaff_EBP + -0x14) = piVar6;
  iVar4 = (**(code **)(*piVar6 + 0x94))
                    (*(undefined4 *)(unaff_EBP + -0x10),
                     *(int *)(unaff_EBP + -100) - *(int *)(unaff_EBP + -0x3c),
                     *(int *)(unaff_EBP + -0x60) - *(int *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                     *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88),
                     *(undefined4 *)(unaff_EBP + -0x84),*(undefined4 *)(unaff_EBP + -0x80));
  if (iVar4 < 0) {
    FUN_5042a366(iVar4,*(int **)(unaff_EBP + -0x14),&DAT_50435298);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x7c));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x8c));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  Ordinal_8(unaff_EBP + -0x9c);
  iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x9c),(short *)&DAT_50439040);
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  Ordinal_8(unaff_EBP + -0x8c);
  iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x8c),(short *)&DAT_50439040);
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x68);
  iVar5 = *(int *)(iVar4 + 0x40);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar5 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar6 = *(int **)(iVar4 + 0x40);
  iVar4 = (**(code **)(*piVar6 + 0x90))
                    (piVar6,*(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88),
                     *(undefined4 *)(unaff_EBP + -0x84),*(undefined4 *)(unaff_EBP + -0x80),
                     *(undefined4 *)(unaff_EBP + -0x9c),*(undefined4 *)(unaff_EBP + -0x98),
                     *(undefined4 *)(unaff_EBP + -0x94),*(undefined4 *)(unaff_EBP + -0x90));
  if (iVar4 < 0) {
    FUN_5042a366(iVar4,piVar6,&DAT_50435298);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x8c));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x9c));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


