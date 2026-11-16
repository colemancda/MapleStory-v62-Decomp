/* FUN_50c0d8a4 - 0x50c0d8a4 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


size_t * __cdecl FUN_50c0d8a4(void *param_1,void *param_2)

{
  size_t *_Dst;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((int)param_1 + -4) >> 1;
  }
  if (param_2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)param_2 + -4) >> 1;
  }
  _Dst = FUN_50c02a35(0,uVar1 + 1 + uVar2);
  memcpy(_Dst,param_1,uVar2 * 2);
  *(undefined2 *)((int)_Dst + uVar2 * 2) = 0x2f;
  memcpy((void *)((int)_Dst + uVar2 * 2 + 2),param_2,uVar1 * 2);
  return _Dst;
}


