/* FUN_0046398a - 0x0046398a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046398a(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  char *pcStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iStack_20 = unaff_EBP + -0x14;
  iStack_24 = 0x4639a8;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x4639b4;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  iStack_20 = 0x4639be;
  uVar1 = FUN_00424561();
  iStack_20 = 0x4639ca;
  uVar2 = FUN_0042459a();
  iStack_20 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_24 = unaff_EBP + -0x10;
  uStack_28 = 0x4639de;
  FUN_0045a1d8();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iStack_24 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_28 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pcStack_30 = s__d____s___was_sent_to__s___d_Nex_00964668;
  uStack_2c = (uint)uVar1;
  iStack_20 = uVar2;
  FUN_00434e21(unaff_EBP + 8);
  iStack_20 = 0;
  iStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0x4d5;
  pcStack_30 = (char *)(unaff_EBP + -0x18);
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_2c = 0x463a1f;
  uStack_2c = FUN_00411641();
  *(char ***)(unaff_EBP + -0x1c) = &pcStack_30;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_20 = 0x463a43;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_20 = 0x463a4f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x463a5a;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_20 = 0x463a66;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


