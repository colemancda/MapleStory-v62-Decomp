/* FUN_50c0af25 - 0x50c0af25 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0af25(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this;
  int iVar3;
  uint uVar4;
  void *this_00;
  int unaff_EBP;
  
  FUN_50c10270();
  this = *(void **)(unaff_EBP + 8);
  puVar1 = (undefined4 *)((int)this + 0x1c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  FUN_50c026fc();
  iVar3 = *(int *)((int)this + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    uVar4 = *(uint *)(*(int *)((int)this + 0x2c) + 8);
  }
  else {
    if (**(int **)((int)this + 0x28) == 0) goto LAB_50c0af6e;
    uVar4 = *(uint *)(**(int **)((int)this + 0x28) + -4);
  }
  if (*(uint *)(unaff_EBP + 0xc) < uVar4) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    this_00 = (void *)FUN_50c0aefe(this,*(uint *)(unaff_EBP + 0xc));
    FUN_50c0afd1(this_00,(short *)(unaff_EBP + 0x10));
    piVar2 = (int *)((int)this + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    FUN_50c0afc0();
    return;
  }
LAB_50c0af6e:
  piVar2 = (int *)((int)this + 0x20);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  FUN_50c0afc0();
  return;
}


