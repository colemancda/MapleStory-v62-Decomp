/* FUN_5080dc25 - 0x5080dc25 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080dc25(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
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
    FUN_5080dffb(iVar2,extraout_ECX,&DAT_5081e4f0);
  }
  if (piVar1 != (int *)0x0) {
    FUN_508040b6(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


