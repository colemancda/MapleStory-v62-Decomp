/* FUN_00525bae - 0x00525bae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00525bae(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if ((int)((int)param_2 - param_1 & 0xfffffff0U) < 0x101) {
    FUN_005261a3();
  }
  else {
    FUN_0052606b(param_1,param_2,0);
    piVar6 = (int *)(param_1 + 0x100);
    FUN_005261a3(param_1,piVar6,0);
    for (; piVar6 != param_2; piVar6 = piVar6 + 4) {
      iVar1 = *piVar6;
      iVar2 = piVar6[1];
      iVar3 = piVar6[2];
      iVar4 = piVar6[3];
      piVar7 = piVar6;
      while (piVar5 = piVar7 + -4, iVar1 < *piVar5) {
        *piVar7 = *piVar5;
        piVar7[1] = piVar7[-3];
        piVar7[2] = piVar7[-2];
        piVar7[3] = piVar7[-1];
        piVar7 = piVar5;
      }
      *piVar7 = iVar1;
      piVar7[1] = iVar2;
      piVar7[2] = iVar3;
      piVar7[3] = iVar4;
    }
  }
  return;
}


