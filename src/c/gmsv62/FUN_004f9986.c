/* FUN_004f9986 - 0x004f9986 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004f9986(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  iVar3 = param_3;
  do {
    if (iVar2 < param_3) {
      piVar1 = (int *)(*param_1 + 4 + iVar2 * 0xc);
      do {
        if (*piVar1 <= *(int *)(param_4 + 4)) break;
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (iVar2 < param_3);
    }
    iVar3 = iVar3 + -1;
    if (param_2 < iVar3) {
      piVar1 = (int *)(*param_1 + 4 + iVar3 * 0xc);
      do {
        if (*(int *)(param_4 + 4) <= *piVar1) break;
        iVar3 = iVar3 + -1;
        piVar1 = piVar1 + -3;
      } while (param_2 < iVar3);
    }
    if (iVar3 <= iVar2) {
      return iVar2;
    }
    FUN_004f9ac0(*param_1 + iVar2 * 0xc,*param_1 + iVar3 * 0xc);
    iVar2 = iVar2 + 1;
  } while( true );
}


