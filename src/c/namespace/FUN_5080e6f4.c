/* FUN_5080e6f4 - 0x5080e6f4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080e6f4(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = extraout_ECX + 2;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *puVar1 = &PTR_FUN_50818a80;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_5080c740(puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5080fbb9(extraout_ECX + 0xe);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *puVar1 = &PTR_LAB_50818a5c;
  *extraout_ECX = &PTR_LAB_50818a58;
  return;
}


