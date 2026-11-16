/* FUN_51812791 - 0x51812791 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812791(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *_Dst;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    _Dst = (void *)(*DAT_5181fc80)(0xe);
    *param_2 = _Dst;
    if (_Dst == (void *)0x0) {
      uVar1 = 0x8007000e;
    }
    else {
      memcpy(_Dst,L"Output",0xe);
      uVar1 = 0;
    }
  }
  return uVar1;
}


