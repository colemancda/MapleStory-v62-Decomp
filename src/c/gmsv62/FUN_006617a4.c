/* FUN_006617a4 - 0x006617a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006617a4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00683d1f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00661902();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[6] = &PTR_LAB_008ed6b0;
  *extraout_ECX = &PTR_FUN_008ed694;
  extraout_ECX[7] = &PTR_LAB_008ed690;
  extraout_ECX[9] = &PTR_LAB_008ed68c;
  return extraout_ECX;
}


