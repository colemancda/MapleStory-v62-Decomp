/* FUN_004c8e3d - 0x004c8e3d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004c8e3d(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  DAT_009791d0 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  extraout_ECX[1] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0x1f;
  extraout_ECX[5] = 0;
  extraout_ECX[2] = &PTR_FUN_008ea2f0;
  extraout_ECX[6] = 100;
  extraout_ECX[7] = 0x18;
  extraout_ECX[10] = 0;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[8] = &PTR_FUN_008ea2ec;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0x1f;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0xd] = &PTR_FUN_008ea2e8;
  extraout_ECX[0x11] = 100;
  extraout_ECX[0x12] = 0x18;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x17] = 0;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x15] = &PTR_FUN_008ea2e4;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x1a] = 0;
  *extraout_ECX = &PTR_FUN_008ea2e0;
  iStack_50 = 0x4c8ede;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = 0x4c8eec;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_50 = 0x4c8ef8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_50 = 0x4c8f06;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  puStack_5c = &DAT_00980690;
  iStack_54 = 0x4c8f14;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_50 = 0x4c8f20;
    FUN_00878dfb();
    puStack_5c = extraout_ECX_00;
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00679e4e(&puStack_5c,0x6b9);
  iVar1 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_54 = 0x4c8f6a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_50 = 0x4c8f78;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_50 = 0x4c8f89;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_50 = 0x4c8f96;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_50 = 0x4c8fa1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_50 = 0x4c8fae;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_50 = 0x4c8fb9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_50 = 0x4c8fc6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_50 = 0x4c8fd1;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


