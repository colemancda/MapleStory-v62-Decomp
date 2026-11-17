/* FUN_00489336 - 0x00489336 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00489336(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x40c) = 0;
  if ((*(int *)(extraout_ECX + 0x3f8) != 0) &&
     (piVar5 = *(int **)(extraout_ECX + 0x3fc), piVar5 != (int *)0x0)) {
    while( true ) {
      piVar1 = (int *)*piVar5;
      iVar2 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_0042a378();
      iVar3 = _rand();
      VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
      iVar4 = FUN_00402e32(unaff_EBP + -0x28,&DAT_00980690);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004031b7(iVar2 + 1000 + iVar3 % 1000,3);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)FUN_004113e5(unaff_EBP + -0x14);
      iVar2 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)*piVar5;
      iVar2 = (**(code **)(*piVar5 + 0x90))
                        (piVar5,0,0xff,*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x1c));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar5,&DAT_00963de8);
      }
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      piVar5 = *(int **)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


