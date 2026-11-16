/* FUN_51803c8a - 0x51803c8a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51803c8a(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *this;
  uint uVar6;
  int unaff_EBP;
  uint uVar7;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_51803d88();
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_5181079c((void *)(unaff_EBP + -0x14));
  iVar5 = FUN_51804b19();
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar5 + 0x78);
  FUN_51810353(unaff_EBP + -0x28);
  puVar1 = *(undefined4 **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
  FUN_518017b5();
  uVar7 = *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  while (uVar7 != 0) {
    uVar6 = -(uint)(*(int *)(uVar7 - 0xc) != 0) & *(int *)(uVar7 - 0xc) + 0x10U;
    *(uint *)(unaff_EBP + -0x18) = uVar7;
    this = (void *)FUN_5181075e((void *)(iVar4 + 0x10));
    iVar5 = FUN_518114e1(this,*(int **)(unaff_EBP + -0x18));
    uVar7 = uVar6;
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      FUN_5180e990(iVar5);
    }
  }
  *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar4 + 0x1c);
  piVar3 = puVar1 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *puVar1 = 0;
  }
  iVar4 = *(int *)(unaff_EBP + -0x24);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  **(undefined4 **)(unaff_EBP + 0xc) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 != 0) {
    FUN_51813012(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  FUN_51803d88();
  return;
}


