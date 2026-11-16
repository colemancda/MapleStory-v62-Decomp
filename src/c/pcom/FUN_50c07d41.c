/* FUN_50c07d41 - 0x50c07d41 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c07d41(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *_Dst;
  ulong uVar5;
  uint *puVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  if ((uVar1 != param_1) || (*(int *)((int)this + 4) == 0)) {
    puVar2 = *(uint **)((int)this + 4);
    *(uint *)((int)this + 8) = param_1;
    FUN_50c07dec(this,param_2);
    _Dst = FUN_50c025fb();
    *(uint **)((int)this + 4) = _Dst;
    memset(_Dst,0,param_1 << 2);
    puVar6 = puVar2;
    if (puVar2 != (uint *)0x0) {
      while (puVar6 < puVar2 + uVar1) {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        while (uVar3 != 0) {
          uVar5 = _lrotr(*(ulong *)(uVar3 + 8),5);
          uVar4 = *(uint *)(uVar3 + 4);
          *(uint *)(uVar3 + 4) = _Dst[uVar5 % param_1];
          _Dst[uVar5 % param_1] = uVar3;
          uVar3 = uVar4;
        }
      }
      FUN_50c02783(&DAT_50c21310,puVar2);
    }
  }
  return;
}


