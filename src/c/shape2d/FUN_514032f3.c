/* FUN_514032f3 - 0x514032f3 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * FUN_514032f3(void)

{
  IBinding *pIVar1;
  IBinding *pIVar2;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  *this = &PTR_FUN_5140c754;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[1] = &PTR_FUN_5140c730;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_514040e6();
  this[7] = 0;
  this[8] = 0;
  pIVar1 = *(IBinding **)(unaff_EBP + 0xc);
  pIVar2 = *(IBinding **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *this = &PTR_FUN_5140c6fc;
  this[1] = &PTR_LAB_5140c6d8;
  this[5] = &PTR_LAB_5140c6d4;
  this[6] = &PTR_FUN_5140c6d0;
  FUN_514033d1(this,pIVar2,pIVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


