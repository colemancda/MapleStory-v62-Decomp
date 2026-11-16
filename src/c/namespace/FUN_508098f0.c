/* FUN_508098f0 - 0x508098f0 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_508098f0(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  Ordinal_8(unaff_EBP + -0x20);
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  iVar2 = (**(code **)(*extraout_ECX + 0xc))(extraout_ECX,iVar2,unaff_EBP + -0x20);
  if (iVar2 < 0) {
    FUN_5080dffb(iVar2,extraout_ECX,&DAT_5081d210);
  }
  FUN_50809967(*(void **)(unaff_EBP + 8),(undefined2 *)(unaff_EBP + -0x20),'\0');
  if (piVar1 != (int *)0x0) {
    FUN_508040b6(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


