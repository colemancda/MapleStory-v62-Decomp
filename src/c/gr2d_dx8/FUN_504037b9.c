/* FUN_504037b9 - 0x504037b9 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_504037b9(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x20) = (undefined4 *)(extraout_ECX + 4);
  FUN_50401895();
  iVar4 = **(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar2 = (int *)(**(code **)(iVar4 + 0xc))(0);
  *(int **)(unaff_EBP + -0x10) = piVar2;
  if (piVar2 != (int *)0x0) {
    FUN_50403909(piVar2,(int *)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_5042d37c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_504068f7((void *)(unaff_EBP + -0x34),extraout_ECX + 0xc,*(uint *)(unaff_EBP + -0x18),
                 *(uint *)(unaff_EBP + -0x14),0);
    FUN_5040e395((void *)(unaff_EBP + -0x34),*(int *)(unaff_EBP + -0x10));
    puVar3 = *(undefined4 **)(unaff_EBP + -0x28);
    if (puVar3 != (undefined4 *)0x0) {
      while( true ) {
        piVar2 = (int *)*puVar3;
        iVar4 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
        iVar1 = *piVar2;
        *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
        iVar4 = (**(code **)(iVar1 + 0x10))();
        if (iVar4 == *(int *)(unaff_EBP + 8)) {
          (**(code **)(*piVar2 + 0x14))(0);
          (**(code **)(*piVar2 + 8))(0,0);
          (**(code **)(*piVar2 + 8))(1,0);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) break;
        puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
      }
    }
    iVar4 = *(int *)(unaff_EBP + -0x28);
    if (iVar4 != 0) {
      while( true ) {
        iVar4 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
        *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
        FUN_5040398e();
        if (*(int *)(unaff_EBP + -0x10) == 0) break;
        iVar4 = *(int *)(unaff_EBP + -0x10);
      }
    }
    piVar2 = *(int **)(unaff_EBP + 8);
    (**(code **)(*piVar2 + 8))(0,0);
    (**(code **)(*piVar2 + 8))(1,0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_5042d37c;
    FUN_504068bd(unaff_EBP + -0x34);
  }
  piVar2 = (int *)(extraout_ECX + 8);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


