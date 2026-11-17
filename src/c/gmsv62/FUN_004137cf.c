/* FUN_004137cf - 0x004137cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004137cf(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  if (*param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*param_1 + -4);
  }
  iVar3 = param_2;
  if (param_2 == -1) {
    iVar3 = local_8;
  }
  FUN_004193bb(local_8 + 1,2,(int)&param_2 + 3);
  iVar1 = iVar3 * 8 + 8;
  iVar2 = iVar3 * 8;
  FUN_0087a3a0(*param_1 + iVar1,iVar2 + *param_1,(iVar3 * 0x1fffffff + local_8) * 8);
  iVar3 = *param_1;
  for (uVar4 = iVar2 + iVar3; uVar4 < (uint)(iVar1 + iVar3); uVar4 = uVar4 + 8) {
    FUN_0041aaaf(uVar4);
  }
  return iVar2 + *param_1;
}


