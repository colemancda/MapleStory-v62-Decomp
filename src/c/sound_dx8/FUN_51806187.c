/* FUN_51806187 - 0x51806187 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_51806187(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = extraout_ECX + 1;
  *puVar1 = &PTR_LAB_5181964c;
  *extraout_ECX = &PTR_FUN_51819814;
  *puVar1 = &PTR_LAB_51819810;
  if (DAT_5181ff10 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *DAT_5181ff10;
  }
  FUN_51812e4d(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)puVar1,uVar2,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


