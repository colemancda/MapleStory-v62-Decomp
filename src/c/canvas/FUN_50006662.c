/* FUN_50006662 - 0x50006662 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint * __cdecl FUN_50006662(undefined4 param_1,uint param_2)

{
  uint *_Dst;
  void *unaff_retaddr;
  
  _Dst = (uint *)(*DAT_50081da0)(param_2 + 6);
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


