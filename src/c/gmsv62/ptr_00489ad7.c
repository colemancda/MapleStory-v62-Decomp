/* ptr_00489ad7 - 0x00489ad7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00489ad7(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 == 1000) && (uVar1 = *(uint *)(param_1 + 0x560), -1 < (int)uVar1)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x564) + 0x488);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = *(uint *)(iVar2 + -4);
    }
    if (uVar1 < uVar3) {
      FUN_00457d6c(uVar1);
    }
  }
  return;
}


