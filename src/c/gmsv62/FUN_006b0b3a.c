/* FUN_006b0b3a - 0x006b0b3a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b0b3a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ef788;
  extraout_ECX[-1] = &PTR_FUN_008ef73c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ef738;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006b4156();
  DAT_0097919c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


