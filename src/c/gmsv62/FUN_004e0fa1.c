/* FUN_004e0fa1 - 0x004e0fa1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e0fa1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0xbc) = 1;
  iStack_48 = 0x4e0fd1;
  FUN_00414f8b();
  *(undefined4 *)(extraout_ECX + 200) = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_48 = 0x4e0fe6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_48 = unaff_EBP + -0x30;
  iStack_4c = 0x4e0ff4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_48 = 0x4e1000;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_48 = 0x4e100a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iStack_48 = unaff_EBP + -0x20;
  puStack_54 = &DAT_00980690;
  iStack_4c = 0x4e1018;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_48 = 0x4e1024;
    FUN_00878dfb();
    puStack_54 = extraout_ECX_00;
  }
  iStack_48 = 0;
  iStack_4c = unaff_EBP + -0x30;
  iStack_50 = unaff_EBP + -0x20;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_54;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_54,0x50b);
  iVar1 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_4c = 0x4e1070;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  iStack_48 = 0x4e1082;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_48 = 0x4e1093;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_48 = 0x4e10a0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_48 = 0x4e10ab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_48 = 0x4e10b8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_48 = 0x4e10c3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_48 = 0x4e10cf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_48 = 0x4e10da;
    FUN_00878dfb();
  }
  iStack_50 = DAT_00979220 * -5 + 0x1fc;
  iStack_48 = 180000;
  iStack_4c = 1000;
  puStack_54 = (undefined4 *)0x1d0;
  FUN_004de5cc(0,0xff,0,0x1d0,iStack_50,0x1d0,iStack_50);
  iStack_48 = unaff_EBP + 0xc;
  iStack_4c = 0x4e1120;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_50 = *puVar3;
  iStack_48 = 1;
  iStack_4c = 10;
  puStack_54 = (undefined4 *)0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004de636(0x9b);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iStack_48 = unaff_EBP + 0xc;
  iStack_4c = 0x4e1155;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_48 = 0x4e1160;
  FUN_007d3cdd();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


