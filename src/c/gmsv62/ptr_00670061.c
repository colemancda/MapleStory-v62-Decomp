/* ptr_00670061 - 0x00670061 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_00670061(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  
  uVar1 = FUN_0066fbe5();
  *unaff_ESI = uVar1;
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0xd4);
  __ftol();
  return;
}


