/* FUN_5180cd8d - 0x5180cd8d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_5180cd8d(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint local_8;
  
  if (*(int *)this == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(uint *)(*(int *)this + -4);
  }
  if ((local_8 < param_1) && (uVar1 = FUN_5180d8d2(this), uVar1 < param_1)) {
    puVar2 = FUN_518019c0();
    if (*(void **)this != (void *)0x0) {
      if ((param_2 & 1) == 0) {
        memcpy(puVar2 + 1,*(void **)this,local_8);
      }
      FUN_51801ac1(&DAT_5181fdb0,(undefined4 *)(*(int *)this + -4));
    }
    *(uint **)this = puVar2 + 1;
  }
  if (*(int *)this != 0) {
    *(uint *)(*(int *)this + -4) = param_1;
  }
  return *(int *)this;
}


