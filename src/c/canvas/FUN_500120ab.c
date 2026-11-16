/* FUN_500120ab - 0x500120ab in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_500120ab(void)

{
  IBinding *pIVar1;
  IBinding *pIVar2;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  *this = &PTR_FUN_50015730;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[1] = &PTR_FUN_5001570c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5001213b();
  this[7] = 0;
  this[8] = 0;
  pIVar1 = *(IBinding **)(unaff_EBP + 0xc);
  pIVar2 = *(IBinding **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *this = &PTR_FUN_500156d8;
  this[1] = &PTR_LAB_500156b4;
  this[5] = &PTR_LAB_500156b0;
  this[6] = &PTR_LAB_500156ac;
  FUN_5001269c(this,pIVar2,pIVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


