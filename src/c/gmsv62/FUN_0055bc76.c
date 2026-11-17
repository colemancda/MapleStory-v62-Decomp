/* FUN_0055bc76 - 0x0055bc76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0055bc76(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)) =
       &PTR_LAB_008ebab8;
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


