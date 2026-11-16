/* FUN_5180e157 - 0x5180e157 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5180e157(void)

{
  int iVar1;
  void *this;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_5180ea30();
  FUN_5180c4c1((void *)(unaff_EBP + -0x14),(int)this);
  uVar2 = 0;
  iVar1 = *(int *)((int)this + 0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_5180dfe5(this,0);
    if (*(int *)((int)this + 0x2c) == -1) {
      *(int *)((int)this + 100) = *(int *)((int)this + 100) % *(int *)((int)this + 0x60);
    }
    if (*(int *)((int)this + 100) < *(int *)((int)this + 0x60)) {
      uVar2 = 1;
      FUN_5180dfe5(this,1);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      goto LAB_5180e1b0;
    }
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
LAB_5180e1b0:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180c435();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


