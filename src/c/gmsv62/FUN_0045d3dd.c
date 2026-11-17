/* FUN_0045d3dd - 0x0045d3dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0045d3dd(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int *local_8;
  
  iVar2 = FUN_0045c1e1(&stack0x00000004);
  if (-1 < iVar2) {
    local_c = 0;
    local_8 = (int *)(param_1 + 0x49c);
    piVar1 = (int *)(DAT_00978368 + 0x3278);
    do {
      if ((*local_8 != 0) && (iVar3 = FUN_0045c1e1(local_8), -1 < iVar3)) {
        iVar4 = FUN_0045e2eb();
        iVar5 = FUN_0045e2eb();
        if (iVar5 == iVar4) {
          iVar3 = *(int *)(iVar3 * 8 + 4 + *piVar1);
          iVar4 = *(int *)(*piVar1 + 4 + iVar2 * 8);
          if ((*(int *)(iVar4 + 0x1c) == *(int *)(iVar3 + 0x1c)) &&
             (*(int *)(iVar4 + 0x28) == *(int *)(iVar3 + 0x28))) {
            return local_c;
          }
        }
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < 10);
  }
  return -1;
}


