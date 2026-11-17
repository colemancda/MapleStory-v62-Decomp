/* FUN_00650e34 - 0x00650e34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00650e34(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = param_3;
  if (param_3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_3;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_0064d61f(param_2);
  }
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    *piVar1 = iVar2;
  }
  if (iVar2 == 0) {
LAB_00650e85:
    uVar3 = 0;
  }
  else {
    param_3 = (int *)0x0;
    if (*(int *)(iVar2 + 0x28) != 0) {
      iVar2 = FUN_004b8f25(&param_2,&param_3);
      if (iVar2 == 0) goto LAB_00650e85;
    }
    uVar3 = 1;
  }
  return uVar3;
}


