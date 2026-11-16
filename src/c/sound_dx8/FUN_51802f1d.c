/* FUN_51802f1d - 0x51802f1d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51802f1d(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_5180ea30();
  *extraout_ECX = &PTR_LAB_51818324;
  uStack00000008 = 0xffffffff;
  extraout_ECX[1] = 1;
  FUN_5180189c();
  ExceptionList = unaff_retaddr;
  return;
}


