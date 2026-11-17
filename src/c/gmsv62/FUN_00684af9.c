/* FUN_00684af9 - 0x00684af9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00684af9(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x10);
  if (iVar2 != 0) {
    while( true ) {
      iVar1 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
      iVar2 = *(int *)(iVar2 + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(int *)(unaff_EBP + -0x18) = iVar2;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      iVar2 = FUN_00402e32(unaff_EBP + -0x3c,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar2 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x28);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
      iVar2 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)*piVar3;
      iVar2 = (**(code **)(*piVar3 + 0x90))
                        (piVar3,0xd2,0,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
      }
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_006868f7(0);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      iVar2 = *(int *)(unaff_EBP + -0x10);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


