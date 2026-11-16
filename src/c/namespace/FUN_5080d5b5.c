/* FUN_5080d5b5 - 0x5080d5b5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080d5b5(void)

{
  IBinding *pIVar1;
  IBinding *pIVar2;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  *this = &PTR_FUN_50818b74;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[1] = &PTR_FUN_50818b2c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_508111a7();
  this[7] = 0;
  this[8] = 0;
  pIVar1 = *(IBinding **)(unaff_EBP + 0xc);
  pIVar2 = *(IBinding **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *this = &PTR_FUN_50818af0;
  this[1] = &PTR_ptr_5080d4f8_50818acc;
  this[5] = &PTR_ptr_5080d520_50818ac8;
  this[6] = &PTR_FUN_50818ac4;
  FUN_5080d635(this,pIVar2,pIVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


