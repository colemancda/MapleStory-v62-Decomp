/* FUN_5080aa4e - 0x5080aa4e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


size_t * __cdecl FUN_5080aa4e(short *param_1,short *param_2)

{
  short sVar1;
  size_t _Size;
  size_t *_Dst;
  int iVar2;
  undefined1 local_1c [16];
  uint local_c;
  uint local_8;
  
  if (param_1 == (short *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(uint *)(param_1 + -2) >> 1;
  }
  if (param_2 == (short *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *(uint *)(param_2 + -2) >> 1;
  }
  if ((((param_1 == (short *)0x0) || (*param_1 == 0)) || (param_2 == (short *)0x0)) ||
     (((sVar1 = *param_2, sVar1 == 0 || (sVar1 == 0x2f)) || (sVar1 == 0x5c)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  _Dst = FUN_50803a6e(0,local_c + iVar2 + local_8);
  if (_Dst == (size_t *)0x0) {
    FUN_5080450d(local_1c,0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1c,(ThrowInfo *)&DAT_50819008);
  }
  _Size = local_8 * 2;
  memcpy(_Dst,param_1,_Size);
  if (iVar2 != 0) {
    *(undefined2 *)(_Size + (int)_Dst) = 0x2f;
  }
  memcpy((void *)((int)_Dst + (iVar2 + local_8) * 2),param_2,local_c * 2);
  return _Dst;
}


