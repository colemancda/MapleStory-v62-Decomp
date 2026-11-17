/* FUN_004efa2a - 0x004efa2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004efa2a(void)

{
  int unaff_EBP;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4efa34;
  FUN_00879bb8();
  iStack_8 = unaff_EBP + 8;
  uStack_c = 0x4efa41;
  FUN_0045cdbc();
  iStack_8 = 0;
  uStack_c = 1;
  uStack_10 = 0;
  uStack_14 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_18;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_8 = 0x4efa6e;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


