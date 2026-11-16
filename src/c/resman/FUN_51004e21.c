/* FUN_51004e21 - 0x51004e21 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


size_t * __cdecl FUN_51004e21(undefined4 param_1,int param_2)

{
  size_t _Size;
  size_t *_Dst;
  void *unaff_retaddr;
  
  _Dst = (size_t *)(*DAT_510096c0)(param_2 * 2 + 6);
  if (_Dst != (size_t *)0x0) {
    _Size = param_2 * 2;
    *_Dst = _Size;
    _Dst = _Dst + 1;
    if (unaff_retaddr != (void *)0x0) {
      memcpy(_Dst,unaff_retaddr,_Size);
    }
    *(undefined2 *)(_Size + (int)_Dst) = 0;
  }
  return _Dst;
}


