/* FUN_0084cbe4 - 0x0084cbe4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0084cbe4(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_6c;
  int iStack_68;
  undefined1 *puStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_60 = 0x84cc08;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_60 = unaff_EBP + -0x48;
  puStack_64 = (undefined1 *)0x84cc17;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_60 = 0x84cc23;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_60 = 0x84cc30;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_60 = unaff_EBP + -0x38;
  puStack_6c = &DAT_00980690;
  puStack_64 = (undefined1 *)0x84cc3a;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_60 = 0x84cc46;
    FUN_00878dfb();
    puStack_6c = extraout_ECX_00;
  }
  iStack_60 = 0;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x48);
  iStack_68 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_6c,0x8a2);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_64 = (undefined1 *)0x84cc92;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_60 = 0x84cca8;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_60 = 0x84ccb9;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_60 = 0x84ccc6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x84ccd1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_60 = 0x84ccde;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x84cce9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_60 = 0x84ccf6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x84cd01;
    FUN_00878dfb();
  }
  puStack_64 = &stack0xffffffa4;
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffa4;
  iStack_60 = 0x64b;
  iStack_68 = 0x84cd14;
  FUN_00679e4e();
  iStack_60 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_64 = (undefined1 *)0x84cd24;
  FUN_00455c59();
  iStack_60 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_64 = (undefined1 *)0x84cd32;
  FUN_0084e948();
  puStack_64 = (undefined1 *)0x84cd39;
  iStack_60 = FUN_0084cd98();
  iStack_68 = unaff_EBP + -0x10;
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_64;
  puStack_6c = (undefined4 *)0x84cd49;
  FUN_00424dbc();
  iStack_68 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_6c = (undefined4 *)0x84cd55;
  FUN_007d6c55();
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iStack_60 = 0x84cd71;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_60 = 0x84cd84;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


