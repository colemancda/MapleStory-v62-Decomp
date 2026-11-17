/* FUN_004cb02d - 0x004cb02d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004cb02d(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_004cd8bb();
  FUN_004cd473(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x18) = uVar1;
  FUN_004cd712(*(int *)(unaff_EBP + 0xc) + 0x20,unaff_EBP + 8);
  uVar1 = FUN_0045e2eb();
  uVar2 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  FUN_004cda9b(*(int *)(unaff_EBP + 0xc) + 0x20,unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_004cd5da(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


