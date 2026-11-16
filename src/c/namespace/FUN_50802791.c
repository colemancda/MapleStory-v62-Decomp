/* FUN_50802791 - 0x50802791 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50802791(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_5080228a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50802206((undefined4 *)(extraout_ECX + 0x20));
  *(undefined ***)(extraout_ECX + 0x3c) = &PTR_LAB_50817354;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined ***)(extraout_ECX + 0x40) = &PTR_LAB_508171c4;
  FUN_50802942();
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x50) = 0;
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  *(undefined4 *)(extraout_ECX + 0x68) = 0;
  *(undefined4 *)(extraout_ECX + 100) = 0x1f;
  *(undefined ***)(extraout_ECX + 0x5c) = &PTR_FUN_50817350;
  *(undefined4 *)(extraout_ECX + 0x6c) = 100;
  *(undefined4 *)(extraout_ECX + 0x70) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x74) = 0;
  *unaff_FS_OFFSET = uVar1;
  return extraout_ECX;
}


