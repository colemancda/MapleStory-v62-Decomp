/* FUN_0045ec92 - 0x0045ec92 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_0045ec92(undefined4 *param_1,undefined4 *param_2)

{
  void *_Buf1;
  void *_Buf2;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  _Buf1 = (void *)*param_1;
  _Buf2 = (void *)*param_2;
  if (_Buf1 == _Buf2) {
    bVar3 = true;
  }
  else {
    if (_Buf1 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)_Buf1 + -4);
    }
    if (_Buf2 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)_Buf2 + -4);
    }
    if (((iVar1 == iVar2) && (_Buf1 != (void *)0x0)) && (_Buf2 != (void *)0x0)) {
      iVar1 = _memcmp(_Buf1,_Buf2,*(size_t *)((int)_Buf1 + -4));
      bVar3 = iVar1 == 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}


