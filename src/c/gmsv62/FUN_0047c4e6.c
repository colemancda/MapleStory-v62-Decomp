/* FUN_0047c4e6 - 0x0047c4e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047c4e6(void)

{
  int extraout_ECX;
  int unaff_EBP;
  int iVar1;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x90);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) || (*(int *)(iVar1 + -4) < 0x1a)) {
    iVar1 = unaff_EBP + 8;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(iVar1);
    FUN_0047c06f();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


