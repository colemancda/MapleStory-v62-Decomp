/* FUN_006c5664 - 0x006c5664 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006c5664(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_00789e42(5,3);
  DAT_009791a0 = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x2d6] = 0;
  extraout_ECX[0x2d8] = 0;
  extraout_ECX[0x2da] = 0;
  extraout_ECX[0x2dc] = 0;
  extraout_ECX[0x2de] = 0;
  extraout_ECX[0x2df] = 0;
  extraout_ECX[0x2e0] = 0;
  extraout_ECX[0x2e1] = 0;
  extraout_ECX[0x2e2] = 0;
  extraout_ECX[0x2e3] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *extraout_ECX = &PTR_FUN_008efc98;
  extraout_ECX[1] = &PTR_FUN_008efc4c;
  extraout_ECX[2] = &PTR_FUN_008efc48;
  _memset(extraout_ECX + 0x15e,0,0x42c);
  _memset(extraout_ECX + 0x269,0,0x1b0);
  extraout_ECX[0x2e4] = 0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff9c;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e(&stack0xffffff9c,0x949);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_0047c974();
  FUN_0051c175();
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),0x275);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


