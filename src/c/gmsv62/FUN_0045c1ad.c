/* FUN_0045c1ad - 0x0045c1ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_0045c1ad(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x44);
    if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar2)) {
      return 0xffffffff;
    }
    if ((*(int *)(iVar1 + iVar3) == param_2) && (*(int *)(iVar1 + iVar3 + 4) == param_3)) break;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x1c;
  }
  return uVar2;
}


