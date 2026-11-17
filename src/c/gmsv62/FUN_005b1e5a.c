/* FUN_005b1e5a - 0x005b1e5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b1e5a(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  FUN_00879bb8();
  uStack_20 = 0;
  uStack_24 = 0;
  iStack_28 = 0x6f;
  uStack_2c = 0x5b1e79;
  FUN_0060142b();
  uStack_20 = 0x2d;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_24 = 0x5b1e86;
  FUN_00457cda();
  uStack_20 = 0;
  uStack_24 = 0;
  iStack_28 = extraout_ECX + 0x6c;
  uStack_2c = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_30;
  FUN_00679d22(auStack_30,0x1d8);
  iVar1 = FUN_007db791();
  uStack_20 = (uint)(iVar1 == 6);
  uStack_24 = 0x5b1ebd;
  FUN_00457cda();
  uStack_20 = unaff_EBP + -0x20;
  uStack_24 = 0x5b1ecc;
  FUN_004751b2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_20 = 0x5b1ed8;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


