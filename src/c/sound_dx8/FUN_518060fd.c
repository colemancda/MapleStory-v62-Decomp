/* FUN_518060fd - 0x518060fd in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_518060fd(void)

{
  IBinding *pIVar1;
  IBinding *pIVar2;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  *this = &PTR_FUN_518197dc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[1] = &PTR_FUN_518197b8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_51806187();
  this[7] = 0;
  this[8] = 0;
  pIVar1 = *(IBinding **)(unaff_EBP + 0xc);
  pIVar2 = *(IBinding **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *this = &PTR_FUN_51819784;
  this[1] = &PTR_LAB_51819760;
  this[5] = &PTR_LAB_5181975c;
  this[6] = &PTR_LAB_51819758;
  FUN_5180692a(this,pIVar2,pIVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


