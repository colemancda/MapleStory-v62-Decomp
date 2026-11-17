/* FUN_0045c16f - 0x0045c16f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0045c16f(int param_1,int param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_3 = 0xffffffff;
  iVar2 = 0;
  *param_4 = 0;
  for (uVar3 = 0; (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
      uVar3 = uVar3 + 1) {
    if (*(int *)(iVar1 + iVar2) == param_2) {
      if (*param_3 == 0xffffffff) {
        *param_3 = uVar3;
      }
      *param_4 = *param_4 + 1;
    }
    iVar2 = iVar2 + 0x1c;
  }
  return;
}


