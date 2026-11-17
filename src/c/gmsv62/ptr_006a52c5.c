/* ptr_006a52c5 - 0x006a52c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_006a52c5(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  iStack_8 = 0x6a52cf;
  FUN_0081622a();
  iStack_8 = 0x6a52da;
  FUN_00448dc6();
  iStack_8 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_c = 0x6a52eb;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_8 = 0x6a52fe;
    FUN_00878dfb();
  }
  iStack_8 = 0x13b;
  uStack_c = 0x161;
  uStack_10 = 0x33;
  FUN_00545a5c(unaff_EBP + -0x58,0x1d);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_8 = 0x6a5329;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_8 = 0x6a5334;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar1 = *(int *)(param_1 + 0x90), iVar1 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar1 + -4)))) {
    iVar1 = iVar1 + *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 8) * -5;
    iVar2 = iVar4 - *(int *)(param_1 + 0x98);
    if ((-0x31 < iVar2) && (iVar2 < 0x155)) {
      iStack_8 = 0x6a538a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iStack_8 = unaff_EBP + -0x38;
      uStack_c = 0x6a5398;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_8 = 0x6a53a4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_8 = 0x6a53b2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
      iStack_8 = unaff_EBP + -0x28;
      uStack_c = 0x6a53c0;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_8 = 0x6a53cc;
        FUN_00878dfb();
      }
      iStack_8 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_c = 0x6a53e0;
      uStack_c = FUN_00449749();
      uStack_10 = 0x6a53e9;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_10;
      uStack_10 = extraout_ECX;
      FUN_00448a17(uVar3);
      iVar2 = (iVar4 - *(int *)(param_1 + 0x98)) + 0x33;
      iVar1 = *(int *)(iVar1 + 0x18) + 0x1d;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004115d9(iVar1,iVar2);
      FUN_00448e3a(iVar1,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_8 = 0x6a5426;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_8 = 0x6a5431;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_8 = 0x6a543e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_8 = 0x6a5449;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3c;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_8 = 0x6a5462;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_8 = 0x6a546d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_8 = 0x6a547e;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


