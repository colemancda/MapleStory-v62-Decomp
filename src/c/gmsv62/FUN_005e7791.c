/* FUN_005e7791 - 0x005e7791 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005e7791(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_009794bc = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  extraout_ECX[2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008ecc80;
  return extraout_ECX;
}


