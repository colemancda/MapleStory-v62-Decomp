/* FUN_50c0ace4 - 0x50c0ace4 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0ace4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int unaff_EBP;
  void *this;
  
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_50c0ae2d();
    return;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x1c;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x1c;
  FUN_50c026fc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c08cee();
  this = (void *)(-(uint)(unaff_EBP != 0x40) & unaff_EBP - 0x3cU);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined1 *)(unaff_EBP + 0xb) = 0;
  FUN_50c0b7c0(this,(undefined1 *)(unaff_EBP + 0xb));
  *(bool *)(unaff_EBP + 0xf) = *(int *)(iVar1 + 0x24) != 0;
  FUN_50c0b7c0(this,(undefined1 *)(unaff_EBP + 0xf));
  if (*(char *)(unaff_EBP + 0xf) == '\0') {
    piVar2 = *(int **)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    if (piVar2 != (int *)0x0) {
      FUN_50c040d2(piVar2);
      FUN_50c02783(&DAT_50c21310,piVar2);
      *(undefined4 *)(iVar1 + 0x28) = 0;
    }
    if (*(int *)(iVar1 + 0x2c) == 0) {
      puVar4 = FUN_50c025fb();
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = (uint)&PTR_FUN_50c13334;
      }
      *(uint **)(iVar1 + 0x2c) = puVar4;
    }
    FUN_50c0ac18(*(void **)(iVar1 + 0x2c),unaff_EBP + -0x40);
  }
  else {
    *(undefined4 *)(iVar1 + 0x24) = 1;
    if (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 0x2c))(1);
      *(undefined4 *)(iVar1 + 0x2c) = 0;
    }
    if (*(int *)(iVar1 + 0x28) == 0) {
      puVar4 = FUN_50c025fb();
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      *(uint **)(iVar1 + 0x28) = puVar4;
    }
    FUN_50c0ab91(*(int **)(iVar1 + 0x28),unaff_EBP + -0x40);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c09968();
  puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
  piVar2 = puVar3 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar3 = 0;
  }
  FUN_50c0ae2d();
  return;
}


