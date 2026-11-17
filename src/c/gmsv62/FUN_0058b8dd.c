/* FUN_0058b8dd - 0x0058b8dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058b8dd(void)

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
  iStack_60 = 0x58b8f7;
  FUN_0081622a();
  iStack_60 = 0x58b902;
  FUN_00448dc6();
  iStack_60 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x58b913;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_60 = 0x58b926;
    FUN_00878dfb();
  }
  iStack_60 = 0x134;
  uStack_64 = 0x161;
  uStack_68 = 0x29;
  FUN_00545a5c(unaff_EBP + -0x58,0x24);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x58b951;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x58b95c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar1 = *(int *)(extraout_ECX + 0x94), iVar1 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar1 + -4)))) {
    iVar1 = iVar1 + *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 8) * -5;
    iVar2 = iVar4 - *(int *)(extraout_ECX + 0x9c);
    if ((-0x31 < iVar2) && (iVar2 < 0x14e)) {
      iStack_60 = 0x58b9b2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iStack_60 = unaff_EBP + -0x38;
      uStack_64 = 0x58b9c0;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_60 = 0x58b9cc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_60 = 0x58b9da;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
      iStack_60 = unaff_EBP + -0x28;
      uStack_64 = 0x58b9e8;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_60 = 0x58b9f4;
        FUN_00878dfb();
      }
      iStack_60 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_64 = 0x58ba08;
      uStack_64 = FUN_00449749();
      uStack_68 = 0x58ba11;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_68;
      uStack_68 = extraout_ECX_00;
      FUN_00448a17(uVar3);
      iVar2 = (iVar4 - *(int *)(extraout_ECX + 0x9c)) + 0x29;
      iVar1 = *(int *)(iVar1 + 0x18) + 0x24;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004115d9(iVar1,iVar2);
      FUN_00448e3a(iVar1,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_60 = 0x58ba4e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_60 = 0x58ba59;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_60 = 0x58ba66;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_60 = 0x58ba71;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3c;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x58ba8a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x58ba95;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_60 = 0x58baa6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


