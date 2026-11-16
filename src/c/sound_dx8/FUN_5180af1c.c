/* FUN_5180af1c - 0x5180af1c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_5180af1c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_518199a0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5180c971();
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1b] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[1] = &PTR_LAB_518199dc;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 1;
  *extraout_ECX = &PTR_FUN_518199c0;
  extraout_ECX[2] = &PTR_LAB_518199bc;
  memset((void *)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)),0,0x2c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[3] = 0x54;
  return extraout_ECX;
}


