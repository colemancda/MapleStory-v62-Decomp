/* FUN_0072951b - 0x0072951b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0072951b(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int local_8;
  
  iVar2 = FUN_007295d1(0);
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x38);
  iVar6 = iVar1 << 3;
  piVar5 = (int *)(param_1 + 0x84);
  do {
    if ((*(int *)(iVar2 + 8) == 0) ||
       (*(uint *)(*(int *)(iVar2 + 8) + -4) <= (uint)(local_8 + iVar1))) {
      (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(0);
    }
    else {
      (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(1);
      iVar3 = FUN_008345ae(*(undefined4 *)(iVar6 + 4 + *(int *)(iVar2 + 8)));
      uVar4 = 1;
      if ((iVar3 != 1) || (*(int *)(param_1 + 0xbc) == **(int **)(iVar6 + 4 + *(int *)(iVar2 + 8))))
      {
        uVar4 = 0;
      }
      (**(code **)(*(int *)(*piVar5 + 4) + 0x1c))(uVar4);
    }
    local_8 = local_8 + 1;
    iVar6 = iVar6 + 8;
    piVar5 = piVar5 + 2;
  } while (local_8 < 4);
  return;
}


