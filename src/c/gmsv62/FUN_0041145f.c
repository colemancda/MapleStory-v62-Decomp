/* FUN_0041145f - 0x0041145f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0041145f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int local_10;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0x35) {
    local_10 = -6;
    (*DAT_0097b504)(*(undefined4 *)(unaff_EBP + 0x10),0xffffffa8,0xffffffc2,0xffffffee);
    iVar2 = *(int *)(unaff_EBP + 8);
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 8);
    *(int **)(unaff_EBP + 0xc) = &local_10;
    local_10 = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 8));
    }
    iVar3 = FUN_00408b5a();
    if (iVar3 == 0) {
      local_10 = *(int *)(unaff_EBP + 0x10);
      (*DAT_0097b508)();
    }
    else {
      local_10 = iVar1 * 0x30 + *(int *)(iVar3 + 0x10);
      FUN_00411537(*(undefined4 *)(unaff_EBP + 0x10));
    }
  }
  if (iVar2 != 0) {
    local_10 = 0x4114e2;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


