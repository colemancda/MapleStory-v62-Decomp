/* FUN_50809483 - 0x50809483 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50809483(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_50817910;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[4] = &PTR_FUN_508178a0;
  FUN_50808865((int)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


