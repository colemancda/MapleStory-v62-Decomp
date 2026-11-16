/* FUN_50c06063 - 0x50c06063 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint * __cdecl FUN_50c06063(undefined4 param_1,uint param_2)

{
  uint *_Dst;
  void *unaff_retaddr;
  
  _Dst = (uint *)(*DAT_50c211e0)(param_2 + 6);
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


