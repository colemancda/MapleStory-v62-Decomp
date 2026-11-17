/* FUN_004ca2e0 - 0x004ca2e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ca2e0(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004cd8f9(uVar1);
  FUN_004cd7fc(*(int *)(unaff_EBP + 0xc) + 0x20);
  FUN_004cdb75(*(int *)(unaff_EBP + 0xc) + 0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_004cd5da(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


