/* FUN_006f563a - 0x006f563a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006f563a(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
     (uVar1 = param_1[3], uVar1 < param_2 || uVar1 == param_2)) {
    iVar2 = -(uint)(uVar1 < param_2);
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


