/* FUN_51001677 - 0x51001677 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51001677(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_51005950();
  uStack00000008 = 0xffffffff;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_LAB_510060a0;
  FUN_510014d1();
  ExceptionList = unaff_retaddr;
  return;
}


