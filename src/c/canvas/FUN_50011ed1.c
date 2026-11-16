/* FUN_50011ed1 - 0x50011ed1 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50011ed1(void)

{
  ZIStream *pZVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50015650;
  pZVar1 = (ZIStream *)extraout_ECX[1];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pZVar1 != (ZIStream *)0x0) {
    ZLZCloseFilter(pZVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_50015674;
  return;
}


