/* FUN_004a3109 - 0x004a3109 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a3109(int *param_1,char *param_2)

{
  char *_Str1;
  
  if (param_2 == (char *)0x0) {
    param_2 = DAT_00980dfc;
  }
  _Str1 = (char *)*param_1;
  if ((char *)*param_1 == (char *)0x0) {
    _Str1 = DAT_00980dfc;
  }
  _strcmp(_Str1,param_2);
  return;
}


