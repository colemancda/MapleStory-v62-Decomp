/* FUN_50c02ccd - 0x50c02ccd in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c02ccd(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_50c10270();
  *extraout_ECX = &PTR_LAB_50c130d0;
  uStack00000008 = 0xffffffff;
  extraout_ECX[1] = 1;
  FUN_50c035db();
  ExceptionList = unaff_retaddr;
  return;
}


