/* FUN_504050cb - 0x504050cb in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_504050cb(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = Ordinal_202(&local_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*local_8 + 0x14))(local_8,param_1);
  piVar2 = local_8;
  if ((-1 < iVar1) &&
     ((param_2 == 0 ||
      (iVar1 = (**(code **)(*local_8 + 0xc))(local_8,param_2), piVar2 = local_8, -1 < iVar1)))) {
    local_c = (int *)0x0;
    iVar1 = (**(code **)*local_8)(local_8,&DAT_50435408,&local_c);
    iVar3 = *local_8;
    piVar2 = local_8;
    if (iVar1 < 0) goto LAB_50405149;
    (**(code **)(iVar3 + 8))(local_8);
    iVar1 = Ordinal_201(0,local_c);
    piVar2 = local_c;
  }
  iVar3 = *piVar2;
LAB_50405149:
  (**(code **)(iVar3 + 8))(piVar2);
  return iVar1;
}


