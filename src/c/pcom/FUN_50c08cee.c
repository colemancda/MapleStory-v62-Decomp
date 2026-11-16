/* FUN_50c08cee - 0x50c08cee in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c08cee(void)

{
  IBinding *pIVar1;
  IBinding *pIVar2;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  *this = &PTR_FUN_50c135ec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[1] = &PTR_FUN_50c135c8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c08d78();
  this[7] = 0;
  this[8] = 0;
  pIVar1 = *(IBinding **)(unaff_EBP + 0xc);
  pIVar2 = *(IBinding **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *this = &PTR_FUN_50c13594;
  this[1] = &PTR_LAB_50c13570;
  this[5] = &PTR_LAB_50c1356c;
  this[6] = &PTR_LAB_50c13568;
  FUN_50c0951b(this,pIVar2,pIVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


