/* FUN_518044f7 - 0x518044f7 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518044f7(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x3c);
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5181022b((void *)(unaff_EBP + -0x18),extraout_ECX + 0x44);
  piVar1 = (int *)(extraout_ECX + 0x40);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_5180115b(*(int *)(unaff_EBP + -0x14));
  }
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x7c);
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_5181070d(extraout_ECX + 0x84);
  piVar1 = (int *)(extraout_ECX + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_51813012(unaff_EBP + -0x18);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


