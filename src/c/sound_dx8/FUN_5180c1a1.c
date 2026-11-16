/* FUN_5180c1a1 - 0x5180c1a1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


bool __fastcall FUN_5180c1a1(int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_8;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    local_8 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,&local_8);
    if (((-1 < iVar2) && ((local_8 & 2) == 0)) &&
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x50))(*(int **)(param_1 + 0x68)),
       -1 < iVar2)) {
      if (*(int *)(*(int *)(param_1 + 100) + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
        (**(code **)(**(int **)(param_1 + 0x70) + 0x10))();
      }
      iVar2 = FUN_5180bf93();
      *(uint *)(param_1 + 0x74) = (uint)(iVar2 == 0);
      return (iVar2 == 0) == 0;
    }
  }
  return false;
}


