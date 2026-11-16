/* FUN_50406c06 - 0x50406c06 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_50406c06(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0x14) = 0;
  if ((undefined4 *)(extraout_ECX + 0x18) != (undefined4 *)0x0) {
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
  }
  *(undefined ***)(extraout_ECX + 4) = &PTR_LAB_5042d5b4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(extraout_ECX + 8) = &PTR_LAB_5042d5a8;
  FUN_50407088();
  *(undefined4 *)(extraout_ECX + 0x24) = 0;
  *(undefined4 *)(extraout_ECX + 0x28) = 0;
  *(undefined4 *)(extraout_ECX + 0x2c) = 0;
  *(undefined4 *)(extraout_ECX + 0x34) = 0;
  *(undefined4 *)(extraout_ECX + 0x38) = 0;
  *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  *(undefined4 *)(extraout_ECX + 0x50) = 0;
  *(undefined4 *)(extraout_ECX + 100) = 0;
  *(undefined4 *)(extraout_ECX + 0x68) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(extraout_ECX + 0x74) = 0;
  *(undefined4 *)(extraout_ECX + 0x78) = 0;
  *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  (*DAT_50438c10)(extraout_ECX + 0x3c);
  memset((void *)(extraout_ECX + 0x54),0,0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


