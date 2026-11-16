/* FUN_5180107d - 0x5180107d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180107d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_51818108;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_518011a6(extraout_ECX);
  if (extraout_ECX[6] != 0) {
    (*DAT_5181f9c0)(extraout_ECX[6]);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_518022c9(extraout_ECX + 0x13);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0xe] = &PTR_FUN_51818110;
  FUN_5180206f((int)(extraout_ECX + 0xe));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[8] = &PTR_FUN_51818114;
  FUN_51801d46((int)(extraout_ECX + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = &PTR_FUN_51818118;
  FUN_5180226a((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


