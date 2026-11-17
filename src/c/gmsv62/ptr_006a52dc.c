/* ptr_006a52dc - 0x006a52dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a52dc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_8 = 0x6a52eb;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_4 = 0x6a52fe;
    FUN_00878dfb();
  }
  iStack_4 = 0x13b;
  uStack_8 = 0x161;
  uStack_c = 0x33;
  FUN_00545a5c(unaff_EBP + -0x58,0x1d);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_4 = 0x6a5329;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4 = 0x6a5334;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar1 = *(int *)(unaff_EBX + 0x90), iVar1 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar1 + -4)))) {
    iVar1 = iVar1 + *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 8) * -5;
    iVar2 = iVar4 - *(int *)(unaff_EBX + 0x98);
    if ((-0x31 < iVar2) && (iVar2 < 0x155)) {
      iStack_4 = 0x6a538a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iStack_4 = unaff_EBP + -0x38;
      uStack_8 = 0x6a5398;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_4 = 0x6a53a4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_4 = 0x6a53b2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
      iStack_4 = unaff_EBP + -0x28;
      uStack_8 = 0x6a53c0;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_4 = 0x6a53cc;
        FUN_00878dfb();
      }
      iStack_4 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_8 = 0x6a53e0;
      uStack_8 = FUN_00449749();
      uStack_c = 0x6a53e9;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c;
      uStack_c = extraout_ECX;
      FUN_00448a17(uVar3);
      iVar2 = (iVar4 - *(int *)(unaff_EBX + 0x98)) + 0x33;
      iVar1 = *(int *)(iVar1 + 0x18) + 0x1d;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004115d9(iVar1,iVar2);
      FUN_00448e3a(iVar1,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_4 = 0x6a5426;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_4 = 0x6a5431;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_4 = 0x6a543e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_4 = 0x6a5449;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3c;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_4 = 0x6a5462;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4 = 0x6a546d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_4 = 0x6a547e;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


