/* FUN_51803e3c - 0x51803e3c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_51803e3c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 100;
  extraout_ECX[6] = 0;
  extraout_ECX[0xc] = 0x8000;
  extraout_ECX[0xd] = 0x4000;
  extraout_ECX[0xe] = 0x20000;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x16] = &PTR_FUN_51818444;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x1c] = 0;
  FUN_518102ed((int)(extraout_ECX + 0x1b));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x1e] = 0;
  FUN_51810320((int)(extraout_ECX + 0x1d));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 100;
  extraout_ECX[0x23] = 0x1f;
  extraout_ECX[0x21] = &PTR_FUN_51818440;
  extraout_ECX[0x26] = 0x18;
  *(undefined2 *)(extraout_ECX + 0xb) = 0;
  *extraout_ECX = &PTR_FUN_5181843c;
  *(undefined2 *)(extraout_ECX + 7) = 1;
  *(undefined2 *)((int)extraout_ECX + 0x1e) = 2;
  extraout_ECX[8] = 0x5622;
  *(undefined2 *)((int)extraout_ECX + 0x2a) = 0x10;
  *(undefined2 *)(extraout_ECX + 10) = 4;
  extraout_ECX[9] = 0x15888;
  return extraout_ECX;
}


