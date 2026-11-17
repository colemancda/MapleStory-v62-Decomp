/* FUN_004e1441 - 0x004e1441 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e1441(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0xbc) = 4;
  iStack_44 = 0x4e1471;
  FUN_00414f8b();
  *(undefined4 *)(extraout_ECX + 0xd4) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0xd8) = *(undefined4 *)(unaff_EBP + 0x10);
  iStack_44 = 0x4e148f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_44 = unaff_EBP + -0x2c;
  iStack_48 = 0x4e149d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_44 = 0x4e14a9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_44 = 0x4e14b3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iStack_44 = unaff_EBP + -0x1c;
  puStack_50 = &DAT_00980690;
  iStack_48 = 0x4e14c1;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_44 = 0x4e14cd;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_00;
  }
  iStack_44 = 0;
  iStack_48 = unaff_EBP + -0x2c;
  iStack_4c = unaff_EBP + -0x1c;
  *(undefined4 ***)(unaff_EBP + 0x10) = &puStack_50;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_50,0x50f);
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_48 = 0x4e1519;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  iStack_44 = 0x4e152b;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_44 = 0x4e153c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4e1549;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_44 = 0x4e1554;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_44 = 0x4e1561;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_44 = 0x4e156c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_44 = 0x4e1578;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_44 = 0x4e1583;
    FUN_00878dfb();
  }
  iStack_4c = DAT_00979220 * -5 + 0x1fc;
  iStack_44 = 180000;
  iStack_48 = 1000;
  puStack_50 = (undefined4 *)0x1d0;
  FUN_004de5cc(0,0xff,0,0x1d0,iStack_4c,0x1d0,iStack_4c);
  iStack_44 = unaff_EBP + 0xc;
  iStack_48 = 0x4e15c9;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_4c = *puVar3;
  iStack_44 = 1;
  iStack_48 = 10;
  puStack_50 = (undefined4 *)0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004de636(0x9b);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iStack_44 = unaff_EBP + 0xc;
  iStack_48 = 0x4e15fe;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_44 = 0x4e1609;
  FUN_007d3cdd();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


