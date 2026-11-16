/* FUN_50403909 - 0x50403909 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50403909(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)*param_1;
  *param_2 = (int)param_1;
  *param_3 = (int)param_1;
  while (iVar2 = *(int *)((-(uint)(*param_2 != 0) & *param_2 - 0x10U) + 8),
        puVar4 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U), puVar4 != (undefined4 *)0x0) {
    piVar3 = (int *)*puVar4;
    while( true ) {
      if (piVar3 == (int *)0x0) goto LAB_50403954;
      if (piVar3 == piVar1) break;
      piVar3 = (int *)(**(code **)(*piVar3 + 0x10))();
    }
    *param_2 = (int)puVar4;
  }
LAB_50403954:
  do {
    iVar2 = *(int *)((-(uint)(*param_3 != 0) & *param_3 - 0x10U) + 4);
    puVar4 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    piVar3 = (int *)*puVar4;
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return;
      }
      if (piVar3 == piVar1) break;
      piVar3 = (int *)(**(code **)(*piVar3 + 0x10))();
    }
    *param_3 = (int)puVar4;
  } while( true );
}


