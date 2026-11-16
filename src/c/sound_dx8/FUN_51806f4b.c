/* FUN_51806f4b - 0x51806f4b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51806f4b(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar2 = *(undefined4 **)(extraout_ECX + 0x20);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar2;
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  LVar3 = InterlockedDecrement((LONG *)(extraout_ECX + 0xc));
  *(LONG *)(unaff_EBP + -0x10) = LVar3;
  if ((LVar3 == 0) && (*(int *)(extraout_ECX + 0x18) != 0)) {
    FUN_51807d63((void *)(*(int *)(extraout_ECX + 0x20) + 8),*(int *)(extraout_ECX + 0x18));
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
  }
  piVar1 = puVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


