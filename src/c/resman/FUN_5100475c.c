/* FUN_5100475c - 0x5100475c in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_5100475c(void *this,uint param_1,int param_2)

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
    FUN_51004804(this,param_2);
    _Dst = FUN_51001acd();
    *(uint **)((int)this + 4) = _Dst;
    memset(_Dst,0,param_1 << 2);
    puVar6 = puVar2;
    if (puVar2 != (uint *)0x0) {
      while (puVar6 < puVar2 + uVar1) {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        while (uVar3 != 0) {
          uVar5 = FUN_51005629((int *)(uVar3 + 8));
          uVar4 = *(uint *)(uVar3 + 4);
          *(uint *)(uVar3 + 4) = _Dst[uVar5 % param_1];
          _Dst[uVar5 % param_1] = uVar3;
          uVar3 = uVar4;
        }
      }
      FUN_51001bce(&DAT_510097f0,puVar2);
    }
  }
  return;
}


