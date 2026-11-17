/* FUN_005990fe - 0x005990fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_005990fe(undefined4 *param_1,undefined4 *param_2)

{
  void *_Buf1;
  void *_Buf2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  _Buf1 = (void *)*param_1;
  _Buf2 = (void *)*param_2;
  if (_Buf1 == _Buf2) {
    bVar4 = true;
  }
  else {
    if (_Buf1 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + -4) >> 1;
    }
    if (_Buf2 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)((int)_Buf2 + -4) >> 1;
    }
    if (((uVar3 == uVar2) && (_Buf1 != (void *)0x0)) && (_Buf2 != (void *)0x0)) {
      iVar1 = _memcmp(_Buf1,_Buf2,*(uint *)((int)_Buf1 + -4) & 0xfffffffe);
      bVar4 = iVar1 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}


