/* FUN_006bab6e - 0x006bab6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bab6e(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 4;
  piVar3 = (int *)(extraout_ECX + 0x5e0);
  do {
    if (*piVar3 != 0) {
      (**(code **)(*(int *)(*piVar3 + 4) + 0x24))(0);
    }
    piVar3 = piVar3 + 2;
    piVar1 = (int *)(unaff_EBP + -0x10);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x584);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x28), iVar2 != 0)) && (*(int *)(iVar2 + -4) != 0))
  {
    iVar2 = FUN_006ba228();
    if ((iVar2 != 0) ||
       (*(int *)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x584) + 0x28) + 4 +
                         *(int *)(*(int *)(extraout_ECX + 0x630) + 0x38) * 8) + 0x10) ==
        *(int *)(DAT_00978368 + 0x2088))) {
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5e0) + 4) + 0x24))(1);
    }
  }
  if (((*(int *)(extraout_ECX + 0x584) != 0) &&
      (iVar2 = *(int *)(*(int *)(extraout_ECX + 0x584) + 0x28), iVar2 != 0)) &&
     (1 < *(uint *)(iVar2 + -4))) {
    iVar2 = FUN_006ba228();
    if ((iVar2 != 0) ||
       (*(int *)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x584) + 0x28) + 0xc +
                         *(int *)(*(int *)(extraout_ECX + 0x630) + 0x38) * 8) + 0x10) ==
        *(int *)(DAT_00978368 + 0x2088))) {
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5e8) + 4) + 0x24))(1);
    }
  }
  if (((*(int *)(extraout_ECX + 0x584) != 0) &&
      (iVar2 = *(int *)(*(int *)(extraout_ECX + 0x584) + 0x28), iVar2 != 0)) &&
     (2 < *(uint *)(iVar2 + -4))) {
    iVar2 = FUN_006ba228();
    if ((iVar2 != 0) ||
       (*(int *)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x584) + 0x28) + 0x14 +
                         *(int *)(*(int *)(extraout_ECX + 0x630) + 0x38) * 8) + 0x10) ==
        *(int *)(DAT_00978368 + 0x2088))) {
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5f0) + 4) + 0x24))(1);
    }
  }
  if (((*(int *)(extraout_ECX + 0x584) != 0) &&
      (iVar2 = *(int *)(*(int *)(extraout_ECX + 0x584) + 0x28), iVar2 != 0)) &&
     (3 < *(uint *)(iVar2 + -4))) {
    iVar2 = FUN_006ba228();
    if ((iVar2 != 0) ||
       (*(int *)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x584) + 0x28) + 0x1c +
                         *(int *)(*(int *)(extraout_ECX + 0x630) + 0x38) * 8) + 0x10) ==
        *(int *)(DAT_00978368 + 0x2088))) {
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5f8) + 4) + 0x24))(1);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


