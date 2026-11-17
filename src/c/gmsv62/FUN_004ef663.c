/* FUN_004ef663 - 0x004ef663 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_004ef663(void)

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
  FUN_00402e8e(*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar2 = (int *)FUN_00432dcc(unaff_EBP + 0xc);
  iVar1 = *piVar2;
  piVar2 = *(int **)(unaff_EBP + 8);
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}


