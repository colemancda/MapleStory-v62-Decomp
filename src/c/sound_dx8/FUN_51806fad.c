/* FUN_51806fad - 0x51806fad in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51806fad(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x50);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_51803161(extraout_ECX + 0x4c);
    *(undefined4 *)(extraout_ECX + 0x50) = 0;
  }
  iVar1 = *(int *)(extraout_ECX + 0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_51813012(extraout_ECX + 0x3c);
    *(undefined4 *)(extraout_ECX + 0x40) = 0;
  }
  iVar1 = *(int *)(extraout_ECX + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 != 0) {
    FUN_51813012(extraout_ECX + 0x34);
    *(undefined4 *)(extraout_ECX + 0x38) = 0;
  }
  iVar1 = *(int *)(extraout_ECX + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_51813012(extraout_ECX + 0x18);
    *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51807bb9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


