/* FUN_005266d6 - 0x005266d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x005266e8) */

void __thiscall FUN_005266d6(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x978) != 0) {
    piVar1 = *(int **)(param_1 + 0x978);
    iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,(-(uint)(param_2 != 0) & 0xff000000) + 0xffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
    }
  }
  return;
}


