/* FUN_5000ee5c - 0x5000ee5c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000ee5c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *this;
  int *piVar4;
  undefined4 extraout_ECX;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 *puVar8;
  uint *puVar9;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined ***)(unaff_EBP + -0x40) = &PTR_FUN_500155c0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5000ed66((void *)(unaff_EBP + -0x40),*(undefined4 **)(unaff_EBP + 0x10),
               *(int *)(unaff_EBP + 0xc));
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined ***)(unaff_EBP + -0x2c) = &PTR_FUN_500155bc;
    piVar1 = *(int **)(unaff_EBP + -0x34);
    iVar2 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + 0xc) = iVar2;
    if (piVar1 != (int *)0x0) {
      while( true ) {
        iVar2 = *(int *)((-(uint)(piVar1 != (int *)0x0) & (uint)(piVar1 + -4)) + 4);
        uVar6 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        *(int **)(unaff_EBP + 0x10) = piVar1;
        *(uint *)(unaff_EBP + -0x10) = uVar6;
        iVar2 = (uint)(uVar6 == 0) + *piVar1;
        *(int *)(unaff_EBP + -0x18) = iVar2;
        if (*(int *)(unaff_EBP + 0xc) < iVar2) {
          do {
            FUN_5000f12b(unaff_EBP + -0x2c);
            puVar8 = *(undefined4 **)(unaff_EBP + -0x20);
            while (puVar8 != (undefined4 *)0x0) {
              iVar2 = *(int *)((-(uint)(puVar8 != (undefined4 *)0x0) & (uint)(puVar8 + -4)) + 4);
              puVar3 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
              iVar2 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
              (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x8c))
                        (*(int **)(unaff_EBP + -0x14),*(int *)*puVar8,
                         *(undefined4 *)(unaff_EBP + 0xc),(*(int *)*puVar3 - *(int *)*puVar8) + 1,1,
                         *(undefined4 *)(unaff_EBP + 8));
              puVar8 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
            }
            puVar8 = *(undefined4 **)(unaff_EBP + -0x20);
            while (puVar8 != (undefined4 *)0x0) {
              iVar2 = *(int *)((-(uint)(puVar8 != (undefined4 *)0x0) & (uint)(puVar8 + -4)) + 4);
              FUN_5000f104((int *)*puVar8);
              puVar8 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
            }
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
          } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + -0x18));
          piVar1 = *(int **)(unaff_EBP + 0x10);
        }
        puVar9 = (uint *)piVar1[4];
        if ((uint *)piVar1[4] != (uint *)0x0) {
          do {
            iVar2 = *(int *)((-(uint)(puVar9 != (uint *)0x0) & (uint)(puVar9 + -4)) + 4);
            puVar5 = (uint *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
            this = FUN_500023f6();
            puVar8 = (undefined4 *)FUN_5000f4e4((void *)(unaff_EBP + -0x2c));
            iVar2 = *(int *)(unaff_EBP + 0xc);
            *puVar8 = this;
            *this = *puVar9;
            this[1] = puVar9[1];
            FUN_5000f094(this,(int *)puVar9,iVar2);
            puVar9 = puVar5;
          } while (puVar5 != (uint *)0x0);
          piVar1 = *(int **)(unaff_EBP + 0x10);
        }
        if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
          *(int **)(unaff_EBP + 0x10) = piVar1 + 6;
          piVar1 = *(int **)(unaff_EBP + -0x20);
          do {
            iVar2 = *(int *)((-(uint)(piVar1 != (int *)0x0) & (uint)(piVar1 + -4)) + 4);
            piVar7 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
            piVar4 = FUN_5000f49b(*(void **)(unaff_EBP + 0x10),(int *)(*piVar1 + 4),0);
            if (piVar4 != (int *)0x0) {
              FUN_5000257e(&DAT_50081f98,(undefined4 *)*piVar1);
              FUN_5000f522((void *)(unaff_EBP + -0x2c),(int)piVar1);
            }
            piVar1 = piVar7;
          } while (piVar7 != (int *)0x0);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) break;
        piVar1 = *(int **)(unaff_EBP + -0x10);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined ***)(unaff_EBP + -0x2c) = &PTR_FUN_500155bc;
    FUN_5000f634(unaff_EBP + -0x2c);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x40) = &PTR_FUN_500155c0;
  FUN_5000f634(unaff_EBP + -0x40);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


