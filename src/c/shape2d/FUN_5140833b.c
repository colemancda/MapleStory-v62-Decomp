/* FUN_5140833b - 0x5140833b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140833b(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x14);
  FUN_5140126a();
  iVar2 = **(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = (**(code **)(iVar2 + 4))();
  puVar4 = *(undefined4 **)(extraout_ECX + 0x40);
  *(uint *)(unaff_EBP + -0x10) = uVar3 & 0xffff;
  do {
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_51409e2f((void *)(extraout_ECX + 0x30));
LAB_514083a6:
      *puVar4 = *(undefined4 *)(unaff_EBP + 8);
      piVar1 = (int *)(extraout_ECX + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(extraout_ECX + 0x14) = 0;
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    uVar3 = (**(code **)(*(int *)*puVar4 + 4))();
    if ((uVar3 & 0xffff) <= *(uint *)(unaff_EBP + -0x10)) {
      puVar4 = (undefined4 *)FUN_51409e72((void *)(extraout_ECX + 0x30),(int)puVar4);
      goto LAB_514083a6;
    }
    iVar2 = *(int *)((-(uint)(puVar4 != (undefined4 *)0x0) & (uint)(puVar4 + -4)) + 8);
    puVar4 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
  } while( true );
}


