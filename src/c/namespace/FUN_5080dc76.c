/* FUN_5080dc76 - 0x5080dc76 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080dc76(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  iVar3 = (**(code **)(*extraout_ECX + 0x40))
                    (extraout_ECX,iVar3,*(undefined4 *)(unaff_EBP + 0x10),unaff_EBP + 0x10);
  if (iVar3 < 0) {
    FUN_5080dffb(iVar3,extraout_ECX,&DAT_5081e4e0);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  if (piVar1 != (int *)0x0) {
    FUN_508040b6(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


