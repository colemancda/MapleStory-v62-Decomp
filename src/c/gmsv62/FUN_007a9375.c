/* FUN_007a9375 - 0x007a9375 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a9375(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  if (0 < param_3) {
    local_8 = 1;
    piVar4 = (int *)(param_2 + 0x90);
    do {
      if (local_8 < param_3) {
        iVar3 = param_3 - local_8;
        piVar2 = piVar4;
        do {
          piVar5 = piVar2 + 0x26;
          if (param_1 == 0) {
            if (*piVar4 < *piVar5) goto LAB_007a93b3;
          }
          else if (*piVar5 < *piVar4) {
LAB_007a93b3:
            FUN_007b4bc9(piVar4 + -0x24,piVar2 + 2);
          }
          iVar3 = iVar3 + -1;
          piVar2 = piVar5;
        } while (iVar3 != 0);
      }
      piVar4 = piVar4 + 0x26;
      bVar1 = local_8 < param_3;
      local_8 = local_8 + 1;
    } while (bVar1);
  }
  return;
}


