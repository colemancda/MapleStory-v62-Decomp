/* FUN_005b7233 - 0x005b7233 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b7233(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (0 < *(int *)(extraout_ECX + 200)) {
    FUN_0060142b(0x6f,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(0x37);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


