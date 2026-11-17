/* FUN_00737ec6 - 0x00737ec6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00737ec6(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  iStack_4c = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_50 = 0x737f3d;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_50 = *puVar1;
  iStack_4c = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_54 = unaff_EBP + 0xc;
  uStack_58 = 0x737f51;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  iStack_4c = 0x737f6c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_4c = unaff_EBP + -0x34;
  iStack_50 = 0x737f7b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_4c = 0x737f87;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_4c = 0x737f91;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_4c = unaff_EBP + -0x24;
  iStack_50 = 0x737f9b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_4c = 0x737fa7;
    FUN_00878dfb();
  }
  iStack_4c = 0;
  iStack_50 = unaff_EBP + -0x34;
  iStack_54 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_58 = 0x737fbd;
  uVar3 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_58;
  FUN_00448a17(uVar3);
  iVar2 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_50 = 0x737fef;
  iVar2 = FUN_004032b4();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 0x10) = iVar2;
  *puVar1 = 0;
  if (iVar2 != 0) {
    iStack_4c = 0x738006;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_4c = 0x738017;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_4c = 0x73802b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_4c = 0x738036;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_4c = 0x738043;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_4c = 0x73804e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x73805b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_4c = 0x738066;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


