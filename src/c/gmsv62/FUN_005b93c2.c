/* FUN_005b93c2 - 0x005b93c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b93c2(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((-1 < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < *(int *)(extraout_ECX + 0x744)))
  {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iVar4 = FUN_00402e32(unaff_EBP + -0x34,&DAT_00980690);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iVar4 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = *(int *)(extraout_ECX + 0x204);
    iVar1 = *(int *)(unaff_EBP + 8);
    iVar2 = *(int *)(iVar4 + iVar1 * 4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(iVar4 + iVar1 * 4);
    iVar4 = *(int *)(extraout_ECX + 0x7dc);
    iVar2 = *(int *)(extraout_ECX + 0x7e4);
    *(int **)(unaff_EBP + -0x14) = piVar3;
    *(int *)(unaff_EBP + -0x10) = (iVar1 / iVar4) * 0x43 + 2 + iVar2;
    iVar4 = (**(code **)(*piVar3 + 0x90))
                      (piVar3,(iVar1 % iVar4) * 0x38 + 2 + *(int *)(extraout_ECX + 0x7e0),
                       *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(extraout_ECX + 0x1c0) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x1c4) = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


