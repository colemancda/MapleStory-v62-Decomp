/* FUN_0052614d - 0x0052614d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052614d(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    while (piVar3 = piVar3 + 1, piVar3 != param_2) {
      iVar1 = *piVar3;
      piVar4 = piVar3;
      if (iVar1 < *param_1) {
        for (; param_1 != piVar4; piVar4 = piVar4 + -1) {
          *piVar4 = piVar4[-1];
        }
        *param_1 = iVar1;
      }
      else {
        while( true ) {
          iVar2 = piVar4[-1];
          if (iVar2 <= iVar1) break;
          *piVar4 = iVar2;
          piVar4 = piVar4 + -1;
        }
        *piVar4 = iVar1;
      }
    }
  }
  return;
}


