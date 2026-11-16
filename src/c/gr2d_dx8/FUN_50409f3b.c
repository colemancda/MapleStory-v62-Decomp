/* FUN_50409f3b - 0x50409f3b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50409f3b(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar1 = (undefined4 *)(extraout_ECX + 4);
  *(undefined4 **)(unaff_EBP + -0x20) = puVar1;
  FUN_50401895();
  piVar2 = *(int **)(unaff_EBP + 8);
  iVar5 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = (int *)(**(code **)(iVar5 + 0xc))(0);
  if (piVar3 == (int *)0x0) {
    (**(code **)(*piVar2 + 4))(*(undefined4 *)(unaff_EBP + 0xc));
    (**(code **)(*piVar2 + 0x14))(*(undefined4 *)(unaff_EBP + 0x10));
  }
  else {
    FUN_50403909(piVar3,(int *)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x14));
    uVar6 = *(uint *)(unaff_EBP + -0x14);
    *(uint *)(unaff_EBP + 8) = uVar6;
    if (uVar6 != 0) {
      *(uint *)(unaff_EBP + 8) = -(uint)(*(int *)(uVar6 - 0xc) != 0) & *(int *)(uVar6 - 0xc) + 0x10U
      ;
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_5042d37c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0xc;
    FUN_504068f7((void *)(unaff_EBP + -0x34),extraout_ECX + 0xc,*(uint *)(unaff_EBP + -0x18),uVar6,0
                );
    if (*(int *)(unaff_EBP + 8) == 0) {
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(extraout_ECX + 0x1c);
    }
    iVar4 = (**(code **)*piVar2)();
    iVar5 = *piVar2;
    *(uint *)(unaff_EBP + -0x1c) = (uint)(iVar4 <= *(int *)(unaff_EBP + 0xc));
    (**(code **)(iVar5 + 4))(*(undefined4 *)(unaff_EBP + 0xc));
    iVar5 = *(int *)(extraout_ECX + 0x20);
    *(int *)(extraout_ECX + 0x20) = iVar5 + 1;
    (**(code **)(*piVar2 + 8))(1,iVar5);
    iVar5 = (**(code **)(*piVar2 + 0x10))();
    if (iVar5 == *(int *)(unaff_EBP + 0x10)) {
      puVar7 = *(undefined4 **)(unaff_EBP + 8);
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        if (puVar7 != (undefined4 *)0x0) {
          while (iVar5 = FUN_50403a3e(piVar2,(int *)*puVar7), iVar5 < 0) {
            iVar5 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 8);
            uVar6 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
            *(uint *)(unaff_EBP + 8) = uVar6;
            if (uVar6 == 0) goto LAB_5040a0c7;
            puVar7 = *(undefined4 **)(unaff_EBP + 8);
          }
LAB_5040a140:
          FUN_504068f7(*(void **)(unaff_EBP + -0x10),unaff_EBP + -0x34,0,0,(uint)puVar7);
          goto LAB_5040a151;
        }
        goto LAB_5040a0c7;
      }
      if (puVar7 != (undefined4 *)0x0) {
        while (iVar5 = FUN_50403a3e(piVar2,(int *)*puVar7), -1 < iVar5) {
          iVar5 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 4);
          uVar6 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
          *(uint *)(unaff_EBP + 8) = uVar6;
          if (uVar6 == 0) goto LAB_5040a065;
          puVar7 = *(undefined4 **)(unaff_EBP + 8);
        }
        FUN_5040c20d(*(void **)(unaff_EBP + -0x10),unaff_EBP + -0x34,0,0,(int)puVar7);
LAB_5040a151:
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_5042d37c;
        FUN_504068bd(unaff_EBP + -0x34);
        piVar2 = (int *)(extraout_ECX + 8);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *puVar1 = 0;
        }
        goto LAB_5040a0f1;
      }
LAB_5040a065:
      FUN_504068f7(*(void **)(unaff_EBP + -0x10),unaff_EBP + -0x34,0,0,0);
    }
    else {
      (**(code **)(*piVar2 + 0x14))(*(undefined4 *)(unaff_EBP + 0x10));
      puVar7 = *(undefined4 **)(extraout_ECX + 0x1c);
      while (puVar7 != (undefined4 *)0x0) {
        iVar5 = FUN_50403a3e(piVar2,(int *)*puVar7);
        if (-1 < iVar5) goto LAB_5040a140;
        iVar5 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 8);
        puVar7 = (undefined4 *)(-(uint)(iVar5 != 0) & iVar5 + 0x10U);
      }
LAB_5040a0c7:
      FUN_5040c20d(*(void **)(unaff_EBP + -0x10),unaff_EBP + -0x34,0,0,0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_5042d37c;
    FUN_504068bd(unaff_EBP + -0x34);
  }
  piVar2 = (int *)(extraout_ECX + 8);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
LAB_5040a0f1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


