/* FUN_004644ca - 0x004644ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004644ca(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iStack_20 = 0x37;
  uStack_24 = 0xffffffff;
  uStack_28 = 0x4644eb;
  uStack_24 = FUN_00465774();
  uStack_28 = 0x4644f6;
  FUN_004245d2();
  iStack_20 = 0;
  uStack_24 = 0x464506;
  FUN_008161f1();
  iStack_20 = 0;
  uStack_24 = 0x46450e;
  FUN_00489a0e();
  iStack_20 = unaff_EBP + -0x18;
  uStack_24 = 0x464519;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x464523;
  uVar2 = FUN_0042459a();
  iStack_20 = 0x46452c;
  uVar1 = FUN_00424561();
  uStack_24 = unaff_EBP + -0x14;
  uStack_28 = 0x464541;
  iStack_20 = uVar2;
  FUN_0045a1d8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_20 = 0x21f;
  uStack_24 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_28 = 0x46455d;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_20 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_2c = *puVar3;
  uStack_28 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_30 = unaff_EBP + -0x10;
  uStack_24 = (uint)uVar1;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_20 = 0x464583;
  FUN_00414ebb();
  iStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0x4d5;
  iStack_30 = unaff_EBP + 8;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_2c = 0x4645a1;
  uStack_2c = FUN_00411641();
  *(int **)(unaff_EBP + -0x1c) = &iStack_30;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_20 = 0x4645c5;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_20 = 0x4645d1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x4645dc;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_20 = 0x4645e8;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


