/* FUN_0081622a - 0x0081622a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081622a(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x60) != 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iVar1 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x60);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar2 = (int *)FUN_00448dc6(unaff_EBP + -0x14);
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar1 = (**(code **)(*piVar2 + 0x80))
                      (piVar2,*(undefined4 *)(extraout_ECX + 0x38),
                       *(undefined4 *)(extraout_ECX + 0x3c),*(undefined4 *)(unaff_EBP + -0x10),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar2,&DAT_00963cc8);
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


