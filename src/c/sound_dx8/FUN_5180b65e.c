/* FUN_5180b65e - 0x5180b65e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_5180b65e(void *this,void *param_1,uint param_2,int param_3)

{
  uint _Size;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if (param_2 == 0) {
        return local_8;
      }
      _Size = *(int *)(*(int *)((int)this + 0x10) + 0x20) - (int)*(void **)((int)this + 0x14);
      if (param_2 <= _Size) {
        _Size = param_2;
      }
      if (_Size == 0) break;
      memcpy(param_1,*(void **)((int)this + 0x14),_Size);
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + param_2;
      param_1 = (void *)((int)param_1 + _Size);
      local_8 = local_8 + _Size;
      param_2 = param_2 - _Size;
    }
    if (param_3 == 0) break;
    (**(code **)(*(int *)this + 0x10))();
  }
  return local_8;
}


