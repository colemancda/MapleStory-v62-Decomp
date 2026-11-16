/* FUN_5080c38d - 0x5080c38d in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080c38d(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50818b2c;
  puVar1 = (undefined4 *)extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(extraout_ECX);
  }
  *extraout_ECX = &PTR_FUN_50818ba8;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_5080c6be();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_50818a5c;
  return;
}


