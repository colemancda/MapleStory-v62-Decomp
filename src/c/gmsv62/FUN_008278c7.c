/* FUN_008278c7 - 0x008278c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008278c7(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0x9d0);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_0082791b();
  }
  uVar2 = *(undefined4 *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = extraout_ECX + 0x4c;
  FUN_00828df5(uVar2,iVar1);
  FUN_0052625f(uVar2,iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


