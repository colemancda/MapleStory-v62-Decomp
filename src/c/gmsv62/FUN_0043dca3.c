/* FUN_0043dca3 - 0x0043dca3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043dca3(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_00445b70();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x380,4,0x1c,&LAB_004458ed);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x1c8,4,0x6e,&LAB_00445903);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 0x10,4,0x6e,&LAB_004458f8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00445a30();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


