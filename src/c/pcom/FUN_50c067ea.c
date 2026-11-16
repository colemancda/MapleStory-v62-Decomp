/* FUN_50c067ea - 0x50c067ea in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c067ea(void)

{
  int *piVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x24);
  FUN_50c026fc();
  uVar2 = *(uint *)(extraout_ECX + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((uVar2 & 2) == 0) {
    if (((uVar2 & 4) == 0) ||
       (puVar3 = *(undefined4 **)(extraout_ECX + 0x20), puVar3 == (undefined4 *)0x0))
    goto LAB_50c0684b;
    *puVar3 = &PTR_FUN_50c134ec;
    FUN_50c07810((int)puVar3);
  }
  else {
    puVar3 = *(undefined4 **)(extraout_ECX + 0x20);
    if (puVar3 == (undefined4 *)0x0) goto LAB_50c0684b;
    *puVar3 = &PTR_FUN_50c134f0;
    FUN_50c07810((int)puVar3);
  }
  FUN_50c02783(&DAT_50c21310,puVar3);
LAB_50c0684b:
  piVar1 = (int *)(extraout_ECX + 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
  }
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


