/* FUN_51801ac1 - 0x51801ac1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51801ac1(void *this,undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = param_1[-1];
  if ((int)uVar2 < 0) {
    uVar2 = ~uVar2;
  }
  if (uVar2 < 0x21) {
    uVar2 = (uint)(0x10 < uVar2);
  }
  else {
    if (uVar2 < 0x41) {
      uVar2 = 2;
      goto LAB_51801af6;
    }
    uVar2 = (-(uint)(0x80 < uVar2) & 0xfffffffc) + 3;
  }
  if ((int)uVar2 < 0) {
    uVar3 = (*DAT_5181fa5c)(0,param_1 + -1);
    (*DAT_5181fa58)(uVar3);
    return;
  }
LAB_51801af6:
  FUN_518017b5();
  *param_1 = *(undefined4 *)((int)this + uVar2 * 4 + 0xc);
  *(undefined4 **)((int)this + uVar2 * 4 + 0xc) = param_1;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


