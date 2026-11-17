/* FUN_005e297d - 0x005e297d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005e297d(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_005e2932(*(undefined4 *)(unaff_EBP + 8),extraout_ECX,extraout_ECX);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x34);
    FUN_005e3100(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


