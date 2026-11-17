/* FUN_004d1a40 - 0x004d1a40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d1a40(void)

{
  uint uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iStack_18 = 0x4d1a5b;
  uVar1 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x80) = uVar1 & 0xff;
  if ((uVar1 & 0xff) == 0) {
    iStack_18 = 0x4d1b08;
    FUN_0046f2ad();
  }
  else {
    iStack_18 = 0x4d1a75;
    uVar2 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x84) = uVar2;
    iStack_18 = unaff_EBP + 8;
    uStack_1c = 0x4d1a86;
    FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_18 = 0x4d1a90;
    uVar1 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x14) = uVar1 & 0xff;
    iStack_18 = 0x4d1a9d;
    uVar1 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x10) = uVar1 & 0xff;
    iStack_18 = 0x4d1aaa;
    uStack_20 = FUN_0042452b();
    iStack_18 = 0;
    uStack_1c = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_20 = uStack_20 & 0xff;
    uStack_24 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_30 = extraout_ECX + 0x90;
    uStack_28 = 0;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_2c;
    uStack_34 = 0x4d1ac8;
    FUN_00433bdf();
    iStack_30 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_34 = 0x4d1ad5;
    uVar2 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_34;
    FUN_00448a17(uVar2);
    uVar2 = *(undefined4 *)(extraout_ECX + 0x80);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0046cd86(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


