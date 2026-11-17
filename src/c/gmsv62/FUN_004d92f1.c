/* FUN_004d92f1 - 0x004d92f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d92f1(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 2) {
    FUN_0060142b(0x7d,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(1);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  FUN_004bc92b(*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


