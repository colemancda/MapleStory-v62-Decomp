/* FUN_5180b075 - 0x5180b075 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_5180b075(void *this,void *param_1,uint param_2,int param_3)

{
  uint _Size;
  int local_8;
  
  local_8 = 0;
LAB_5180b085:
  do {
    while( true ) {
      if (param_2 == 0) {
        return local_8;
      }
      _Size = *(uint *)((int)this + 0x70);
      if (param_2 < *(uint *)((int)this + 0x70)) {
        _Size = param_2;
      }
      if (_Size == 0) break;
      memcpy(param_1,(void *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x74)),_Size);
      *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + _Size;
      *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) - _Size;
      param_1 = (void *)((int)param_1 + _Size);
      local_8 = local_8 + _Size;
      param_2 = param_2 - _Size;
    }
    while (*(int *)((int)this + 0x80) != 8) {
      if (*(int *)((int)this + 0x70) != 0) goto LAB_5180b085;
      FUN_5180b2f1((int)this);
    }
    if (*(int *)((int)this + 0x70) == 0) {
      if (param_3 == 0) {
        return local_8;
      }
      (**(code **)(*(int *)this + 0x10))();
    }
  } while( true );
}


