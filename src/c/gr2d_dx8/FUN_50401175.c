/* FUN_50401175 - 0x50401175 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50401175(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_5042a430();
  *extraout_ECX = &PTR_LAB_5042c100;
  uStack00000008 = 0xffffffff;
  extraout_ECX[1] = 1;
  FUN_504026e6();
  ExceptionList = unaff_retaddr;
  return;
}


