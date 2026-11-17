/* FUN_00826d48 - 0x00826d48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00826d48(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0xd8);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00817954(*(undefined4 *)(extraout_ECX + 4));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0081420c(0,0,800,600,0,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


