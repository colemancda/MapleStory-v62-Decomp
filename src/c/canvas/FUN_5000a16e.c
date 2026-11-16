/* FUN_5000a16e - 0x5000a16e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5000a16e(int param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x2004);
  *(undefined4 *)(param_1 + 0x2004) = *(undefined4 *)(param_1 + 0x2008);
  *(void **)(param_1 + 0x2008) = _Dst;
  memset(_Dst,0,*(int *)(param_1 + 0x200c) << 4);
  *(int *)(param_1 + 0x2014) = *(int *)(param_1 + 0x2014) + *(int *)(param_1 + 0x2018);
  *(int *)(param_1 + 0x2010) = *(int *)(param_1 + 0x2010) + -1;
  return;
}


