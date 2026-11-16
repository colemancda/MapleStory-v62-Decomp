/* FUN_5080c422 - 0x5080c422 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080c422(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50818a80;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_5080c740(extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5080fbb9(extraout_ECX + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_50818a5c;
  return;
}


