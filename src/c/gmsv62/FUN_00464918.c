/* FUN_00464918 - 0x00464918 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00464918(void)

{
  char cVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int local_10;
  
  FUN_00879bb8();
  local_10 = unaff_EBP + -0x10;
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  iStack_14 = 0x464936;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_10 = 0x464941;
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  local_10 = 0;
  iStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (cVar1 < '\x01') {
    if (cVar1 == '\0') {
      *(undefined1 **)(unaff_EBP + 8) = auStack_20;
      FUN_00679d22(auStack_20,0x213);
      FUN_007db3ad();
      iStack_14 = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + 8) = &local_10;
      local_10 = 0;
      uStack_18 = 0x46498d;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_14 = 0x464996;
      FUN_00465428();
      iStack_14 = 0x46499d;
      FUN_006a479e();
      goto LAB_004649ba;
    }
    *(undefined1 **)(unaff_EBP + 8) = auStack_20;
    uVar2 = 0xdaa;
  }
  else {
    *(undefined1 **)(unaff_EBP + 8) = auStack_20;
    uVar2 = 0x212;
  }
  FUN_00679d22(auStack_20,uVar2);
  FUN_007db3ad();
LAB_004649ba:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_10 = 0x4649c5;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_10 = 0x4649d1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


