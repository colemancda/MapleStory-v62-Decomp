/* FUN_00481afc - 0x00481afc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00481afc(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  iVar2 = piVar1[1];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = iVar2;
  extraout_ECX[2] = piVar1[2];
  extraout_ECX[3] = piVar1[3];
  extraout_ECX[4] = piVar1[4];
  extraout_ECX[5] = 0;
  FUN_00483ceb(piVar1 + 5);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


