/* ptr_004e1648 - 0x004e1648 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_004e1648(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int unaff_EBP;
  bool in_ZF;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  *(int *)(unaff_EBP + -0x10) = unaff_EBX;
  if (!in_ZF) {
    *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(unaff_EBP + 8);
    *(undefined4 *)(param_1 + 0xbc) = 6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_14 = 0x4e1684;
    iVar2 = FUN_00402e32();
    if (iVar2 < unaff_EBX) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -4) = unaff_EBX;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_14 = 0x4e16a7;
    iVar2 = FUN_00402e32();
    if (iVar2 < unaff_EBX) {
      FUN_00878dfb();
    }
    sVar1 = *(short *)(param_1 + 0xe0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (sVar1 == (short)unaff_EBX) {
      iStack_14 = 0x4e16d5;
      uVar3 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      iStack_14 = 0x4e16f7;
      uVar3 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 3;
    }
    iStack_14 = unaff_EBP + -0x3c;
    iStack_1c = unaff_EBP + -0x2c;
    *(int **)(unaff_EBP + -0x1c) = &iStack_1c;
    iStack_18 = iStack_1c;
    FUN_004059fd(uVar3);
    iVar2 = unaff_EBP + -0x4c;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_14 = 0x4e1747;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    iVar2 = FUN_0041a581();
    if ((iVar2 < unaff_EBX) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < unaff_EBX) {
      FUN_00878dfb();
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
       (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
       *(int *)(unaff_EBP + 8) != unaff_EBX)) {
      FUN_004030b1();
      *(int *)(unaff_EBP + 8) = unaff_EBX;
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x14) != unaff_EBX)) {
      FUN_004030b1();
      *(int *)(unaff_EBP + -0x14) = unaff_EBX;
    }
    *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
    iVar2 = FUN_00402bc3();
    if (iVar2 < unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3();
    if (iVar2 < unaff_EBX) {
      FUN_00878dfb();
    }
    iStack_18 = DAT_00979220 * -5 + 0x1fc;
    iStack_14 = 1000;
    iStack_1c = 0x1d0;
    FUN_004de5cc(unaff_EBX,0xff,unaff_EBX,0x1d0,iStack_18,0x1d0,iStack_18);
    iStack_14 = 0x4e182c;
    puVar4 = (undefined4 *)FUN_00679d86();
    iStack_18 = *puVar4;
    iStack_14 = 10;
    iStack_1c = 0x2c;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_004de636(0x9b);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    iStack_14 = 0x4e1865;
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -4) = 7;
    FUN_007d3cdd();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


