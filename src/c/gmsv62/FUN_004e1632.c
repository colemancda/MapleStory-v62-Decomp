/* FUN_004e1632 - 0x004e1632 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e1632(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  bVar5 = DAT_00978360 != 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (bVar5) {
    *(undefined2 *)(extraout_ECX + 0xe0) = *(undefined2 *)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0xbc) = 6;
    iStack_54 = 0x4e1676;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_54 = unaff_EBP + -0x3c;
    iStack_58 = 0x4e1684;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_54 = 0x4e1690;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_54 = 0x4e1699;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_54 = unaff_EBP + -0x2c;
    iStack_58 = 0x4e16a7;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_54 = 0x4e16b3;
      FUN_00878dfb();
    }
    sVar1 = *(short *)(extraout_ECX + 0xe0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (sVar1 == 0) {
      iStack_54 = unaff_EBP + -0x14;
      iStack_58 = 0x4e16d5;
      uVar3 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      iStack_54 = unaff_EBP + 8;
      iStack_58 = 0x4e16f7;
      uVar3 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 3;
    }
    iStack_54 = 0;
    iStack_58 = unaff_EBP + -0x3c;
    iStack_60 = unaff_EBP + -0x2c;
    *(int **)(unaff_EBP + -0x1c) = &iStack_60;
    iStack_5c = iStack_60;
    FUN_004059fd(uVar3);
    iVar2 = unaff_EBP + -0x4c;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_58 = 0x4e1747;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    iStack_54 = 0x4e1759;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_54 = 0x4e176a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_54 = 0x4e1777;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_54 = 0x4e1782;
      FUN_00878dfb();
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
       (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
       *(int *)(unaff_EBP + 8) != 0)) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x14) != 0)) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_54 = 0x4e17c3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_54 = 0x4e17ce;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_54 = 0x4e17db;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_54 = 0x4e17e6;
      FUN_00878dfb();
    }
    iStack_5c = DAT_00979220 * -5 + 0x1fc;
    iStack_54 = 30000;
    iStack_58 = 1000;
    iStack_60 = 0x1d0;
    FUN_004de5cc(0,0xff,0,0x1d0,iStack_5c,0x1d0,iStack_5c);
    iStack_54 = unaff_EBP + 8;
    iStack_58 = 0x4e182c;
    puVar4 = (undefined4 *)FUN_00679d86();
    iStack_5c = *puVar4;
    iStack_54 = 1;
    iStack_58 = 10;
    iStack_60 = 0x2c;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_004de636(0x9b);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    iStack_54 = unaff_EBP + -0x10;
    iStack_58 = 0x4e1865;
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -4) = 7;
    iStack_54 = 0x4e1873;
    FUN_007d3cdd();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


