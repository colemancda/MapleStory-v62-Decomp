/* FUN_00462a25 - 0x00462a25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00462a25(int param_1)

{
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x28;
  iStack_14 = param_1 + 0x49c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uStack_18 = 0x462a42;
  FUN_004245d2();
  if (*(int *)(param_1 + 0x500) == 9) {
    uStack_10 = 0x462a56;
    FUN_00492a12();
  }
  if (*(int *)(param_1 + 0x4c8) == 0) {
    uStack_10 = 0;
    iStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    FUN_00679d22(auStack_20,0x244);
    FUN_007db3ad();
  }
  return;
}


