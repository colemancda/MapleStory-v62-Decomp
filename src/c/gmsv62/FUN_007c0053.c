/* FUN_007c0053 - 0x007c0053 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c0053(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 uStack_14;
  undefined4 local_10;
  
  FUN_00879bb8();
  local_10 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_14;
  FUN_0045e485();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004e21db();
  FUN_00833cf7();
  local_10 = 0x2528;
  uStack_14 = 0x7c0097;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = **(undefined4 **)(unaff_EBP + 0xc);
    uStack_14 = 0x7c00ae;
    local_10 = FUN_007a14fc();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_14 = 0x7c00be;
  FUN_007c1400();
  local_10 = 0x7c00c6;
  FUN_007a1d20();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    local_10 = 0;
    uStack_14 = 0x7c00d8;
    FUN_0045e7c2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


