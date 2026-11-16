/* FUN_5180950d - 0x5180950d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


bool __thiscall FUN_5180950d(void *this,wchar_t *param_1)

{
  int *piVar1;
  char cVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  piVar1 = *(int **)this;
  if (piVar1 == (int *)0x0) {
    pwVar3 = (wchar_t *)0x0;
  }
  else {
    pwVar3 = (wchar_t *)*piVar1;
  }
  if (pwVar3 == param_1) {
    cVar2 = '\x01';
  }
  else {
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((iVar4 == 0) || (param_1 == (wchar_t *)0x0)) {
      cVar2 = '\0';
    }
    else {
      if (piVar1 == (int *)0x0) {
        pwVar3 = (wchar_t *)0x0;
      }
      else {
        pwVar3 = (wchar_t *)*piVar1;
      }
      iVar4 = wcscmp(pwVar3,param_1);
      cVar2 = '\x01' - (iVar4 != 0);
    }
  }
  return (bool)cVar2;
}


