/* FUN_00697b35 - 0x00697b35 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00697b35(void)

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
    iStack_50 = 0x697b6a;
    FUN_00448dc6();
    iVar1 = *(int *)(extraout_ECX[0x24] + 0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iStack_50 = 0x697b86;
      FUN_004a2fef();
    }
    iStack_50 = 0x697b94;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x697ba1;
    FUN_00403191();
    iStack_50 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_54 = 0x697bb8;
    FUN_006a7cd5();
    uStack_54 = 0x697bbf;
    FUN_00697b31();
    uStack_54 = 0x697bd1;
    uStack_54 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_58;
    FUN_00679e4e(&uStack_58,0xab7);
    uVar4 = 0x75;
    uVar3 = 0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004115d9(0x3c,0x75);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x697c0c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x697c17;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_50 = 0x697c24;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x697c2f;
      FUN_00878dfb();
    }
    iStack_50 = 0x697c39;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_50 = unaff_EBP + -0x28;
    uStack_54 = 0x697c43;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_50 = 0x697c4f;
      FUN_00878dfb();
    }
    iVar1 = *(int *)(extraout_ECX[0x24] + 0x48);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(int *)(unaff_EBP + -0x14) = extraout_ECX[(iVar1 != 0) + 0x1f];
    piVar2 = *(int **)(unaff_EBP + -0x10);
    if (piVar2 == (int *)0x0) {
      iStack_50 = 0x697c7b;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar2;
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x18) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x80))(piVar2,0x71,0x72,*(undefined4 *)(unaff_EBP + -0x14));
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
    if (piVar2 == (int *)0x0) goto LAB_00697d0a;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (*(int *)(unaff_EBP + 0xc) == 100) {
    iStack_50 = 0x697d0a;
    (**(code **)(*extraout_ECX + 0x20))();
  }
LAB_00697d0a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


