/* FUN_518022eb - 0x518022eb in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_518022eb(void *this,uint param_1,uint param_2)

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
  if ((uVar3 < param_1) && (uVar1 = FUN_5180265c(this), uVar1 < param_1)) {
    puVar2 = FUN_518019c0();
    if (*(void **)this != (void *)0x0) {
      if ((param_2 & 1) == 0) {
        memcpy(puVar2 + 1,*(void **)this,uVar3 << 2);
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


