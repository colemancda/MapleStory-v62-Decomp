/* FUN_005e312e - 0x005e312e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005e312e(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = -(uint)(param_2 != '\0');
  }
  else {
    iVar1 = FUN_0087b57c(iVar2 + param_3 * 2,(short)param_2);
    if (iVar1 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar1 - iVar2 >> 1;
    }
  }
  return iVar2;
}


