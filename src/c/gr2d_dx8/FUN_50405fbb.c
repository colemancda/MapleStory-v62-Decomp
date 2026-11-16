/* FUN_50405fbb - 0x50405fbb in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __thiscall FUN_50405fbb(void *this,uint param_1,uint param_2)

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
  if ((uVar3 < param_1) && (uVar1 = FUN_50406630(this), uVar1 < param_1)) {
    puVar2 = FUN_504015ff();
    if (*(void **)this != (void *)0x0) {
      if ((param_2 & 1) == 0) {
        memcpy(puVar2 + 1,*(void **)this,uVar3 * 0x5c);
      }
      FUN_5040170b(&DAT_50438f50,(undefined4 *)(*(int *)this + -4));
    }
    *(uint **)this = puVar2 + 1;
  }
  if (*(int *)this != 0) {
    *(uint *)(*(int *)this + -4) = param_1;
  }
  return *(int *)this;
}


