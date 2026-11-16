/* FUN_5040a74c - 0x5040a74c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040a74c(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  iVar4 = *(int *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffac;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x1c) = iVar4 + 0x1c;
  *(int *)(unaff_EBP + -0x20) = iVar4 + 0x1c;
  FUN_50401895();
  iVar1 = *(int *)(iVar4 + 0x40);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    FUN_5042a358(0x80004003);
  }
  FUN_5040d1a0(*(void **)(iVar4 + 0x40),(void *)(unaff_EBP + -0x54));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_504062ba();
  *(int *)(unaff_EBP + -0x18) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar4 != 0) {
    iVar4 = FUN_5040ccad((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x18));
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      FUN_5042a358(iVar4);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x54));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  FUN_504057b7((short *)(unaff_EBP + -0x44));
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_504057b7((short *)(unaff_EBP + -0x34));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  iVar4 = (**(code **)(*piVar2 + 0x94))
                    (piVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar4 < 0) {
    FUN_5042a366(iVar4,piVar2,&DAT_50435298);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x34));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x44));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  FUN_504057b7((short *)(unaff_EBP + -0x34));
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_504057b7((short *)(unaff_EBP + -0x44));
  iVar4 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar4 + 0x40);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar2 = *(int **)(iVar4 + 0x40);
  iVar4 = (**(code **)(*piVar2 + 0x94))
                    (piVar2,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar4 < 0) {
    FUN_5042a366(iVar4,piVar2,&DAT_50435298);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x44));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x34));
  if (iVar4 < 0) {
    FUN_5042a358(iVar4);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  puVar3 = *(undefined4 **)(unaff_EBP + -0x1c);
  piVar2 = puVar3 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar3 = 0;
  }
  FUN_5040a949();
  return;
}


