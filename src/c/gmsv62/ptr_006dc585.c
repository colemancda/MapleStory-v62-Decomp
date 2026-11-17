/* ptr_006dc585 - 0x006dc585 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_006dc585(int param_1,int param_2)

{
  void *_Buf1;
  void *_Buf2;
  int iVar1;
  size_t _Size;
  int iVar2;
  
  _Buf1 = *(void **)(param_1 + 8);
  if (_Buf1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)_Buf1 + -4);
  }
  _Buf2 = *(void **)(param_2 + 8);
  if (_Buf2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)_Buf2 + -4);
  }
  if (iVar2 == iVar1) {
    if (_Buf1 == (void *)0x0) {
      _Size = 0;
    }
    else {
      _Size = *(size_t *)((int)_Buf1 + -4);
    }
    iVar2 = _memcmp(_Buf1,_Buf2,_Size);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}


