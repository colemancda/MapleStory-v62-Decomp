/* FUN_005c9c3b - 0x005c9c3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x005c9c48) */
/* WARNING: Removing unreachable block (ram,0x005c9c82) */

void __thiscall FUN_005c9c3b(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    piVar1 = *(int **)(param_1 + 0x70);
    iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,-(uint)(param_2 != 0));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      piVar1 = *(int **)(param_1 + 0x74);
      iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,-(uint)(param_2 != 0));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
      }
    }
  }
  return;
}


