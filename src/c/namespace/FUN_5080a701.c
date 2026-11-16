/* FUN_5080a701 - 0x5080a701 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080a701(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[3] = 0;
  if (extraout_ECX + 4 != (undefined4 *)0x0) {
    extraout_ECX[4] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_50818960;
  FUN_5080b058();
  extraout_ECX[7] = 0;
  extraout_ECX[8] = 0;
  Ordinal_8(extraout_ECX + 10);
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = &PTR_FUN_50818958;
  extraout_ECX[0x15] = &PTR_FUN_50818950;
  extraout_ECX[0x16] = &PTR_FUN_50818948;
  extraout_ECX[0x17] = &PTR_FUN_50818940;
  extraout_ECX[0x10] = 0;
  *unaff_FS_OFFSET = uVar1;
  return extraout_ECX;
}


