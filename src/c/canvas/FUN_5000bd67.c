/* FUN_5000bd67 - 0x5000bd67 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000bd67(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int unaff_EBP;
  
  FUN_50012d80();
  iVar7 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  if (iVar7 < 0) {
    FUN_5000bf0f();
    return;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(iVar1 + 0x1c) = iVar7;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x20;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x20;
  FUN_500024f7();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piVar6 = (int *)FUN_50005ffb((void *)(unaff_EBP + 8));
  iVar2 = *(int *)(iVar1 + 0x18);
  *(int **)(unaff_EBP + 0xc) = piVar6;
  FUN_500069c0((void *)(unaff_EBP + -0x3c),iVar2,3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_500069c0((void *)(unaff_EBP + -0x2c),iVar7,3);
  iVar7 = *piVar6;
  uVar3 = *(undefined4 *)(iVar1 + 0x2c);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  piVar6 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar7 = (**(code **)(iVar7 + 0x2c))
                    (piVar6,uVar4,uVar3,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar7 < 0) {
    FUN_50012ca5(iVar7,piVar6,&DAT_50018368);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar7 = FUN_5000630c((short *)(unaff_EBP + -0x2c));
  if (iVar7 < 0) {
    FUN_50012c97(iVar7);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar7 = FUN_5000630c((short *)(unaff_EBP + -0x3c));
  if (iVar7 < 0) {
    FUN_50012c97(iVar7);
  }
  Ordinal_8(unaff_EBP + -0x2c);
  iVar7 = FUN_50006336((short *)(unaff_EBP + -0x2c),(short *)&DAT_50086448);
  if (iVar7 < 0) {
    FUN_50012c97(iVar7);
  }
  iVar7 = *piVar6;
  piVar6 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar7 = (**(code **)(iVar7 + 0x80))
                    (piVar6,0,0,iVar1,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20));
  if (iVar7 < 0) {
    FUN_50012ca5(iVar7,piVar6,&DAT_50018368);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar7 = FUN_5000630c((short *)(unaff_EBP + -0x2c));
  if (iVar7 < 0) {
    FUN_50012c97(iVar7);
  }
  *(int *)(iVar1 + 0x30) = piVar6[0xc];
  *(int *)(iVar1 + 0x34) = piVar6[0xd];
  *(int *)(iVar1 + 0x38) = piVar6[0xe];
  *(int *)(iVar1 + 0x3c) = piVar6[0xf];
  FUN_50003bdf((int *)(iVar1 + 0x40));
  *(int *)(iVar1 + 0x40) = piVar6[0x10];
  piVar6[0x10] = 0;
  piVar6 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x14);
  piVar6 = puVar5 + 1;
  *piVar6 = *piVar6 + -1;
  if (*piVar6 == 0) {
    *puVar5 = 0;
  }
  FUN_5000bf0f();
  return;
}


