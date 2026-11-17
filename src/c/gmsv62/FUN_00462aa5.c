/* FUN_00462aa5 - 0x00462aa5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00462aa5(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  uStack_14 = 0x37;
  uStack_18 = 0xffffffff;
  uStack_1c = 0x462ac4;
  uStack_18 = FUN_00465774();
  uStack_1c = 0x462acd;
  FUN_004245d2();
  uStack_14 = 0;
  uStack_18 = 0x462add;
  FUN_008161f1();
  uStack_14 = 0;
  uStack_18 = 0x462ae5;
  FUN_00489a0e();
  if (*(int *)(extraout_ECX + 0x4d8) == 0) {
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0x4d5;
    iStack_24 = unaff_EBP + 8;
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x462b0f;
    uStack_20 = FUN_00411641();
    *(int **)(unaff_EBP + -0x10) = &iStack_24;
    FUN_00679d22(&iStack_24,0x21e);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_14 = 0x462b37;
    FUN_00402676();
  }
  else {
    uStack_14 = 0xffffffff;
    uStack_18 = 0x462b46;
    puVar1 = (undefined4 *)FUN_0045f1e3();
    *puVar1 = *(undefined4 *)(extraout_ECX + 0x4d4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


