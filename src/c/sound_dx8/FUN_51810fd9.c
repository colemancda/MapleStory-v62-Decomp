/* FUN_51810fd9 - 0x51810fd9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51810fd9(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *_Dst;
  uint uVar5;
  uint *puVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  if ((uVar1 != param_1) || (*(int *)((int)this + 4) == 0)) {
    puVar2 = *(uint **)((int)this + 4);
    *(uint *)((int)this + 8) = param_1;
    FUN_51811081(this,param_2);
    _Dst = FUN_518019c0();
    *(uint **)((int)this + 4) = _Dst;
    memset(_Dst,0,param_1 << 2);
    puVar6 = puVar2;
    if (puVar2 != (uint *)0x0) {
      while (puVar6 < puVar2 + uVar1) {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        while (uVar3 != 0) {
          uVar5 = FUN_518047e1((int *)(uVar3 + 8));
          uVar4 = *(uint *)(uVar3 + 4);
          *(uint *)(uVar3 + 4) = _Dst[uVar5 % param_1];
          _Dst[uVar5 % param_1] = uVar3;
          uVar3 = uVar4;
        }
      }
      FUN_51801ac1(&DAT_5181fdb0,puVar2);
    }
  }
  return;
}


