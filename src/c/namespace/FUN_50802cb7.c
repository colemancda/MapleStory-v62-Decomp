/* FUN_50802cb7 - 0x50802cb7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50802cb7(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_5080228a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50802206((undefined4 *)(extraout_ECX + 0x20));
  *(undefined ***)(extraout_ECX + 0x3c) = &PTR_LAB_50817484;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined ***)(extraout_ECX + 0x40) = &PTR_LAB_508171c4;
  FUN_50802e19();
  *(undefined4 *)(extraout_ECX + 0x50) = 0;
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  *(undefined4 *)(extraout_ECX + 0x68) = 0;
  *(undefined4 *)(extraout_ECX + 0x6c) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x70) = 0;
  *(undefined ***)(extraout_ECX + 100) = &PTR_FUN_50817480;
  *(undefined4 *)(extraout_ECX + 0x74) = 100;
  *(undefined4 *)(extraout_ECX + 0x78) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  *(undefined4 *)(extraout_ECX + 0x80) = 0;
  *(undefined4 *)(extraout_ECX + 0x88) = 0;
  *(undefined4 *)(extraout_ECX + 0x90) = 0;
  *(undefined4 *)(extraout_ECX + 0x8c) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x98) = 0x18;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(extraout_ECX + 0x84) = &PTR_FUN_5081747c;
  *(undefined4 *)(extraout_ECX + 0x94) = 100;
  return extraout_ECX;
}


