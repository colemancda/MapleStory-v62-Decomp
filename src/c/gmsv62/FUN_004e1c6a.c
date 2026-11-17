/* FUN_004e1c6a - 0x004e1c6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e1c6a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0xbc) = 8;
  iStack_54 = 0x4e1c9d;
  FUN_00414f8b();
  *(undefined4 *)(extraout_ECX + 0xe4) = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_54 = 0x4e1cb2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_54 = unaff_EBP + -0x3c;
  iStack_58 = 0x4e1cc0;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_54 = 0x4e1ccc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_54 = 0x4e1cd6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_54 = unaff_EBP + -0x2c;
  iStack_58 = 0x4e1ce4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_54 = 0x4e1cf0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iStack_54 = unaff_EBP + -0x18;
    iStack_58 = 0x4e1d0e;
    uVar2 = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    iStack_54 = unaff_EBP + -0x14;
    iStack_58 = 0x4e1d30;
    uVar2 = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 4;
  }
  iStack_54 = 0;
  iStack_58 = unaff_EBP + -0x3c;
  iStack_60 = unaff_EBP + -0x2c;
  *(int **)(unaff_EBP + 0xc) = &iStack_60;
  iStack_5c = iStack_60;
  FUN_004059fd(uVar2);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iStack_58 = 0x4e1d80;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  iStack_54 = 0x4e1d92;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_54 = 0x4e1da3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_54 = 0x4e1db0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_54 = 0x4e1dbb;
    FUN_00878dfb();
  }
  if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
     *(int *)(unaff_EBP + -0x14) != 0)) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x18) != 0)) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_54 = 0x4e1dfd;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_54 = 0x4e1e08;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_54 = 0x4e1e14;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_54 = 0x4e1e1f;
    FUN_00878dfb();
  }
  iStack_5c = DAT_00979220 * -5 + 0x1fc;
  iStack_54 = 6000;
  iStack_58 = 1000;
  iStack_60 = 0x1d0;
  FUN_004de5cc(0,0xff,0,0x1d0,iStack_5c,0x1d0,iStack_5c);
  iStack_54 = unaff_EBP + 0xc;
  iStack_58 = 0x4e1e65;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_5c = *puVar3;
  iStack_54 = 1;
  iStack_58 = 10;
  iStack_60 = 0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004de636(0x9b);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iStack_54 = unaff_EBP + 0xc;
  iStack_58 = 0x4e1e9a;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_54 = 0x4e1ea5;
  FUN_007d3cdd();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


