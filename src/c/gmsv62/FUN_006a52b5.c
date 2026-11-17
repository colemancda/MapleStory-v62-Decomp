/* FUN_006a52b5 - 0x006a52b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a52b5(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iStack_60 = 0x6a52cf;
  FUN_0081622a();
  iStack_60 = 0x6a52da;
  FUN_00448dc6();
  iStack_60 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x6a52eb;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_60 = 0x6a52fe;
    FUN_00878dfb();
  }
  iStack_60 = 0x13b;
  uStack_64 = 0x161;
  uStack_68 = 0x33;
  FUN_00545a5c(unaff_EBP + -0x58,0x1d);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x6a5329;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x6a5334;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar1 = *(int *)(extraout_ECX + 0x90), iVar1 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar1 + -4)))) {
    iVar1 = iVar1 + *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 8) * -5;
    iVar2 = iVar4 - *(int *)(extraout_ECX + 0x98);
    if ((-0x31 < iVar2) && (iVar2 < 0x155)) {
      iStack_60 = 0x6a538a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iStack_60 = unaff_EBP + -0x38;
      uStack_64 = 0x6a5398;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_60 = 0x6a53a4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_60 = 0x6a53b2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
      iStack_60 = unaff_EBP + -0x28;
      uStack_64 = 0x6a53c0;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_60 = 0x6a53cc;
        FUN_00878dfb();
      }
      iStack_60 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_64 = 0x6a53e0;
      uStack_64 = FUN_00449749();
      uStack_68 = 0x6a53e9;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_68;
      uStack_68 = extraout_ECX_00;
      FUN_00448a17(uVar3);
      iVar2 = (iVar4 - *(int *)(extraout_ECX + 0x98)) + 0x33;
      iVar1 = *(int *)(iVar1 + 0x18) + 0x1d;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004115d9(iVar1,iVar2);
      FUN_00448e3a(iVar1,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_60 = 0x6a5426;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_60 = 0x6a5431;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_60 = 0x6a543e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_60 = 0x6a5449;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3c;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x6a5462;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x6a546d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_60 = 0x6a547e;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


