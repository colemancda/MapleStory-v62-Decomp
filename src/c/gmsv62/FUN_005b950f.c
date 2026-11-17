/* FUN_005b950f - 0x005b950f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b950f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((-1 < *(int *)(extraout_ECX + 0x1c0)) &&
     (*(int *)(extraout_ECX + 0x1c0) < *(int *)(extraout_ECX + 0x744))) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iVar5 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iVar5 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    iVar5 = *(int *)(extraout_ECX + 0x1c0);
    iVar1 = *(int *)(extraout_ECX + 0x204);
    iVar2 = *(int *)(iVar1 + iVar5 * 4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = *(int *)(extraout_ECX + 0x1c0);
    iVar3 = *(int *)(extraout_ECX + 0x7dc);
    piVar4 = *(int **)(iVar1 + iVar5 * 4);
    *(int **)(unaff_EBP + -0x10) = piVar4;
    iVar5 = (**(code **)(*piVar4 + 0x90))
                      (*(undefined4 *)(unaff_EBP + -0x10),
                       (iVar2 % *(int *)(extraout_ECX + 0x7dc)) * 0x38 +
                       *(int *)(extraout_ECX + 0x7e0),
                       (iVar2 / iVar3) * 0x43 + *(int *)(extraout_ECX + 0x7e4),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(extraout_ECX + 0x1c0) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x1c4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


