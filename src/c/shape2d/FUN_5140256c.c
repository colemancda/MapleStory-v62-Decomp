/* FUN_5140256c - 0x5140256c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_5140256c(void *this,undefined4 *param_1)

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
      goto LAB_514025a1;
    }
    uVar2 = (-(uint)(0x80 < uVar2) & 0xfffffffc) + 3;
  }
  if ((int)uVar2 < 0) {
    uVar3 = (*DAT_5141166c)(0,param_1 + -1);
    (*DAT_51411668)(uVar3);
    return;
  }
LAB_514025a1:
  FUN_5140126a();
  *param_1 = *(undefined4 *)((int)this + uVar2 * 4 + 0xc);
  *(undefined4 **)((int)this + uVar2 * 4 + 0xc) = param_1;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


