/* ptr_50c0d31f - 0x50c0d31f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 ptr_50c0d31f(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar3 = *(int *)(unaff_EBP + 8);
  puVar1 = (undefined4 *)(iVar3 + 0x1c);
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  FUN_50c026fc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(short **)(unaff_EBP + 0xc) == (short *)0x0) || (**(short **)(unaff_EBP + 0xc) == 0)) {
    FUN_50c07810(iVar3 + 0x24);
    FUN_50c04098(iVar3 + 0x3c);
    piVar2 = (int *)(iVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    iVar4 = FUN_50c0dcc3((void *)(iVar3 + 0x24),(undefined4 *)(unaff_EBP + 0xc),(void *)0x0);
    if (iVar4 == 0) {
      piVar2 = (int *)(iVar3 + 0x20);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      uVar5 = 1;
      goto LAB_50c0d3aa;
    }
    FUN_50c0df3d((void *)(iVar3 + 0x3c),*(int *)(*(int *)(iVar4 + 4) + 0x28));
    FUN_50c0de7c((void *)(iVar3 + 0x24),(undefined4 *)(unaff_EBP + 0xc));
    piVar2 = (int *)(iVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  uVar5 = 0;
LAB_50c0d3aa:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


