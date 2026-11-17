/* FUN_00575e0a - 0x00575e0a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00575e0a(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x32e8;
  do {
    if (**(int **)(unaff_EBP + -0x10) != 0) {
      piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x1c);
      iVar5 = *piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar3 = FUN_00404a94();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piVar2 = *(int **)(unaff_EBP + -0x1c);
      iVar5 = *(int *)(unaff_EBP + 8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x20);
      iVar1 = *piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar4 = FUN_00404abb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piVar2 = *(int **)(unaff_EBP + -0x20);
      iVar1 = *(int *)(unaff_EBP + 0xc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      FUN_0043f3d6(unaff_EBP + -0x30,0);
      iVar5 = (*DAT_0097b57c)(unaff_EBP + -0x30,iVar3 + iVar5,iVar4 + iVar1);
      if (iVar5 != 0) {
        uVar6 = *(undefined4 *)(unaff_EBP + -0x14);
        goto LAB_00575ee5;
      }
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
    if (0x3b < *(int *)(unaff_EBP + -0x14)) {
      uVar6 = 0xffffffff;
LAB_00575ee5:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar6;
    }
  } while( true );
}


