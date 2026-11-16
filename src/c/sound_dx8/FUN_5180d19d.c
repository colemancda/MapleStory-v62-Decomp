/* FUN_5180d19d - 0x5180d19d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180d19d(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_51819ae8;
  extraout_ECX[3] = &PTR_LAB_51819ae0;
  extraout_ECX[4] = &PTR_LAB_51819ae4;
  iVar1 = extraout_ECX[0x18];
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_51801ac1(&DAT_5181fdb0,(undefined4 *)extraout_ECX[0x17]);
  }
  iVar1 = extraout_ECX[0x16];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 != 0) {
    FUN_51813012((int)(extraout_ECX + 0x15));
    extraout_ECX[0x16] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x10] = &PTR_FUN_51819af0;
  FUN_5180206f((int)(extraout_ECX + 0x10));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_518022c9(extraout_ECX + 0xb);
  iVar1 = extraout_ECX[10];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_51813012((int)(extraout_ECX + 9));
    extraout_ECX[10] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5180d2d7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_51818148;
  return;
}


