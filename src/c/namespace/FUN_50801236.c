/* FUN_50801236 - 0x50801236 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50801236(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_5080e090();
  *extraout_ECX = &PTR_LAB_508170b8;
  uStack00000008 = 0xffffffff;
  extraout_ECX[1] = 1;
  FUN_50801762();
  ExceptionList = unaff_retaddr;
  return;
}


