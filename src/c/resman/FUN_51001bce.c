/* FUN_51001bce - 0x51001bce in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_51001bce(void *this,undefined4 *param_1)

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
      goto LAB_51001c03;
    }
    uVar2 = (-(uint)(0x80 < uVar2) & 0xfffffffc) + 3;
  }
  if ((int)uVar2 < 0) {
    uVar3 = (*DAT_5100949c)(0,param_1 + -1);
    (*DAT_51009498)(uVar3);
    return;
  }
LAB_51001c03:
  FUN_510011e9();
  *param_1 = *(undefined4 *)((int)this + uVar2 * 4 + 0xc);
  *(undefined4 **)((int)this + uVar2 * 4 + 0xc) = param_1;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


