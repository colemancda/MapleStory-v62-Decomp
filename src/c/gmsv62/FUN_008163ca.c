/* FUN_008163ca - 0x008163ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008163ca(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_4c = 0x8163ec;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_4c = unaff_EBP + -0x34;
  iStack_50 = 0x8163fb;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_4c = 0x816407;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x816411;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_4c = unaff_EBP + -0x24;
  puStack_58 = &DAT_00980690;
  iStack_50 = 0x81641b;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_4c = 0x816427;
    FUN_00878dfb();
    puStack_58 = extraout_ECX_00;
  }
  iStack_4c = 0;
  iStack_50 = unaff_EBP + -0x34;
  iStack_54 = unaff_EBP + -0x24;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_58;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004059fd(unaff_EBP + 8);
  iVar1 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_50 = 0x81646c;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_4c = 0x81647b;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_4c = 0x81648c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_4c = 0x816499;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4c = 0x8164a4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x8164b1;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4c = 0x8164bc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_4c = 0x8164c9;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4c = 0x8164d4;
    FUN_00878dfb();
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x38) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x3c) = *(undefined4 *)(unaff_EBP + 0x10);
  if (iVar1 != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


