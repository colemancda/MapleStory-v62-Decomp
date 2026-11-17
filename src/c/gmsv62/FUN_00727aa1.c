/* FUN_00727aa1 - 0x00727aa1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00727aa1(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_c;
  int local_8;
  
  iVar3 = FUN_00727e9d(0);
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 0x38);
  local_c = iVar1 << 3;
  piVar5 = (int *)(param_1 + 0x8c);
  do {
    if ((*(int *)(iVar3 + 8) == 0) ||
       (*(uint *)(*(int *)(iVar3 + 8) + -4) <= (uint)(local_8 + iVar1))) {
      (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(0);
    }
    else {
      (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(1);
      iVar2 = *(int *)(*piVar5 + 4);
      uVar4 = FUN_00727b4b(*(undefined4 *)(local_c + 4 + *(int *)(iVar3 + 8)));
      (**(code **)(iVar2 + 0x1c))(uVar4);
    }
    local_8 = local_8 + 1;
    local_c = local_c + 8;
    piVar5 = piVar5 + 2;
  } while (local_8 < 4);
  return;
}


