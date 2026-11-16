/* FUN_50002ab9 - 0x50002ab9 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50002ab9(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_50012d80();
  *extraout_ECX = &PTR_LAB_500140f8;
  uStack00000008 = 0xffffffff;
  extraout_ECX[1] = 1;
  FUN_50002d3d();
  ExceptionList = unaff_retaddr;
  return;
}


