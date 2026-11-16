/* FUN_50c06763 - 0x50c06763 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c06763(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  if (*(int *)(extraout_ECX + 0x18) != 0) {
    FUN_50c067ea();
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(uint *)(extraout_ECX + 0x18) = (-(uint)(*(int *)(unaff_EBP + 8) != 0) & 0xfffffffe) + 4 | 1;
  *(undefined4 *)(extraout_ECX + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
  if (iVar1 == 0) {
    puVar2 = FUN_50c025fb();
    *(uint **)(unaff_EBP + 8) = puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (puVar2 != (uint *)0x0) {
      uVar3 = FUN_50c06890(puVar2);
      goto LAB_50c067d8;
    }
  }
  else {
    puVar2 = FUN_50c025fb();
    *(uint **)(unaff_EBP + 8) = puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar2 != (uint *)0x0) {
      uVar3 = FUN_50c0686a(puVar2);
      goto LAB_50c067d8;
    }
  }
  uVar3 = 0;
LAB_50c067d8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x20) = uVar3;
  return;
}


