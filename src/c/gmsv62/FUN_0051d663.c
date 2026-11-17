/* FUN_0051d663 - 0x0051d663 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0051d663(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x14);
  if (iVar2 != 0) {
    *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar2 != 0) & iVar2 - 0xcU;
    FUN_007f17b3();
    *(undefined4 *)(extraout_ECX + 0x2c) = *(undefined4 *)(extraout_ECX + 0x24);
    *(undefined4 *)(extraout_ECX + 0x30) = *(undefined4 *)(extraout_ECX + 0x28);
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iVar2 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0x14);
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0x8c))
                      (piVar1,extraout_ECX + 0x24,extraout_ECX + 0x28,0,0,0,0,0,0,
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x238) != 0) {
      iVar2 = (**(code **)(**(int **)(extraout_ECX + 0x10) + 8))();
      if (iVar2 == 0) {
        FUN_0051d63f();
      }
      else {
        FUN_0051d5e1();
      }
      uVar3 = 1;
      goto LAB_0051d756;
    }
  }
  uVar3 = 0;
LAB_0051d756:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


