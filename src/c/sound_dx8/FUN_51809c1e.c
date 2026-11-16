/* FUN_51809c1e - 0x51809c1e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


LONG FUN_51809c1e(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  if (*(int *)(extraout_ECX + 0x24) == 0) {
    LVar4 = InterlockedDecrement((LONG *)(extraout_ECX + 4));
  }
  else {
    iVar2 = *(int *)(extraout_ECX + 0x14);
    puVar5 = (undefined4 *)(iVar2 + 0xc);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar5;
    FUN_518017b5();
    puVar3 = *(undefined4 **)(extraout_ECX + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 **)(unaff_EBP + -0x18) = puVar3;
    FUN_518017b5();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    LVar4 = InterlockedDecrement((LONG *)(extraout_ECX + 4));
    *(LONG *)(unaff_EBP + -0x10) = LVar4;
    if (LVar4 == 0) {
      FUN_51807d63((void *)(*(int *)(extraout_ECX + 0x20) + 8),*(int *)(extraout_ECX + 0x24));
      *(undefined4 *)(extraout_ECX + 0x24) = 0;
      *(undefined4 *)(*(int *)(extraout_ECX + 0x14) + 0x14) = 0;
    }
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar3 = 0;
    }
    piVar1 = (int *)(iVar2 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar5 = 0;
    }
    LVar4 = *(LONG *)(unaff_EBP + -0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return LVar4;
}


