/* FUN_5080ea06 - 0x5080ea06 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080ea06(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *this;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar4 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 == 0) {
    *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 4);
    FUN_508012a1();
    piVar3 = *(int **)(extraout_ECX + 0x38);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(void **)(unaff_EBP + -0x10) = (void *)(extraout_ECX + 0x38);
    if ((piVar3 == (int *)0x0) || (iVar4 = *piVar3, iVar4 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar4 + -4) >> 1;
    }
    if (uVar2 == 0) {
      FUN_50806999((int *)(extraout_ECX + 0x34),(void *)(extraout_ECX + 0x38));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar3 = (int *)(extraout_ECX + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *(undefined4 *)(extraout_ECX + 4) = 0;
    }
    puVar1 = *(undefined4 **)(extraout_ECX + 0x30);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    FUN_508012a1();
    iVar4 = *(int *)(extraout_ECX + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piVar3 = (int *)FUN_5080fd86((void *)(iVar4 + 8),*(int **)(unaff_EBP + -0x10),(undefined4 *)0x0)
    ;
    if (piVar3 != (int *)0x0) {
      this = *(undefined4 **)(unaff_EBP + 8);
      *this = 0;
      if (((*piVar3 != 0) && (iVar4 = FUN_50810d05(this,piVar3), iVar4 < 0)) &&
         (iVar4 != -0x7fffbffe)) {
        FUN_5080dfed(iVar4);
      }
      piVar3 = puVar1 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        *puVar1 = 0;
      }
      goto LAB_5080eacc;
    }
    piVar3 = puVar1 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
  }
  this = *(undefined4 **)(unaff_EBP + 8);
  *this = 0;
LAB_5080eacc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


