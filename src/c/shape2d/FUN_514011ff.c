/* FUN_514011ff - 0x514011ff in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_514011ff(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_5140ad20();
  *extraout_ECX = &PTR_LAB_5140c0a0;
  uStack00000008 = 0xffffffff;
  extraout_ECX[1] = 1;
  FUN_51401605();
  ExceptionList = unaff_retaddr;
  return;
}


