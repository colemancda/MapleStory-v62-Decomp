/* FUN_00474dfe - 0x00474dfe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00474dfe(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_004029b9(*(undefined4 *)(unaff_EBP + 8));
  iVar2 = FUN_004029b9(0x1c);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    FUN_00474e4b(*(undefined4 *)(unaff_EBP + 8),uVar1,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


