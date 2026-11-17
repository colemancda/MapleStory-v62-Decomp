/* FUN_0060142b - 0x0060142b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0060142b(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00475c07(0x100,unaff_EBP + -0xd);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00601477(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
               *(undefined4 *)(unaff_EBP + 0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


