/* FUN_0070e382 - 0x0070e382 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070e382(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iVar2 = FUN_0070ee28(unaff_EBP + 8,unaff_EBP + -0x14);
  if ((iVar2 == 0) || (*(int *)(unaff_EBP + -0x10) == 0)) {
    FUN_0070e67d(uVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0070edc2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


