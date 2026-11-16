/* FUN_5080642b - 0x5080642b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080642b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_50817888;
  extraout_ECX[1] = &PTR_LAB_50817878;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[6] != 0) {
    FUN_508032a9((int)(extraout_ECX + 5));
    extraout_ECX[6] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


