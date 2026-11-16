/* FUN_5180e1cc - 0x5180e1cc in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180e1cc(void)

{
  int iVar1;
  void *this;
  int unaff_EBP;
  
  FUN_5180ea30();
  FUN_5180c4c1((void *)(unaff_EBP + -0x14),(int)this);
  iVar1 = *(int *)((int)this + 0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_5180dfe5(this,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_5180c435();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


