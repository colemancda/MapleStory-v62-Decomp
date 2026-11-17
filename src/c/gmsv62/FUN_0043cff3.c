/* FUN_0043cff3 - 0x0043cff3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043cff3(int param_1)

{
  int *_Dst;
  
  for (_Dst = *(int **)(*(int *)(*(int *)((int)Self + 0x30) + 0xc) + 0xc);
      (_Dst[6] != 0 && (_Dst[6] != param_1)); _Dst = (int *)*_Dst) {
  }
  if (_Dst[6] != 0) {
    *(int *)_Dst[1] = *_Dst;
    *(int *)(*_Dst + 4) = _Dst[1];
    *(int *)_Dst[3] = _Dst[2];
    *(int *)(_Dst[2] + 4) = _Dst[3];
    *(int *)_Dst[5] = _Dst[4];
    *(int *)(_Dst[4] + 4) = _Dst[5];
    *(int *)_Dst[0x10] = _Dst[0xf];
    *(int *)(_Dst[0xf] + 4) = _Dst[0x10];
    _memset(_Dst,0,0x48);
  }
  return;
}


