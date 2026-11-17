/* FUN_00776271 - 0x00776271 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00776271(void)

{
  int iVar1;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_2c;
  FUN_00679d22(auStack_2c,0x1122);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0x83;
    uStack_28 = 0x7762b7;
    FUN_0060142b();
    iStack_1c = 2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x7762c4;
    FUN_00457cda();
    iStack_1c = unaff_EBP + -0x20;
    uStack_20 = 0x7762d3;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1c = 0x7762df;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


