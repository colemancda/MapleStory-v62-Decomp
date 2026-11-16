/* FUN_50808502 - 0x50808502 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50808502(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x1c) = &PTR_FUN_508178a0;
  FUN_50808865(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 4) = &PTR_FUN_508178a4;
  FUN_50804352(extraout_ECX + 4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


