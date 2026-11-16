/* FUN_508017a5 - 0x508017a5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508017a5(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_5080228a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50802206((undefined4 *)(extraout_ECX + 0x20));
  *(undefined ***)(extraout_ECX + 0x3c) = &PTR_LAB_508171d8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined ***)(extraout_ECX + 0x40) = &PTR_LAB_508171c4;
  FUN_5080236a();
  *(undefined4 *)(extraout_ECX + 0x50) = 0;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x54) = 0x1f;
  *(undefined ***)(extraout_ECX + 0x4c) = &PTR_FUN_508171c0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 100;
  *(undefined4 *)(extraout_ECX + 0x60) = 0x18;
  *(undefined4 *)(extraout_ECX + 100) = 0;
  return extraout_ECX;
}


