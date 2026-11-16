/* FUN_51005298 - 0x51005298 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


uint * __cdecl FUN_51005298(undefined4 param_1,uint param_2)

{
  uint *_Dst;
  void *unaff_retaddr;
  
  _Dst = (uint *)(*DAT_510096c0)(param_2 + 6);
  if (_Dst != (uint *)0x0) {
    *_Dst = param_2;
    _Dst = _Dst + 1;
    if (unaff_retaddr != (void *)0x0) {
      memcpy(_Dst,unaff_retaddr,param_2);
    }
    *(undefined2 *)((int)_Dst + (param_2 & 0xfffffffe)) = 0;
  }
  return _Dst;
}


