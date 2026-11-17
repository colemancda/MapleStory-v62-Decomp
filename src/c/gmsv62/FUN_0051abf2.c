/* FUN_0051abf2 - 0x0051abf2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0051abf2(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  extraout_ECX[1] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  iStack_2c = 0x584;
  puStack_30 = (undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_008eaf68;
  uStack_34 = 0x51ac33;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_34 = *puVar1;
  iStack_2c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_38 = 0x51ac42;
  puStack_30 = extraout_ECX + 2;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_2c = 0x51ac51;
  FUN_00402676();
  iStack_2c = 0x585;
  puStack_30 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_34 = 0x51ac61;
  iStack_2c = FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_30 = (undefined4 *)0x51ac6e;
  FUN_0044f5f6();
  iStack_2c = unaff_EBP + -0x28;
  puStack_30 = (undefined4 *)0xffffffff;
  uStack_34 = 0xe;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_38;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&uStack_38,10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0044974c();
  FUN_004503f9();
  iStack_2c = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_30 = (undefined4 *)0x51aca9;
  iStack_2c = FUN_00402bc3();
  if (iStack_2c < 0) {
    puStack_30 = (undefined4 *)0x51acb4;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_2c = 0x51acc0;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


