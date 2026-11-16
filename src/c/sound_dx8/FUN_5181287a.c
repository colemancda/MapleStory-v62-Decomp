/* FUN_5181287a - 0x5181287a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5181287a(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_51812913();
  iVar2 = *(int *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x1c) == iVar2) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    iVar2 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    iVar2 = unaff_EBP + -0x20;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
  FUN_51810353(iVar1);
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe,
     *(int *)(unaff_EBP + -0x14) != 0)) {
    FUN_51813012(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_51813012(unaff_EBP + -0x20);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


