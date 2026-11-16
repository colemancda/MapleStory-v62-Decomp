/* FUN_51004697 - 0x51004697 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int __thiscall FUN_51004697(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (*(int *)this == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*(int *)this + -4);
  }
  if ((uVar3 < param_1) && (uVar1 = FUN_51004a9e(this), uVar1 < param_1)) {
    puVar2 = FUN_51001acd();
    if (*(void **)this != (void *)0x0) {
      if ((param_2 & 1) == 0) {
        memcpy(puVar2 + 1,*(void **)this,uVar3 << 2);
      }
      FUN_51001bce(&DAT_510097f0,(undefined4 *)(*(int *)this + -4));
    }
    *(uint **)this = puVar2 + 1;
  }
  if (*(int *)this != 0) {
    *(uint *)(*(int *)this + -4) = param_1;
  }
  return *(int *)this;
}


