/* FUN_0079d33e - 0x0079d33e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079d33e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  iStack_38 = 0x79d357;
  iVar2 = FUN_0079b949();
  *(undefined4 *)(iVar2 + 8) = 0;
  iStack_38 = iVar2 + 0xc;
  uStack_3c = 1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_40;
  FUN_00679e4e(&uStack_40,0xb8e);
  iVar3 = FUN_0079be1e();
  if (iVar3 != 0) {
    iStack_38 = 0x79d396;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_38 = unaff_EBP + -0x30;
    uStack_3c = 0x79d3a5;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x79d3b1;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_38 = 0x79d3bb;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iStack_38 = unaff_EBP + -0x20;
    uStack_3c = 0x79d3c5;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x79d3d1;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(iVar2 + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      iStack_38 = 0x79d3e5;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(iVar2 + 0x14);
    uStack_40 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_3c = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_38 = *(undefined4 *)(unaff_EBP + -0x28);
    iVar2 = (**(code **)(*piVar1 + 0x110))
                      (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x14));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


