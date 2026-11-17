/* FUN_005bd7c2 - 0x005bd7c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bd7c2(void)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x28);
  if (iVar4 != 0) {
    while( true ) {
      iVar1 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      uVar5 = *(undefined4 *)(iVar4 + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
      FUN_005be4b7();
      dVar3 = *(double *)(*(int *)(unaff_EBP + -0x1c) + 0x30) + _DAT_008ea310;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(double *)(*(int *)(unaff_EBP + -0x1c) + 0x30) = dVar3;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iVar4 = FUN_00402e32(unaff_EBP + -0x40);
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
      iVar4 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      iVar1 = *(int *)(iVar4 + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(int *)(unaff_EBP + -0x14) = iVar4;
      *(int *)(unaff_EBP + -0x18) = iVar4;
      if (iVar1 == 0) {
        FUN_00878dfb();
      }
      piVar2 = *(int **)(iVar4 + 0x18);
      FUN_0087adc4(*(undefined8 *)(*(int *)(unaff_EBP + -0x14) + 0x30));
      uVar5 = __ftol();
      iVar4 = (**(code **)(*piVar2 + 0x90))
                        (piVar2,*(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x24),uVar5,
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar2,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_005be4ea();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      iVar4 = *(int *)(unaff_EBP + -0x10);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


