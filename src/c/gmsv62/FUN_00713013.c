/* FUN_00713013 - 0x00713013 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00713013(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(uint *)(unaff_EBP + -0x10) = (-(uint)(*(int *)(DAT_00978360 + 0xc78) != 0) & 0xffffffb2) + 0x1bb
  ;
  piVar2 = *(int **)(extraout_ECX + 0x14);
  if (piVar2 != (int *)0x0) {
    while( true ) {
      piVar1 = (int *)*piVar2;
      iVar3 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
      *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iVar3 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
      iVar3 = FUN_00402e32(unaff_EBP + -0x28,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      iVar3 = (**(code **)(*piVar1 + 0x90))
                        (piVar1,0x1f8,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xe;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) break;
      piVar2 = *(int **)(unaff_EBP + -0x14);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


