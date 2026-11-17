/* FUN_004e1ece - 0x004e1ece in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e1ece(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0xbc) = 9;
  iStack_48 = 0x4e1efd;
  FUN_00414f8b();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(int *)(extraout_ECX + 0xf0) = iVar1;
  iStack_48 = 0x4e1f12;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_48 = unaff_EBP + -0x30;
  iStack_4c = 0x4e1f20;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_48 = 0x4e1f2c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_48 = 0x4e1f36;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iStack_48 = unaff_EBP + -0x20;
  puStack_54 = &DAT_00980690;
  iStack_4c = 0x4e1f44;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_48 = 0x4e1f50;
    FUN_00878dfb();
    puStack_54 = extraout_ECX_00;
  }
  iStack_48 = 0;
  iStack_4c = unaff_EBP + -0x30;
  iStack_50 = unaff_EBP + -0x20;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_54;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_54,0xf03);
  iVar2 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_4c = 0x4e1f9e;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
  iStack_48 = 0x4e1fb0;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_48 = 0x4e1fc1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_48 = 0x4e1fce;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_48 = 0x4e1fd9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_48 = 0x4e1fe6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_48 = 0x4e1ff1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_48 = 0x4e1ffe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_48 = 0x4e2009;
    FUN_00878dfb();
  }
  iStack_50 = DAT_00979220 * -5 + 0x1fc;
  iStack_48 = (-(uint)(iVar1 != 0) & 0x7fffe88f) + 6000;
  iStack_4c = 1000;
  puStack_54 = (undefined4 *)0x1d0;
  FUN_004de5cc(0,0xff,0,0x1d0,iStack_50,0x1d0,iStack_50);
  iStack_48 = unaff_EBP + 0xc;
  iStack_4c = 0x4e205d;
  puVar4 = (undefined4 *)FUN_00679d86();
  iStack_50 = *puVar4;
  iStack_48 = 1;
  iStack_4c = 10;
  puStack_54 = (undefined4 *)0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004de636(0x9b);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iStack_48 = unaff_EBP + 0xc;
  iStack_4c = 0x4e2094;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_48 = 0x4e209f;
  FUN_007d3cdd();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


