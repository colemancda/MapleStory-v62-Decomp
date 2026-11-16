/* FUN_5100569c - 0x5100569c in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_5100569c(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_51005950();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  iVar2 = (**(code **)(*extraout_ECX + 0x1c))(extraout_ECX,iVar2);
  if (iVar2 < 0) {
    FUN_51005828(iVar2,extraout_ECX,&DAT_51009218);
  }
  if (piVar1 != (int *)0x0) {
    FUN_510052d4(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


