/* FUN_00462df1 - 0x00462df1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00462df1(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iStack_20 = unaff_EBP + -0x14;
  iStack_24 = 0x462e0f;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x462e1b;
  uVar1 = FUN_0042459a();
  iStack_20 = 0x462e24;
  FUN_00424561();
  iStack_20 = 0x462e2b;
  FUN_00424561();
  iStack_20 = 0x462e32;
  uVar2 = FUN_0042459a();
  iStack_24 = unaff_EBP + -0x10;
  uStack_28 = 0x462e44;
  iStack_20 = uVar1;
  FUN_00556acf();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iStack_24 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_30 = unaff_EBP + 8;
  uStack_28 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pcStack_2c = s____s___was_sent_to__s___d_Nexon_G_00964618;
  iStack_20 = uVar2;
  FUN_00434e21();
  iStack_20 = 0;
  iStack_24 = 1;
  uStack_28 = 0;
  pcStack_2c = (char *)0x4d5;
  iStack_30 = unaff_EBP + -0x18;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pcStack_2c = (char *)0x462e85;
  pcStack_2c = (char *)FUN_00411641();
  *(int **)(unaff_EBP + -0x1c) = &iStack_30;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_20 = 0x462ea9;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_20 = 0x462eb5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x462ec0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_20 = 0x462ecc;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


