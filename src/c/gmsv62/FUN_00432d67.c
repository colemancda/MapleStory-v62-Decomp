/* FUN_00432d67 - 0x00432d67 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00432d67(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00432dcc(*(undefined4 *)(unaff_EBP + 0xc));
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar2 = *(int **)(unaff_EBP + 8);
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}


