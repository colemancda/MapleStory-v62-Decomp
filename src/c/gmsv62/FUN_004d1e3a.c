/* FUN_004d1e3a - 0x004d1e3a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d1e3a(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = FUN_004133f0();
  uVar4 = 0;
  if (*(int *)(extraout_ECX + 0xa4) != 0) {
    uVar4 = *(uint *)(*(int *)(extraout_ECX + 0xa4) + -4);
  }
  *(int *)(extraout_ECX + 0xa0) = *(int *)(extraout_ECX + 0xa0) + -0x1e;
  *(int *)(extraout_ECX + 0x94) = (int)(((ulonglong)uVar2 % 0x32) % (ulonglong)uVar4);
  if (*(int *)(extraout_ECX + 0xa0) < 1) {
    iVar3 = *(int *)((-(uint)(*(int *)(extraout_ECX + 0x9c) != 0) &
                     *(int *)(extraout_ECX + 0x9c) - 0x10U) + 4);
    uVar4 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    *(uint *)(extraout_ECX + 0x9c) = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)(extraout_ECX + 0x98) = 0xffffffff;
      FUN_004d1b24();
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(uVar4 + 4);
      FUN_004031b7(1,3);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(extraout_ECX + 0x8c) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x8c);
      iVar3 = *piVar1;
      *(int **)(unaff_EBP + -0x10) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x10c))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(extraout_ECX + 0xa0) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x40);
    }
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iVar3 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *(int *)(extraout_ECX + 0x90);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x90);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x8c))
                    (piVar1,extraout_ECX + 0xb0,extraout_ECX + 0xb4,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


