/* FUN_518100db - 0x518100db in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518100db(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x2c) = *puVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = puVar1[1];
  *(undefined4 *)(unaff_EBP + -0x24) = puVar1[2];
  *(undefined4 *)(unaff_EBP + -0x20) = puVar1[3];
  *(undefined4 *)(unaff_EBP + -0x1c) = puVar1[4];
  *(undefined4 *)(unaff_EBP + -0x18) = puVar1[5];
  *(undefined4 *)(unaff_EBP + -0x14) = puVar1[6];
  *(undefined4 *)(unaff_EBP + -0x10) = puVar1[7];
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(extraout_ECX + 0x7c);
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = FUN_518105c9((void *)(extraout_ECX + 0x84),(int *)(unaff_EBP + -0x2c),0);
  if ((uint)puVar1[0xc] < 0x10) {
    piVar2 = (int *)FUN_5181041b(puVar1 + 10);
    FUN_51804af0(piVar2,*(int **)(unaff_EBP + 0xc));
    FUN_51804af0(piVar2 + 1,*(int **)(unaff_EBP + 0x10));
  }
  piVar2 = (int *)(extraout_ECX + 0x80);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


