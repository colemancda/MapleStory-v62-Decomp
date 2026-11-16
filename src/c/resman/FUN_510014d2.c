/* FUN_510014d2 - 0x510014d2 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_510014d2(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5100613c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51001cae((int)extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_51001c50(extraout_ECX + 4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


