/* ptr_007bbfe8 - 0x007bbfe8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_007bbfe8(void)

{
  int *piVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  FUN_00457d37();
  FUN_00457cda();
  FUN_00457cda();
  FUN_00457cda();
  FUN_00457cda();
  FUN_007d1e08();
  FUN_00457d37();
  if (unaff_ESI < *(int *)(unaff_EBP + -0x10)) {
    piVar2 = (int *)(unaff_EBP + -0xa98);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x10);
    do {
      FUN_004b8c9b(*piVar2 + 0x150);
      FUN_00457d37();
      FUN_00457cda();
      FUN_005c5474();
      FUN_00457cda();
      FUN_00457cda();
      FUN_00457cda();
      (**(code **)(*(int *)(*piVar2 + 4) + 0x10))();
      FUN_0045d247();
      (**(code **)(*(int *)(*piVar2 + 4) + 0x10))();
      FUN_0045d247();
      (**(code **)(*(int *)(*piVar2 + 4) + 0x14))();
      FUN_0045d247();
      (**(code **)(*(int *)(*piVar2 + 4) + 0x14))();
      FUN_0045d247();
      FUN_00457cda();
      iVar4 = 0;
      if (0 < piVar2[5]) {
        *(int **)(unaff_EBP + 8) = piVar2 + 6;
        do {
          FUN_00457d37();
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
          iVar4 = iVar4 + 1;
        } while (iVar4 < piVar2[5]);
      }
      FUN_005d0a74();
      FUN_00457d37();
      piVar2 = piVar2 + 0x26;
      piVar1 = (int *)(unaff_EBP + 0xc);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  (**(code **)(*(int *)(unaff_EBX + 4) + 0x10))();
  FUN_0045d247();
  (**(code **)(*(int *)(unaff_EBX + 4) + 0x10))();
  FUN_0045d247();
  FUN_00457cda();
  for (uVar3 = 0;
      (*(int *)(unaff_EBP + -0x20) != 0 && (uVar3 < *(uint *)(*(int *)(unaff_EBP + -0x20) + -4)));
      uVar3 = uVar3 + 1) {
    FUN_00457d37();
    FUN_00457cda();
  }
  FUN_0045d247();
  FUN_004751b2();
  FUN_007b4235();
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004f1a88();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007bd51d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


