/* FUN_51001a37 - 0x51001a37 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51001a37(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_510060d0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = 1;
  (*(code *)PTR_FUN_51006100)(extraout_ECX);
  InterlockedDecrement(&DAT_510092e4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5100189e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


