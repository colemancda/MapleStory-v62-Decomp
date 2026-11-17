/* FUN_006cf252 - 0x006cf252 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cf252(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008efeec;
  extraout_ECX[-1] = &PTR_LAB_008efea0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008efe9c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x31,8,7,thunk_FUN_00450463);
  _DAT_0097bd5c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004de580();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


