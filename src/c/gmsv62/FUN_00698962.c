/* FUN_00698962 - 0x00698962 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00698962(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 1000) && (*(int *)(unaff_EBP + 0xc) == 200)) {
    iStack_50 = 0x698997;
    FUN_00448dc6();
    iVar1 = *(int *)(extraout_ECX[0x24] + 0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iStack_50 = 0x6989b3;
      FUN_004a2fef();
    }
    iStack_50 = 0x6989c1;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x6989ce;
    FUN_00403191();
    iStack_50 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_54 = 0x6989e5;
    FUN_006a7cd5();
    uStack_54 = 0x6989ec;
    FUN_00697b31();
    uStack_54 = 0x6989fe;
    uStack_54 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_58;
    FUN_00679e4e(&uStack_58,0xab7);
    uVar4 = 0x90;
    uVar3 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004115d9(0x3d,0x90);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x698a3c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x698a47;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_50 = 0x698a54;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x698a5f;
      FUN_00878dfb();
    }
    iStack_50 = 0x698a69;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_50 = unaff_EBP + -0x28;
    uStack_54 = 0x698a73;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_50 = 0x698a7f;
      FUN_00878dfb();
    }
    iVar1 = *(int *)(extraout_ECX[0x24] + 0x48);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(int *)(unaff_EBP + -0x14) = extraout_ECX[(iVar1 != 0) + 0x1f];
    piVar2 = *(int **)(unaff_EBP + -0x10);
    if (piVar2 == (int *)0x0) {
      iStack_50 = 0x698aab;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar2;
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x18) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x80))(piVar2,0x71,0x8d,*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    (**(code **)(*(int *)(extraout_ECX[0x28] + 4) + 0x1c))
              (*(undefined4 *)(extraout_ECX[0x24] + 0x48));
    FUN_008161f1(0);
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 == (int *)0x0) goto LAB_00698b3d;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (*(int *)(unaff_EBP + 0xc) == 100) {
    iStack_50 = 0x698b3d;
    (**(code **)(*extraout_ECX + 0x20))();
  }
LAB_00698b3d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


