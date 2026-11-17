/* FUN_0048f9a2 - 0x0048f9a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048f9a2(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  FUN_00448dc6(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iVar2 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = *(int *)(extraout_ECX + 0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 8) {
    if (iVar2 == 9) {
      iVar2 = 9;
      goto LAB_0048fa11;
    }
    if (iVar2 != 10) {
      iVar2 = iVar2 + 1;
      goto LAB_0048fa11;
    }
  }
  iVar2 = 1;
LAB_0048fa11:
  uVar1 = *(undefined4 *)(extraout_ECX + 0x74 + iVar2 * 4);
  piVar3 = *(int **)(unaff_EBP + 8);
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar3,0,0,uVar1,*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


