/* FUN_007c5360 - 0x007c5360 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007c5360(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = FUN_004029b9(0x90);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005c5810();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
  }
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar1 + 4) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004d2023(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


