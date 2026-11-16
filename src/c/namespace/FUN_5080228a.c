/* FUN_5080228a - 0x5080228a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080228a(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  extraout_ECX[1] = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if (extraout_ECX + 2 != (undefined4 *)0x0) {
    extraout_ECX[2] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_50817294;
  extraout_ECX[5] = 0;
  FUN_5080251c((int)(extraout_ECX + 4));
  extraout_ECX[6] = &LAB_508024e4;
  extraout_ECX[7] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_50817284;
  *(undefined4 **)(extraout_ECX[5] + 8) = extraout_ECX;
  *unaff_FS_OFFSET = uVar1;
  return extraout_ECX;
}


