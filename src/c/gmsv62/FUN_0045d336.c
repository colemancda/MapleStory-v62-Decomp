/* FUN_0045d336 - 0x0045d336 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0045d336(void)

{
  int extraout_ECX;
  int unaff_EBP;
  bool bVar1;
  
  FUN_00879bb8();
  bVar1 = *(int *)(extraout_ECX + 0x18) == 0;
  if (bVar1) {
    FUN_0060142b(0xc5,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x18) = 1;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar1;
}


