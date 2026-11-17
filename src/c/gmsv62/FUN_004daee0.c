/* FUN_004daee0 - 0x004daee0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004daee0(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (extraout_ECX[0x62] != 0) {
    FUN_0060142b(0x6f,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(0xb);
    FUN_00457cda(1);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
    (**(code **)(*extraout_ECX + 0x34))(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


