/* FUN_004db91b - 0x004db91b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004db91b(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x188) != 0) {
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_2c;
    FUN_00679d22(auStack_2c,0xd4f);
    FUN_007db3ad();
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0x6f;
    uStack_28 = 0x4db961;
    FUN_0060142b();
    iStack_1c = 0x26;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x4db96e;
    FUN_00457cda();
    iStack_1c = unaff_EBP + -0x20;
    uStack_20 = 0x4db97d;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1c = 0x4db989;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


