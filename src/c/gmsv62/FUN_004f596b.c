/* FUN_004f596b - 0x004f596b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f596b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)) =
       &PTR_LAB_008ead1c;
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


