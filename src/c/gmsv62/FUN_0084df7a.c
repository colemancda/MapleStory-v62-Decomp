/* FUN_0084df7a - 0x0084df7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084df7a(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00879bb8();
  iStack_10 = unaff_EBP + 8;
  uStack_14 = 0x84df95;
  FUN_0045cdbc();
  iStack_10 = 0;
  uStack_14 = 1;
  uStack_18 = 0;
  uStack_1c = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_20;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined4 *)(extraout_ECX + 0x208c) = 0;
  iStack_10 = 0x84dfc1;
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x2090) = uVar1;
  iStack_10 = 0x84dfd3;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


