/* FUN_00616a87 - 0x00616a87 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00616a87(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = 1;
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar1 = param_2;
    iVar2 = param_2;
    if (param_2 == 1) {
      param_2 = 2;
      iVar1 = 1;
      iVar2 = 1;
    }
  }
  for (; iVar1 < param_2; iVar1 = iVar1 + 1) {
    FUN_00616aec();
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 200) = 0;
    }
  }
  return param_1 + 0xb0 + iVar2 * 0x18;
}


