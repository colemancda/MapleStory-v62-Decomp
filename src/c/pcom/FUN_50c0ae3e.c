/* FUN_50c0ae3e - 0x50c0ae3e in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0ae3e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_50c0aeed();
    return;
  }
  this = *(void **)(unaff_EBP + 8);
  puVar1 = (undefined4 *)((int)this + 0x1c);
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  FUN_50c026fc();
  iVar4 = *(int *)((int)this + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    uVar3 = *(uint *)(*(int *)((int)this + 0x2c) + 8);
  }
  else {
    if (**(int **)((int)this + 0x28) == 0) goto LAB_50c0ae96;
    uVar3 = *(uint *)(**(int **)((int)this + 0x28) + -4);
  }
  if (*(uint *)(unaff_EBP + 0xc) < uVar3) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_50c0aefe(this,*(uint *)(unaff_EBP + 0xc));
    psVar5 = (short *)FUN_50c0ab6e(iVar4);
    FUN_50c09a25(*(short **)(unaff_EBP + 0x10),psVar5);
    piVar2 = (int *)((int)this + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
      FUN_50c0aeed();
      return;
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
LAB_50c0ae96:
  piVar2 = (int *)((int)this + 0x20);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  FUN_50c0aeed();
  return;
}


