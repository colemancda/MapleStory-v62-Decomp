/* FUN_0053b8a4 - 0x0053b8a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053b8a4(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x55c) = *(undefined4 *)(unaff_EBP + 8);
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x68) + 0x34) = 0xd0;
  iStack_68 = 0x53b920;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_68 = unaff_EBP + -0x30;
  iStack_6c = 0x53b92f;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x53b93b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_68 = 0x53b948;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iStack_68 = unaff_EBP + -0x20;
  puStack_74 = &DAT_00980690;
  iStack_6c = 0x53b952;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x53b95e;
    FUN_00878dfb();
    puStack_74 = extraout_ECX_00;
  }
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x30;
  iStack_70 = unaff_EBP + -0x20;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_74,0x4e9);
  iVar1 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_6c = 0x53b9aa;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_68 = 0x53b9bc;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x53b9cd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x53b9da;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x53b9e5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_68 = 0x53b9f2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x53b9fd;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x53ba0a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x53ba15;
    FUN_00878dfb();
  }
  *(undefined4 *)(extraout_ECX + 0x558) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


