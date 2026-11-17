/* FUN_004150c0 - 0x004150c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004150c0(int *param_1,size_t param_2)

{
  char *_Str;
  
  _Str = (char *)*param_1;
  _Str[-0xffffffff0000000c] = '\x01';
  _Str[-0xffffffff0000000b] = '\0';
  _Str[-0xffffffff0000000a] = '\0';
  _Str[-0xffffffff00000009] = '\0';
  if (param_2 == 0xffffffff) {
    param_2 = _strlen(_Str);
  }
  else {
    *(undefined1 *)(*param_1 + param_2) = 0;
  }
  *(size_t *)(_Str + -4) = param_2;
  return;
}


