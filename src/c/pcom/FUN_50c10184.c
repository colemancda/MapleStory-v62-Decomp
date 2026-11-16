/* FUN_50c10184 - 0x50c10184 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall FUN_50c10184(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  size_t *psVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    if (*(undefined4 **)this == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined4 **)this;
    }
    uVar2 = FUN_50c04cbc(this);
    psVar3 = FUN_50c02a35(uVar4,uVar2);
    *param_1 = psVar3;
    iVar1 = (-(uint)(psVar3 != (size_t *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}


