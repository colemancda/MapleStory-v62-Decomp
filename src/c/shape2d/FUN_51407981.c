/* FUN_51407981 - 0x51407981 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51407981(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int extraout_ECX;
  int *piVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_5140ad20();
  puVar5 = (undefined4 *)(extraout_ECX + 0x14);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar5;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar5;
  FUN_5140126a();
  piVar4 = *(int **)(extraout_ECX + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar4;
      *(int **)(unaff_EBP + -0x10) = piVar4;
      iVar3 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 4);
      piVar4 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
      sVar2 = (**(code **)(*piVar1 + 4))();
      if (sVar2 == 0) {
        if (piVar1 != (int *)0x0) {
          (**(code **)*piVar1)(1);
        }
        FUN_5140455a((void *)(extraout_ECX + 0x30),*(int *)(unaff_EBP + -0x10));
      }
    } while (piVar4 != (int *)0x0);
    puVar5 = *(undefined4 **)(unaff_EBP + -0x14);
  }
  iVar3 = FUN_5140a821((void *)(extraout_ECX + 0x1c),(int *)(unaff_EBP + 8));
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    FUN_5140ac47(iVar3);
  }
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  piVar4 = puVar5 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    *puVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


