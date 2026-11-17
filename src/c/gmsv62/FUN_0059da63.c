/* FUN_0059da63 - 0x0059da63 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0059da63(undefined4 *param_1,char param_2)

{
  char *_Str;
  char *pcVar1;
  int iVar2;
  
  _Str = (char *)*param_1;
  if (_Str == (char *)0x0) {
    iVar2 = -(uint)(param_2 != '\0');
  }
  else {
    pcVar1 = _strrchr(_Str,(int)param_2);
    if (pcVar1 == (char *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)pcVar1 - (int)_Str;
    }
  }
  return iVar2;
}


