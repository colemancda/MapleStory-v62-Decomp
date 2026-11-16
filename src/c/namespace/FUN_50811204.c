/* FUN_50811204 - 0x50811204 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50811204(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  puVar2 = *(undefined4 **)(extraout_ECX + 0x50);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = (**(code **)(extraout_ECX + 0x18))();
  }
  else {
    *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
    FUN_508012a1();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = (**(code **)(extraout_ECX + 0x18))();
    if (iVar3 == 0) {
      FUN_508120fa((void *)(*(int *)(extraout_ECX + 0x50) + 8),(int *)(extraout_ECX + 0x7c));
    }
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar2 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


