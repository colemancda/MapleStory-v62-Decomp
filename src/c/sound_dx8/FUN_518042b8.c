/* FUN_518042b8 - 0x518042b8 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518042b8(void)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x3c);
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_51810353(extraout_ECX + 0x44);
  FUN_51812f01(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x48);
  FUN_51812f01(extraout_ECX + 0x44);
  piVar5 = (int *)(extraout_ECX + 0x40);
  *piVar5 = *piVar5 + -1;
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_5180115b(*(int *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_51818448;
  uVar1 = *(undefined4 *)(extraout_ECX + 0x78);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  FUN_518017b5();
  uVar3 = *(uint *)(*(int *)(extraout_ECX + 0x78) + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  while (uVar3 != 0) {
    *(uint *)(unaff_EBP + -0x10) = uVar3;
    iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    this = (void *)FUN_518107f0((void *)(unaff_EBP + -0x34));
    iVar2 = FUN_51810efb(this,*(int **)(unaff_EBP + -0x10));
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_5180e990(iVar2);
    }
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x14);
  piVar5 = puVar4 + 1;
  *piVar5 = *piVar5 + -1;
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    *puVar4 = 0;
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x28);
  while (puVar4 != (undefined4 *)0x0) {
    iVar2 = *(int *)((-(uint)(puVar4 != (undefined4 *)0x0) & (uint)(puVar4 + -4)) + 4);
    (**(code **)(*(int *)*puVar4 + 0x38))((int *)*puVar4);
    puVar4 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_51818448;
  FUN_518103e1(unaff_EBP + -0x34);
  uVar1 = *(undefined4 *)(extraout_ECX + 0x70);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  FUN_518017b5();
  piVar5 = *(int **)(*(int *)(extraout_ECX + 0x70) + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  while (piVar5 != (int *)0x0) {
    iVar2 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
    (*(code *)**(undefined4 **)(*piVar5 + 8))(*piVar5 + 8);
    piVar5 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x14);
  piVar5 = puVar4 + 1;
  *piVar5 = *piVar5 + -1;
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    *puVar4 = 0;
  }
  *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(extraout_ECX + 0x4c);
  FUN_518017b5();
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  puVar4 = *(undefined4 **)(extraout_ECX + 100);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (puVar4 != (undefined4 *)0x0) {
    while( true ) {
      iVar2 = *(int *)((-(uint)(puVar4 != (undefined4 *)0x0) & (uint)(puVar4 + -4)) + 4);
      uVar1 = *puVar4;
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      acmDriverClose(uVar1,0);
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
    }
  }
  FUN_518103e1(extraout_ECX + 0x58);
  piVar5 = (int *)(extraout_ECX + 0x50);
  *piVar5 = *piVar5 + -1;
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  }
  *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(extraout_ECX + 0x7c);
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_5181070d(extraout_ECX + 0x84);
  piVar5 = (int *)(extraout_ECX + 0x80);
  *piVar5 = *piVar5 + -1;
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(extraout_ECX + 4);
    FUN_518017b5();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_518101fe((void *)(extraout_ECX + 0xc),(undefined4 *)0x0);
    piVar5 = (int *)(extraout_ECX + 8);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      *(undefined4 *)(extraout_ECX + 4) = 0;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_51813012(unaff_EBP + -0x20);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


