/* FUN_5180adfd - 0x5180adfd in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_5180adfd(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_518199a0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5180ca7c();
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  extraout_ECX[1] = &PTR_LAB_5181999c;
  *extraout_ECX = &PTR_FUN_51819980;
  extraout_ECX[2] = &PTR_LAB_5181997c;
  *unaff_FS_OFFSET = uVar1;
  return extraout_ECX;
}


