/* FUN_50c062f7 - 0x50c062f7 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c062f7(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
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
    FUN_50c101d2(iVar2,extraout_ECX,&DAT_50c173b0);
  }
  if (piVar1 != (int *)0x0) {
    FUN_50c02a85(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


