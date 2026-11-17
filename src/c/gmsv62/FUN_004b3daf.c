/* FUN_004b3daf - 0x004b3daf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b3daf(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iVar2 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x18);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x8c))
                    (piVar1,0,0,unaff_EBP + -0x14,unaff_EBP + -0x18,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = *(int *)(extraout_ECX + 0x1c);
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x1c) = *(int *)(extraout_ECX + 0x20) + *(int *)(unaff_EBP + -0x18);
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x18);
  *(int *)(unaff_EBP + -0x20) = iVar2 + *(int *)(unaff_EBP + -0x14);
  FUN_008161f1(unaff_EBP + -0x28);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


