/* FUN_006407e8 - 0x006407e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006407e8(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb8;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_008e96dc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00474530(*(undefined4 *)(unaff_EBP + 8),3,0x80,1,0x80000000,0,0);
  *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_008e96dc;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_004744d2();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00640874();
  return;
}


