/* FUN_0085c828 - 0x0085c828 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085c828(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if ((*param_2 != 0) && (*(int *)(*param_2 + -4) != 0)) {
    FUN_0047cf76();
  }
  local_8 = 0;
  local_c = 0;
  while( true ) {
    piVar4 = *(int **)(param_1 + 0x2c74);
    FUN_0085cd50();
    if (*piVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*piVar4 + -4);
    }
    if (iVar3 <= local_8) break;
    piVar4 = (int *)(**(int **)(param_1 + 0x2c74) + local_c);
    if (((*piVar4 != 0) &&
        (((cVar1 = *(char *)((int)piVar4 + 0x11), cVar1 == '\0' || (cVar1 == '\x03')) ||
         (cVar1 == '\x04')))) &&
       ((-1 < *(int *)((int)piVar4 + 0x12) &&
        (*(int *)((*(int **)(param_1 + 0x2c74))[2] + local_8 * 4) == 0)))) {
      piVar2 = (int *)FUN_0047cf98(0xffffffff);
      *piVar2 = *piVar4;
    }
    local_8 = local_8 + 1;
    local_c = local_c + 0x16;
  }
  return;
}


