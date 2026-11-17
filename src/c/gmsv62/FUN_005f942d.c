/* FUN_005f942d - 0x005f942d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f942d(void)

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
  uStack_2c = 0x5f944c;
  FUN_0060142b();
  uStack_20 = 0x31;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_24 = 0x5f9459;
  FUN_00457cda();
  uStack_20 = 0;
  uStack_24 = 0;
  iStack_28 = extraout_ECX + 0x6c;
  uStack_2c = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_30;
  FUN_00679d22(auStack_30,0x1dc);
  iVar1 = FUN_007db791();
  uStack_20 = (uint)(iVar1 == 6);
  uStack_24 = 0x5f9490;
  FUN_00457cda();
  uStack_20 = unaff_EBP + -0x20;
  uStack_24 = 0x5f949f;
  FUN_004751b2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_20 = 0x5f94ab;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


