/* FUN_50803fbb - 0x50803fbb in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_50803fbb(void)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  void *this_00;
  int unaff_EBP;
  
  FUN_5080e090();
  if (*(int *)((int)this_00 + 4) == 0) {
    uVar3 = *(uint *)((int)this_00 + 8);
  }
  else {
    if (*(uint *)((int)this_00 + 0xc) <= *(uint *)((int)this_00 + 0x14)) goto LAB_50803ff3;
    uVar3 = *(int *)((int)this_00 + 8) * 2 + 1;
  }
  if (uVar3 != 0) {
    FUN_50808eef(this_00,uVar3,0);
  }
LAB_50803ff3:
  uVar3 = FUN_508052c7(*(int **)(unaff_EBP + 8));
  uVar3 = uVar3 % *(uint *)((int)this_00 + 8);
  puVar5 = *(undefined4 **)(*(int *)((int)this_00 + 4) + uVar3 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this_00 + 4) + uVar3 * 4);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      *(int *)((int)this_00 + 0xc) = *(int *)((int)this_00 + 0xc) + 1;
      this = (void *)FUN_508054bd();
      *(void **)(unaff_EBP + -0x10) = this;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (this == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_50804e08(this,*(int **)(unaff_EBP + 8),*puVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if ((*(int *)(unaff_EBP + 0xc) != 0) &&
         (iVar4 = FUN_50803aab((short *)(puVar5 + 4),*(short **)(unaff_EBP + 0xc)), iVar4 < 0)) {
        FUN_5080dfed(iVar4);
      }
      *puVar1 = puVar5;
LAB_50804095:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar5;
    }
    bVar2 = FUN_50803f09(puVar5 + 2,*(undefined4 **)(unaff_EBP + 8));
    if (bVar2) {
      if ((*(int *)(unaff_EBP + 0xc) != 0) &&
         (iVar4 = FUN_50803aab((short *)(puVar5 + 4),*(short **)(unaff_EBP + 0xc)), iVar4 < 0)) {
        FUN_5080dfed(iVar4);
      }
      goto LAB_50804095;
    }
    puVar5 = (undefined4 *)puVar5[1];
  } while( true );
}


