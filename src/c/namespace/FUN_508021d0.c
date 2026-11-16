/* FUN_508021d0 - 0x508021d0 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508021d0(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x14) != 0) {
    FUN_508032a9(extraout_ECX + 0x10);
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


