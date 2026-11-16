/* FUN_50403a3e - 0x50403a3e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_50403a3e(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  do {
    piVar5 = param_1;
    param_1 = (int *)(**(code **)(*piVar5 + 0x10))();
    piVar4 = param_2;
    do {
      piVar1 = (int *)(**(code **)(*piVar4 + 0x10))();
      if (param_1 == piVar4) {
        iVar2 = (**(code **)*piVar5)();
LAB_50403aa2:
        if (iVar2 == 0) {
          iVar3 = (**(code **)(*piVar4 + 0xc))(1);
          iVar2 = (**(code **)(*piVar5 + 0xc))(1);
          iVar2 = iVar2 - iVar3;
        }
        return iVar2;
      }
      if (piVar5 == piVar1) {
        iVar2 = (**(code **)*piVar4)();
        iVar2 = -iVar2;
        goto LAB_50403aa2;
      }
      if (param_1 == piVar1) {
        iVar2 = (**(code **)*piVar5)();
        iVar3 = (**(code **)*piVar4)();
        if (iVar3 < iVar2) {
          return 1;
        }
        iVar2 = (iVar3 <= iVar2) - 1;
        goto LAB_50403aa2;
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
  } while( true );
}


