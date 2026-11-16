/* FUN_5080565f - 0x5080565f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080565f(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[4] = 0;
  if (extraout_ECX + 5 != (undefined4 *)0x0) {
    extraout_ECX[5] = 0;
  }
  *extraout_ECX = &PTR_LAB_50817814;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_LAB_508171c4;
  FUN_50805af3();
  extraout_ECX[7] = 0;
  extraout_ECX[9] = 0;
  extraout_ECX[10] = 0;
  extraout_ECX[0xb] = 0;
  Ordinal_8(extraout_ECX + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x16] = 0;
  extraout_ECX[0x17] = 0;
  extraout_ECX[0x18] = 0;
  return extraout_ECX;
}


