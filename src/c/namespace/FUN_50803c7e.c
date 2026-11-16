/* FUN_50803c7e - 0x50803c7e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_50803c7e(void *this,undefined4 *param_1)

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
      goto LAB_50803cb3;
    }
    uVar2 = (-(uint)(0x80 < uVar2) & 0xfffffffc) + 3;
  }
  if ((int)uVar2 < 0) {
    uVar3 = (*DAT_5081e68c)(0,param_1 + -1);
    (*DAT_5081e688)(uVar3);
    return;
  }
LAB_50803cb3:
  FUN_508012a1();
  *param_1 = *(undefined4 *)((int)this + uVar2 * 4 + 0xc);
  *(undefined4 **)((int)this + uVar2 * 4 + 0xc) = param_1;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


