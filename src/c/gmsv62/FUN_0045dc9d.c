/* FUN_0045dc9d - 0x0045dc9d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045dc9d(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  uint auStack_30 [5];
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  auStack_30[4] = 0x45dcc3;
  bVar2 = FUN_0045e4b8();
  auStack_30[4] = (byte)~bVar2 & 1;
  auStack_30[3] = unaff_EBP + 8;
  auStack_30[2] = 0x45dcd2;
  iVar3 = FUN_007d1e11();
  uVar1 = auStack_30[4];
  auStack_30[4] = 0;
  auStack_30[3] = 0;
  if (iVar3 == 0) {
    auStack_30[2] = 0;
    auStack_30[1] = 0;
    auStack_30[0] = uVar1;
    *(uint **)(unaff_EBP + -0x10) = auStack_30;
    FUN_00679d22(auStack_30,0x211);
    FUN_007db3ad();
  }
  else {
    auStack_30[2] = 0x15;
    auStack_30[1] = 0x45dd06;
    FUN_0060142b();
    auStack_30[3] = unaff_EBP + 8;
    *(uint **)(unaff_EBP + -0x10) = auStack_30 + 4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    auStack_30[4] = 0;
    auStack_30[2] = 0x45dd1b;
    FUN_00414f8b();
    auStack_30[3] = 0x45dd23;
    FUN_00459cb5();
    auStack_30[4] = unaff_EBP + -0x20;
    auStack_30[3] = 0x45dd32;
    FUN_004751b2();
    *(undefined4 *)(extraout_ECX + 0x18) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    auStack_30[4] = 0x45dd44;
    FUN_0045ebca();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  auStack_30[4] = 0x45dd50;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


