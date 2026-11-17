/* FUN_0047a3ae - 0x0047a3ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047a3ae(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9780;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_0047a88e();
  FUN_0047b671();
  if (extraout_ECX[0x26] != 0) {
    (*DAT_0097b6ac)(extraout_ECX[0x26]);
    extraout_ECX[0x26] = 0;
  }
  if (extraout_ECX[0x27] != 0) {
    (*DAT_0097b6ac)(extraout_ECX[0x27]);
    extraout_ECX[0x27] = 0;
  }
  if (extraout_ECX[0x28] != 0) {
    (*DAT_0097b6ac)(extraout_ECX[0x28]);
    extraout_ECX[0x28] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0047cf76();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0047cf76();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  DAT_00978134 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


