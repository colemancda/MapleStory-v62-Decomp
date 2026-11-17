/* FUN_007f115f - 0x007f115f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007f115f(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int iVar7;
  int unaff_EBP;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = *(undefined4 *)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + 0xc) < *(int *)(extraout_ECX + 0x130)) {
    *(int *)(unaff_EBP + 0xc) = *(int *)(extraout_ECX + 0x130);
  }
  else if (*(int *)(extraout_ECX + 0x138) < *(int *)(unaff_EBP + 0xc)) {
    *(int *)(unaff_EBP + 0xc) = *(int *)(extraout_ECX + 0x138);
  }
  if (*(int *)(unaff_EBP + 0x10) < *(int *)(extraout_ECX + 0x134)) {
    *(int *)(unaff_EBP + 0x10) = *(int *)(extraout_ECX + 0x134);
  }
  else if (*(int *)(extraout_ECX + 0x13c) < *(int *)(unaff_EBP + 0x10)) {
    *(int *)(unaff_EBP + 0x10) = *(int *)(extraout_ECX + 0x13c);
  }
  uVar2 = FUN_004f1a11((double)*(int *)(unaff_EBP + 0xc));
  iVar7 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x30) = uVar2;
  uVar2 = FUN_004f1a11((double)iVar7);
  iVar7 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(extraout_ECX + 0x48) = uVar2;
  uVar2 = FUN_004f1a11((double)iVar7);
  iVar7 = *(int *)(unaff_EBP + 0x18);
  *(undefined4 *)(extraout_ECX + 0x60) = uVar2;
  uVar2 = FUN_004f1a11((double)iVar7);
  iVar7 = *(int *)(unaff_EBP + 0x20);
  *(undefined4 *)(extraout_ECX + 0x78) = uVar2;
  *(undefined4 *)(extraout_ECX + 0x118) = 0;
  *(int *)(extraout_ECX + 0x114) = iVar7;
  *(int *)(extraout_ECX + 0x110) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)(extraout_ECX + 300) = 0;
    *(undefined4 *)(extraout_ECX + 0x128) = 7;
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x128) = *(undefined4 *)(iVar7 + 0x1c);
    *(undefined4 *)(extraout_ECX + 300) = *(undefined4 *)(iVar7 + 0x20);
    FUN_007f13de((undefined4 *)(extraout_ECX + 0x20),iVar7);
    FUN_007f14d1(extraout_ECX + 0xe0,iVar7);
  }
  uVar1 = *(uint *)(unaff_EBP + 0x1c);
  puVar8 = (undefined4 *)(extraout_ECX + 0x20);
  puVar9 = (undefined4 *)(extraout_ECX + 0x80);
  for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if ((uVar1 & 0xfffffffe) == 0) {
    uVar2 = (**(code **)(**(int **)(extraout_ECX + 0x14) + 4))
                      (0,0,*(uint *)(unaff_EBP + 0x1c) & 1,extraout_ECX);
    *(undefined4 *)(unaff_EBP + 0x1c) = uVar2;
  }
  *(undefined4 *)(extraout_ECX + 0x140) = *(undefined4 *)(unaff_EBP + 0x1c);
  iVar7 = (**(code **)**(undefined4 **)(extraout_ECX + 0x14))();
  *(uint *)(unaff_EBP + 0xc) = (uint)(iVar7 == 0);
  if ((iVar7 == 0) == 0) {
    iVar7 = (**(code **)**(undefined4 **)(extraout_ECX + 0x14))();
    *(uint *)(unaff_EBP + 0xc) = (uint)(iVar7 == 3);
    if ((iVar7 == 3) == 0) {
      iVar7 = (**(code **)**(undefined4 **)(extraout_ECX + 0x14))();
      *(uint *)(unaff_EBP + 0xc) = (uint)(iVar7 == 4);
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if ((iVar7 == 4) == 0) goto LAB_007f12d5;
    }
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 1;
LAB_007f12d5:
  fVar10 = (float10)FUN_004f1993(extraout_ECX + 0x68,*(undefined4 *)(extraout_ECX + 0x78));
  *(double *)(unaff_EBP + -0x1c) = (double)fVar10;
  fVar10 = (float10)FUN_004f1993(extraout_ECX + 0x50,*(undefined4 *)(extraout_ECX + 0x60));
  *(double *)(unaff_EBP + -0x24) = (double)fVar10;
  fVar10 = (float10)FUN_004f1993(extraout_ECX + 0x38,*(undefined4 *)(extraout_ECX + 0x48));
  *(double *)(unaff_EBP + -0x2c) = (double)fVar10;
  FUN_004f1993(extraout_ECX + 0x20,*(undefined4 *)(extraout_ECX + 0x30));
  uVar11 = (ulonglong)*(uint *)(unaff_EBP + 0x20);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x1c);
  uVar3 = __ftol(uVar2,*(uint *)(unaff_EBP + 0x20),0);
  uVar4 = __ftol(uVar3);
  uVar5 = __ftol(uVar4);
  uVar6 = __ftol(uVar5);
  FUN_005e468b(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar6,uVar5,uVar4,
               uVar3,uVar2,uVar11);
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x158) = uVar2;
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x14c) = uVar2;
  *(undefined4 *)(extraout_ECX + 400) = 0;
  if (*(int *)(extraout_ECX + 0x198) != 0) {
    FUN_004d2023();
    *(undefined4 *)(extraout_ECX + 0x198) = 0;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    *(undefined4 *)(extraout_ECX + 400) = *(undefined4 *)(DAT_00978138 + 0xac);
    uVar2 = (**(code **)(**(int **)(extraout_ECX + 0x14) + 0xc))();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007f4541(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004d2023(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


