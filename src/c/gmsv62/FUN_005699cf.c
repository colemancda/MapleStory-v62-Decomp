/* FUN_005699cf - 0x005699cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005699cf(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (1 < *(int *)(extraout_ECX + 0x13c)) {
    if (DAT_0097c1ac == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_005698b4();
    FUN_0056ab22();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_0060142b(0xc,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_004751b2(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
    *(undefined4 *)(extraout_ECX + 0x150) = 1;
    FUN_00564909(1);
    *(undefined4 *)(extraout_ECX + 0x150) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


