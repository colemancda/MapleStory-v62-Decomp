/* FUN_004eb1bf - 0x004eb1bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eb1bf(void)

{
  int unaff_EBP;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined2 *)(unaff_EBP + -0x20) = 0;
  iStack_34 = unaff_EBP + -0x34;
  uStack_38 = *(undefined4 *)(unaff_EBP + 8);
  uStack_3c = 0x4eb1f0;
  FUN_0085c756();
  if ((*(int *)(unaff_EBP + -0x34) == 0) || (*(char *)(unaff_EBP + -0x23) == '\x01')) {
    iStack_34 = 0;
    uStack_38 = 0;
    uStack_3c = 0x76;
    uStack_40 = 0x4eb22c;
    FUN_0060142b();
    iStack_34 = 2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_38 = 0x4eb239;
    FUN_00457cda();
    iStack_34 = *(undefined4 *)(unaff_EBP + 8);
    uStack_38 = 0x4eb244;
    FUN_00457d37();
    iStack_34 = unaff_EBP + -0x1c;
    uStack_38 = 0x4eb253;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_34 = 0x4eb25f;
    FUN_0045ebca();
  }
  else {
    iStack_34 = 0;
    uStack_38 = 1;
    uStack_3c = 0;
    uStack_40 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_44;
    FUN_00679d22(auStack_44,0x182);
    FUN_007db3ad();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


