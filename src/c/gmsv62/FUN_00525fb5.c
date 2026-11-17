/* FUN_00525fb5 - 0x00525fb5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00525fb5(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = (int)param_2 - (int)param_1;
joined_r0x00525fc9:
  if ((int)(uVar3 & 0xfffffffc) < 0x41) {
    return;
  }
  iVar1 = param_2[-1];
  iVar5 = *param_1;
  iVar2 = param_1[((int)uVar3 >> 2) - ((int)uVar3 >> 0x1f) >> 1];
  piVar4 = param_2;
  piVar6 = param_1;
  if (iVar5 < iVar2) {
    if (iVar1 <= iVar2) {
      if (iVar5 < iVar1) {
        iVar5 = iVar1;
      }
      goto LAB_00526005;
    }
  }
  else if ((iVar5 < iVar1) || (iVar5 = iVar1, iVar2 < iVar1)) goto LAB_00526005;
  iVar5 = iVar2;
LAB_00526005:
  do {
    if (iVar5 <= *piVar6) {
      do {
        piVar4 = piVar4 + -1;
      } while (iVar5 < *piVar4);
      if (piVar4 <= piVar6) break;
      iVar1 = *piVar6;
      *piVar6 = *piVar4;
      *piVar4 = iVar1;
    }
    piVar6 = piVar6 + 1;
  } while( true );
  if ((int)((int)piVar6 - (int)param_1 & 0xfffffffcU) <
      (int)((int)param_2 - (int)piVar6 & 0xfffffffcU)) {
    FUN_00525fb5(param_1,piVar6,0);
    param_1 = piVar6;
  }
  else {
    FUN_00525fb5(piVar6,param_2,0);
    param_2 = piVar6;
  }
  uVar3 = (int)param_2 - (int)param_1;
  goto joined_r0x00525fc9;
}


