/* FUN_51407d08 - 0x51407d08 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51407d08(void)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int extraout_ECX;
  int *piVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_5140ad20();
  puVar6 = (undefined4 *)(extraout_ECX + 0x14);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar6;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar6;
  FUN_5140126a();
  piVar5 = *(int **)(extraout_ECX + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar5 != (int *)0x0) {
    do {
      piVar2 = (int *)*piVar5;
      *(int **)(unaff_EBP + -0x10) = piVar5;
      iVar3 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
      piVar5 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
      sVar4 = (**(code **)(*piVar2 + 4))();
      if (sVar4 == 3) {
        if (piVar2 != (int *)0x0) {
          (**(code **)*piVar2)(1);
        }
        FUN_5140455a((void *)(extraout_ECX + 0x30),*(int *)(unaff_EBP + -0x10));
      }
    } while (piVar5 != (int *)0x0);
    puVar6 = *(undefined4 **)(unaff_EBP + -0x14);
  }
  uVar1 = *(undefined8 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  *(undefined8 *)(extraout_ECX + 0x48) = uVar1;
  piVar5 = puVar6 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    *puVar6 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


