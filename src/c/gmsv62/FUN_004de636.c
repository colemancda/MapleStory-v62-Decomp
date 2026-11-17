/* FUN_004de636 - 0x004de636 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004de636(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iStack_3c = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_40;
    FUN_004033a1(*(undefined4 *)(unaff_EBP + 0x10));
    FUN_008163ca();
  }
  iStack_3c = *(undefined4 *)(unaff_EBP + 0x1c);
  uStack_40 = *(undefined4 *)(unaff_EBP + 0x18);
  FUN_0081420c(*(undefined4 *)(extraout_ECX + 0x8c),*(undefined4 *)(extraout_ECX + 0x90),
               *(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
               *(undefined4 *)(unaff_EBP + 0x14));
  iStack_3c = 0x4de698;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_3c = unaff_EBP + -0x34;
  uStack_40 = 0x4de6a7;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_3c = 0x4de6b3;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_3c = 0x4de6bd;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_3c = unaff_EBP + -0x24;
  uStack_40 = 0x4de6c7;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_3c = 0x4de6d3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x4de6e2;
  piVar2 = (int *)FUN_004489f5();
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_3c = 0x4de6f8;
    FUN_00878dfb();
  }
  iStack_3c = 0x4de705;
  piVar2 = (int *)FUN_004113e5();
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    iStack_3c = 0x4de716;
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar2;
  uStack_40 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_3c = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar1 = (**(code **)(*piVar2 + 0x90))
                    (piVar2,*(undefined4 *)(extraout_ECX + 0x74),0,
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x34));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963de8);
  }
  piVar2 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_004de7ba();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


