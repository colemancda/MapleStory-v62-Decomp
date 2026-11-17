/* FUN_00568758 - 0x00568758 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00568758(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x13c) != 1) {
    FUN_0060142b(0xc,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  FUN_0060142b(0xd,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004751b2(unaff_EBP + -0x2c);
  *(undefined4 *)(extraout_ECX + 0xf4) = 1;
  *(undefined4 *)(extraout_ECX + 0xfc) = *(undefined4 *)(DAT_00973cd8 + 0x18);
  FUN_005686c3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


