/* FUN_00861fdd - 0x00861fdd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00861fdd(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x14) != 0) {
    FUN_00862c62(0);
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


