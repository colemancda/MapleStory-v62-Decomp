/* FUN_007fea2c - 0x007fea2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007fea2c(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_005e4404(0);
  if (iVar1 != 0) {
    FUN_0060142b(0x8c,0,0);
    iVar1 = *(int *)(extraout_ECX + 0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -4;
    }
    FUN_00457fa0(iVar1 + 0x90,8);
    iVar1 = FUN_005e4469(unaff_EBP + -0x1c,0,0);
    if (iVar1 == 0) {
      FUN_004751b2(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


